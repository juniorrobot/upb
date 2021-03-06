
#undef NDEBUG  /* ensure tests always assert. */
#include "upb_table.h"
#include "upb_data.h"
#include "test_util.h"
#include <assert.h>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <ext/hash_map>
#include <sys/resource.h>
#include <iostream>

using std::string;
using std::vector;

typedef struct {
  upb_inttable_entry e;
  uint32_t value;  /* key*2 */
} inttable_entry;

typedef struct {
  upb_strtable_entry e;
  int32_t value;  /* ASCII Value of first letter */
} strtable_entry;

double get_usertime()
{
  struct rusage usage;
  getrusage(RUSAGE_SELF, &usage);
  return usage.ru_utime.tv_sec + (usage.ru_utime.tv_usec/1000000.0);
}

/* num_entries must be a power of 2. */
void test_strtable(const vector<string>& keys, uint32_t num_to_insert)
{
  /* Initialize structures. */
  upb_strtable table;
  std::map<string, int32_t> m;
  upb_strtable_init(&table, 0, sizeof(strtable_entry));
  std::set<string> all;
  for(size_t i = 0; i < num_to_insert; i++) {
    const string& key = keys[i];
    all.insert(key);
    strtable_entry e;
    e.value = key[0];
    upb_strptr str = upb_strduplen(key.c_str(), key.size());
    e.e.key = str;
    upb_strtable_insert(&table, &e.e);
    upb_string_unref(str);  // The table still owns a ref.
    m[key] = key[0];
  }

  /* Test correctness. */
  for(uint32_t i = 0; i < keys.size(); i++) {
    const string& key = keys[i];
    upb_strptr str = upb_strduplen(key.c_str(), key.size());
    strtable_entry *e = (strtable_entry*)upb_strtable_lookup(&table, str);
    if(m.find(key) != m.end()) { /* Assume map implementation is correct. */
      assert(e);
      assert(upb_streql(e->e.key, str));
      assert(e->value == key[0]);
      assert(m[key] == key[0]);
    } else {
      assert(e == NULL);
    }
    upb_string_unref(str);
  }

  strtable_entry *e;
  for(e = (strtable_entry*)upb_strtable_begin(&table); e;
      e = (strtable_entry*)upb_strtable_next(&table, &e->e)) {
    string tmp(upb_string_getrobuf(e->e.key), upb_strlen(e->e.key));
    std::set<string>::iterator i = all.find(tmp);
    assert(i != all.end());
    all.erase(i);
  }
  assert(all.empty());

  upb_strtable_free(&table);
}

/* num_entries must be a power of 2. */
void test_inttable(int32_t *keys, size_t num_entries)
{
  /* Initialize structures. */
  upb_inttable table;
  uint32_t largest_key = 0;
  std::map<uint32_t, uint32_t> m;
  __gnu_cxx::hash_map<uint32_t, uint32_t> hm;
  upb_inttable_init(&table, num_entries, sizeof(inttable_entry));
  for(size_t i = 0; i < num_entries; i++) {
    int32_t key = keys[i];
    largest_key = UPB_MAX((int32_t)largest_key, key);
    inttable_entry e;
    e.e.key = key;
    e.value = key*2;
    upb_inttable_insert(&table, &e.e);
    m[key] = key*2;
    hm[key] = key*2;
  }

  /* Test correctness. */
  for(uint32_t i = 1; i <= largest_key; i++) {
    inttable_entry *e = (inttable_entry*)upb_inttable_lookup(
        &table, i);
    if(m.find(i) != m.end()) { /* Assume map implementation is correct. */
      assert(e);
      assert(e->e.key == i);
      assert(e->value == i*2);
      assert(m[i] == i*2);
      assert(hm[i] == i*2);
    } else {
      assert(e == NULL);
    }
  }

  /* Test performance. We only test lookups for keys that are known to exist. */
  uintptr_t x = 0;
  const unsigned int iterations = 0xFFFFFF;
  const int32_t mask = num_entries - 1;
  printf("Measuring sequential loop overhead...");
  fflush(stdout);
  double before = get_usertime();
  for(unsigned int i = 0; i < iterations; i++) {
    int32_t key = keys[i & mask];
    x += key;
  }
  double seq_overhead = get_usertime() - before;
  printf("%0.3f seconds for %d iterations\n", seq_overhead, iterations);

  printf("Measuring random loop overhead...");
  rand();
  fflush(stdout);
  before = get_usertime();
  for(unsigned int i = 0; i < iterations; i++) {
    int32_t key = keys[rand() & mask];
    x += key;
  }
  double rand_overhead = get_usertime() - before;
  printf("%0.3f seconds for %d iterations\n", rand_overhead, iterations);

  printf("upb_table(seq): ");
  fflush(stdout);
  before = get_usertime();
  for(unsigned int i = 0; i < iterations; i++) {
    int32_t key = keys[i & mask];
    inttable_entry *e = (inttable_entry*)upb_inttable_lookup(&table, key);
    x += (uintptr_t)e;
  }
  double total = get_usertime() - before;
  double without_overhead = total - seq_overhead;
  printf("%0.3f seconds (%0.3f - %0.3f overhead) for %d iterations.  %s/s\n", without_overhead, total, seq_overhead, iterations, eng(iterations/without_overhead, 3, false));

  printf("upb_table(rand): ");
  fflush(stdout);
  before = get_usertime();
  for(unsigned int i = 0; i < iterations; i++) {
    int32_t key = keys[rand() & mask];
    inttable_entry *e = (inttable_entry*)upb_inttable_lookup(&table, key);
    x += (uintptr_t)e;
  }
  total = get_usertime() - before;
  without_overhead = total - rand_overhead;
  printf("%0.3f seconds (%0.3f - %0.3f overhead) for %d iterations.  %s/s\n", without_overhead, total, rand_overhead, iterations, eng(iterations/without_overhead, 3, false));

  printf("map(seq): ");
  fflush(stdout);
  before = get_usertime();
  for(unsigned int i = 0; i < iterations; i++) {
    int32_t key = keys[i & mask];
    x += m[key];
  }
  total = get_usertime() - before;
  without_overhead = total - seq_overhead;
  printf("%0.3f seconds (%0.3f - %0.3f overhead) for %d iterations.  %s/s\n", without_overhead, total, seq_overhead, iterations, eng(iterations/without_overhead, 3, false));

  printf("map(rand): ");
  fflush(stdout);
  before = get_usertime();
  for(unsigned int i = 0; i < iterations; i++) {
    int32_t key = keys[rand() & mask];
    x += m[key];
  }
  total = get_usertime() - before;
  without_overhead = total - rand_overhead;
  printf("%0.3f seconds (%0.3f - %0.3f overhead) for %d iterations.  %s/s\n", without_overhead, total, rand_overhead, iterations, eng(iterations/without_overhead, 3, false));

  printf("hash_map(seq): ");
  fflush(stdout);
  before = get_usertime();
  for(unsigned int i = 0; i < iterations; i++) {
    int32_t key = keys[i & mask];
    x += hm[key];
  }
  total = get_usertime() - before;
  without_overhead = total - seq_overhead;
  printf("%0.3f seconds (%0.3f - %0.3f overhead) for %d iterations.  %s/s\n", without_overhead, total, seq_overhead, iterations, eng(iterations/without_overhead, 3, false));

  printf("hash_map(rand): ");
  fflush(stdout);
  before = get_usertime();
  for(unsigned int i = 0; i < iterations; i++) {
    int32_t key = keys[rand() & mask];
    x += hm[key];
  }
  total = get_usertime() - before;
  without_overhead = total - rand_overhead;
  printf("%0.3f seconds (%0.3f - %0.3f overhead) for %d iterations.  %s/s\n\n", without_overhead, total, rand_overhead, iterations, eng(iterations/without_overhead, 3, false));
  upb_inttable_free(&table);
}

int32_t *get_contiguous_keys(int32_t num)
{
  int32_t *buf = new int32_t[num];
  for(int32_t i = 0; i < num; i++)
    buf[i] = i+1;
  return buf;
}

int main()
{
  vector<string> keys;
  keys.push_back("google.protobuf.FileDescriptorSet");
  keys.push_back("google.protobuf.FileDescriptorProto");
  keys.push_back("google.protobuf.DescriptorProto");
  keys.push_back("google.protobuf.DescriptorProto.ExtensionRange");
  keys.push_back("google.protobuf.FieldDescriptorProto");
  keys.push_back("google.protobuf.EnumDescriptorProto");
  keys.push_back("google.protobuf.EnumValueDescriptorProto");
  keys.push_back("google.protobuf.ServiceDescriptorProto");
  keys.push_back("google.protobuf.MethodDescriptorProto");
  keys.push_back("google.protobuf.FileOptions");
  keys.push_back("google.protobuf.MessageOptions");
  keys.push_back("google.protobuf.FieldOptions");
  keys.push_back("google.protobuf.EnumOptions");
  keys.push_back("google.protobuf.EnumValueOptions");
  keys.push_back("google.protobuf.ServiceOptions");
  keys.push_back("google.protobuf.MethodOptions");
  keys.push_back("google.protobuf.UninterpretedOption");
  keys.push_back("google.protobuf.UninterpretedOption.NamePart");

  test_strtable(keys, 18);

  int32_t *keys1 = get_contiguous_keys(8);
  printf("Contiguous 1-8 ====\n");
  test_inttable(keys1, 8);
  delete[] keys1;

  int32_t *keys2 = get_contiguous_keys(64);
  printf("Contiguous 1-64 ====\n");
  test_inttable(keys2, 64);
  delete[] keys2;

  int32_t *keys3 = get_contiguous_keys(512);
  printf("Contiguous 1-512 ====\n");
  test_inttable(keys3, 512);
  delete[] keys3;

  int32_t *keys4 = new int32_t[64];
  for(int32_t i = 0; i < 64; i++) {
    if(i < 32)
      keys4[i] = i+1;
    else
      keys4[i] = 10101+i;
  }
  printf("1-32 and 10133-10164 ====\n");
  test_inttable(keys4, 64);
  delete[] keys4;
}
