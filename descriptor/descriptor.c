/*
 * This file is a data dump of a protocol buffer into a C structure.
 * It was created by the upb compiler (upbc) with the following
 * command-line:
 *
 *   ./tools/upbc -i upb_file_descriptor_set -o descriptor/descriptor descriptor/descriptor.proto.pb
 *
 * This file is a dump of 'descriptor/descriptor.proto.pb'.
 * It contains exactly the same data, but in a C structure form
 * instead of a serialized protobuf.  This file contains no code,
 * only data.
 *
 * This file was auto-generated.  Do not edit. */

#include "descriptor/descriptor.h"

static char strdata[] =
  ".google.protobuf.DescriptorProto.google.protobuf.DescriptorProto.ExtensionRan"
  "ge.google.protobuf.EnumDescriptorProto.google.protobuf.EnumOptions.google.pro"
  "tobuf.EnumValueDescriptorProto.google.protobuf.EnumValueOptions.google.protob"
  "uf.FieldDescriptorProto.google.protobuf.FieldDescriptorProto.Label.google.pro"
  "tobuf.FieldDescriptorProto.Type.google.protobuf.FieldOptions.google.protobuf."
  "FieldOptions.CType.google.protobuf.FileDescriptorProto.google.protobuf.FileOp"
  "tions.google.protobuf.FileOptions.OptimizeMode.google.protobuf.MessageOptions"
  ".google.protobuf.MethodDescriptorProto.google.protobuf.MethodOptions.google.p"
  "rotobuf.ServiceDescriptorProto.google.protobuf.ServiceOptions.google.protobuf"
  ".UninterpretedOption.google.protobuf.UninterpretedOption.NamePartCODE_SIZECOR"
  "DCTypeDescriptorProtoDescriptorProtosEnumDescriptorProtoEnumOptionsEnumValueD"
  "escriptorProtoEnumValueOptionsExtensionRangeFieldDescriptorProtoFieldOptionsF"
  "ileDescriptorProtoFileDescriptorSetFileOptionsLABEL_OPTIONALLABEL_REPEATEDLAB"
  "EL_REQUIREDLabelMessageOptionsMethodDescriptorProtoMethodOptionsNamePartOptim"
  "izeModeSPEEDSTRING_PIECEServiceDescriptorProtoServiceOptionsTYPE_BOOLTYPE_BYT"
  "ESTYPE_DOUBLETYPE_ENUMTYPE_FIXED32TYPE_FIXED64TYPE_FLOATTYPE_GROUPTYPE_INT32T"
  "YPE_INT64TYPE_MESSAGETYPE_SFIXED32TYPE_SFIXED64TYPE_SINT32TYPE_SINT64TYPE_STR"
  "INGTYPE_UINT32TYPE_UINT64TypeUninterpretedOptioncom.google.protobufctypedefau"
  "lt_valuedependencydeprecateddescriptor/descriptor.protodouble_valueendenum_ty"
  "peexperimental_map_keyextendeeextensionextension_rangefalsefieldfilegoogle.pr"
  "otobufidentifier_valueinput_typeis_extensionjava_multiple_filesjava_outer_cla"
  "ssnamejava_packagelabelmessage_set_wire_formatmessage_typemethodnamename_part"
  "negative_int_valuenested_typenumberoptimize_foroptionsoutput_typepackagepacke"
  "dpositive_int_valueservicestartstring_valuetypetype_nameuninterpreted_optionv"
  "alue";

static upb_static_string strings[] = {
  UPB_STATIC_STRING_INIT_LEN(&strdata[0], 32),
  UPB_STATIC_STRING_INIT_LEN(&strdata[32], 47),
  UPB_STATIC_STRING_INIT_LEN(&strdata[79], 36),
  UPB_STATIC_STRING_INIT_LEN(&strdata[115], 28),
  UPB_STATIC_STRING_INIT_LEN(&strdata[143], 41),
  UPB_STATIC_STRING_INIT_LEN(&strdata[184], 33),
  UPB_STATIC_STRING_INIT_LEN(&strdata[217], 37),
  UPB_STATIC_STRING_INIT_LEN(&strdata[254], 43),
  UPB_STATIC_STRING_INIT_LEN(&strdata[297], 42),
  UPB_STATIC_STRING_INIT_LEN(&strdata[339], 29),
  UPB_STATIC_STRING_INIT_LEN(&strdata[368], 35),
  UPB_STATIC_STRING_INIT_LEN(&strdata[403], 36),
  UPB_STATIC_STRING_INIT_LEN(&strdata[439], 28),
  UPB_STATIC_STRING_INIT_LEN(&strdata[467], 41),
  UPB_STATIC_STRING_INIT_LEN(&strdata[508], 31),
  UPB_STATIC_STRING_INIT_LEN(&strdata[539], 38),
  UPB_STATIC_STRING_INIT_LEN(&strdata[577], 30),
  UPB_STATIC_STRING_INIT_LEN(&strdata[607], 39),
  UPB_STATIC_STRING_INIT_LEN(&strdata[646], 31),
  UPB_STATIC_STRING_INIT_LEN(&strdata[677], 36),
  UPB_STATIC_STRING_INIT_LEN(&strdata[713], 45),
  UPB_STATIC_STRING_INIT_LEN(&strdata[758], 9),
  UPB_STATIC_STRING_INIT_LEN(&strdata[767], 4),
  UPB_STATIC_STRING_INIT_LEN(&strdata[771], 5),
  UPB_STATIC_STRING_INIT_LEN(&strdata[776], 15),
  UPB_STATIC_STRING_INIT_LEN(&strdata[791], 16),
  UPB_STATIC_STRING_INIT_LEN(&strdata[807], 19),
  UPB_STATIC_STRING_INIT_LEN(&strdata[826], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[837], 24),
  UPB_STATIC_STRING_INIT_LEN(&strdata[861], 16),
  UPB_STATIC_STRING_INIT_LEN(&strdata[877], 14),
  UPB_STATIC_STRING_INIT_LEN(&strdata[891], 20),
  UPB_STATIC_STRING_INIT_LEN(&strdata[911], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[923], 19),
  UPB_STATIC_STRING_INIT_LEN(&strdata[942], 17),
  UPB_STATIC_STRING_INIT_LEN(&strdata[959], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[970], 14),
  UPB_STATIC_STRING_INIT_LEN(&strdata[984], 14),
  UPB_STATIC_STRING_INIT_LEN(&strdata[998], 14),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1012], 5),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1017], 14),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1031], 21),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1052], 13),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1065], 8),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1073], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1085], 5),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1090], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1102], 22),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1124], 14),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1138], 9),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1147], 10),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1157], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1168], 9),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1177], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1189], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1201], 10),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1211], 10),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1221], 10),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1231], 10),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1241], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1253], 13),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1266], 13),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1279], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1290], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1301], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1312], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1323], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1334], 4),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1338], 19),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1357], 19),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1376], 5),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1381], 13),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1394], 10),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1404], 10),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1414], 27),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1441], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1453], 3),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1456], 9),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1465], 20),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1485], 8),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1493], 9),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1502], 15),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1517], 5),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1522], 5),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1527], 4),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1531], 15),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1546], 16),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1562], 10),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1572], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1584], 19),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1603], 20),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1623], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1635], 5),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1640], 23),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1663], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1675], 6),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1681], 4),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1685], 9),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1694], 18),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1712], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1723], 6),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1729], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1741], 7),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1748], 11),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1759], 7),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1766], 6),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1772], 18),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1790], 7),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1797], 5),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1802], 12),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1814], 4),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1818], 9),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1827], 20),
  UPB_STATIC_STRING_INIT_LEN(&strdata[1847], 5),
};

/* Forward declarations of messages, and array decls. */
static google_protobuf_DescriptorProto google_protobuf_DescriptorProto_values[18];

static google_protobuf_DescriptorProto *google_protobuf_DescriptorProto_array_elems[] = {
    &google_protobuf_DescriptorProto_values[0],
    &google_protobuf_DescriptorProto_values[1],
    &google_protobuf_DescriptorProto_values[2],
    &google_protobuf_DescriptorProto_values[3],
    &google_protobuf_DescriptorProto_values[4],
    &google_protobuf_DescriptorProto_values[5],
    &google_protobuf_DescriptorProto_values[6],
    &google_protobuf_DescriptorProto_values[7],
    &google_protobuf_DescriptorProto_values[8],
    &google_protobuf_DescriptorProto_values[9],
    &google_protobuf_DescriptorProto_values[10],
    &google_protobuf_DescriptorProto_values[11],
    &google_protobuf_DescriptorProto_values[12],
    &google_protobuf_DescriptorProto_values[13],
    &google_protobuf_DescriptorProto_values[14],
    &google_protobuf_DescriptorProto_values[15],
    &google_protobuf_DescriptorProto_values[16],
    &google_protobuf_DescriptorProto_values[17],
};
static upb_static_array google_protobuf_DescriptorProto_arrays[3] = {
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_array_elems[0], 16),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_array_elems[16], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_array_elems[17], 1),
};
static google_protobuf_FileDescriptorProto google_protobuf_FileDescriptorProto_values[1];

static google_protobuf_FileDescriptorProto *google_protobuf_FileDescriptorProto_array_elems[] = {
    &google_protobuf_FileDescriptorProto_values[0],
};
static upb_static_array google_protobuf_FileDescriptorProto_arrays[1] = {
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FileDescriptorProto_array_elems[0], 1),
};
static google_protobuf_FileDescriptorSet google_protobuf_FileDescriptorSet_values[1];

static google_protobuf_DescriptorProto_ExtensionRange google_protobuf_DescriptorProto_ExtensionRange_values[7];

static google_protobuf_DescriptorProto_ExtensionRange *google_protobuf_DescriptorProto_ExtensionRange_array_elems[] = {
    &google_protobuf_DescriptorProto_ExtensionRange_values[0],
    &google_protobuf_DescriptorProto_ExtensionRange_values[1],
    &google_protobuf_DescriptorProto_ExtensionRange_values[2],
    &google_protobuf_DescriptorProto_ExtensionRange_values[3],
    &google_protobuf_DescriptorProto_ExtensionRange_values[4],
    &google_protobuf_DescriptorProto_ExtensionRange_values[5],
    &google_protobuf_DescriptorProto_ExtensionRange_values[6],
};
static upb_static_array google_protobuf_DescriptorProto_ExtensionRange_arrays[7] = {
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_ExtensionRange_array_elems[0], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_ExtensionRange_array_elems[1], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_ExtensionRange_array_elems[2], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_ExtensionRange_array_elems[3], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_ExtensionRange_array_elems[4], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_ExtensionRange_array_elems[5], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_DescriptorProto_ExtensionRange_array_elems[6], 1),
};
static google_protobuf_FileOptions google_protobuf_FileOptions_values[1];

static google_protobuf_EnumDescriptorProto google_protobuf_EnumDescriptorProto_values[4];

static google_protobuf_EnumDescriptorProto *google_protobuf_EnumDescriptorProto_array_elems[] = {
    &google_protobuf_EnumDescriptorProto_values[0],
    &google_protobuf_EnumDescriptorProto_values[1],
    &google_protobuf_EnumDescriptorProto_values[2],
    &google_protobuf_EnumDescriptorProto_values[3],
};
static upb_static_array google_protobuf_EnumDescriptorProto_arrays[3] = {
  UPB_STATIC_ARRAY_INIT(&google_protobuf_EnumDescriptorProto_array_elems[0], 2),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_EnumDescriptorProto_array_elems[2], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_EnumDescriptorProto_array_elems[3], 1),
};
static google_protobuf_FieldDescriptorProto google_protobuf_FieldDescriptorProto_values[63];

static google_protobuf_FieldDescriptorProto *google_protobuf_FieldDescriptorProto_array_elems[] = {
    &google_protobuf_FieldDescriptorProto_values[0],
    &google_protobuf_FieldDescriptorProto_values[1],
    &google_protobuf_FieldDescriptorProto_values[2],
    &google_protobuf_FieldDescriptorProto_values[3],
    &google_protobuf_FieldDescriptorProto_values[4],
    &google_protobuf_FieldDescriptorProto_values[5],
    &google_protobuf_FieldDescriptorProto_values[6],
    &google_protobuf_FieldDescriptorProto_values[7],
    &google_protobuf_FieldDescriptorProto_values[8],
    &google_protobuf_FieldDescriptorProto_values[9],
    &google_protobuf_FieldDescriptorProto_values[10],
    &google_protobuf_FieldDescriptorProto_values[11],
    &google_protobuf_FieldDescriptorProto_values[12],
    &google_protobuf_FieldDescriptorProto_values[13],
    &google_protobuf_FieldDescriptorProto_values[14],
    &google_protobuf_FieldDescriptorProto_values[15],
    &google_protobuf_FieldDescriptorProto_values[16],
    &google_protobuf_FieldDescriptorProto_values[17],
    &google_protobuf_FieldDescriptorProto_values[18],
    &google_protobuf_FieldDescriptorProto_values[19],
    &google_protobuf_FieldDescriptorProto_values[20],
    &google_protobuf_FieldDescriptorProto_values[21],
    &google_protobuf_FieldDescriptorProto_values[22],
    &google_protobuf_FieldDescriptorProto_values[23],
    &google_protobuf_FieldDescriptorProto_values[24],
    &google_protobuf_FieldDescriptorProto_values[25],
    &google_protobuf_FieldDescriptorProto_values[26],
    &google_protobuf_FieldDescriptorProto_values[27],
    &google_protobuf_FieldDescriptorProto_values[28],
    &google_protobuf_FieldDescriptorProto_values[29],
    &google_protobuf_FieldDescriptorProto_values[30],
    &google_protobuf_FieldDescriptorProto_values[31],
    &google_protobuf_FieldDescriptorProto_values[32],
    &google_protobuf_FieldDescriptorProto_values[33],
    &google_protobuf_FieldDescriptorProto_values[34],
    &google_protobuf_FieldDescriptorProto_values[35],
    &google_protobuf_FieldDescriptorProto_values[36],
    &google_protobuf_FieldDescriptorProto_values[37],
    &google_protobuf_FieldDescriptorProto_values[38],
    &google_protobuf_FieldDescriptorProto_values[39],
    &google_protobuf_FieldDescriptorProto_values[40],
    &google_protobuf_FieldDescriptorProto_values[41],
    &google_protobuf_FieldDescriptorProto_values[42],
    &google_protobuf_FieldDescriptorProto_values[43],
    &google_protobuf_FieldDescriptorProto_values[44],
    &google_protobuf_FieldDescriptorProto_values[45],
    &google_protobuf_FieldDescriptorProto_values[46],
    &google_protobuf_FieldDescriptorProto_values[47],
    &google_protobuf_FieldDescriptorProto_values[48],
    &google_protobuf_FieldDescriptorProto_values[49],
    &google_protobuf_FieldDescriptorProto_values[50],
    &google_protobuf_FieldDescriptorProto_values[51],
    &google_protobuf_FieldDescriptorProto_values[52],
    &google_protobuf_FieldDescriptorProto_values[53],
    &google_protobuf_FieldDescriptorProto_values[54],
    &google_protobuf_FieldDescriptorProto_values[55],
    &google_protobuf_FieldDescriptorProto_values[56],
    &google_protobuf_FieldDescriptorProto_values[57],
    &google_protobuf_FieldDescriptorProto_values[58],
    &google_protobuf_FieldDescriptorProto_values[59],
    &google_protobuf_FieldDescriptorProto_values[60],
    &google_protobuf_FieldDescriptorProto_values[61],
    &google_protobuf_FieldDescriptorProto_values[62],
};
static upb_static_array google_protobuf_FieldDescriptorProto_arrays[18] = {
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[0], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[1], 8),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[9], 7),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[16], 2),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[18], 8),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[26], 3),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[29], 3),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[32], 3),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[35], 4),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[39], 5),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[44], 2),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[46], 5),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[51], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[52], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[53], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[54], 1),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[55], 6),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_FieldDescriptorProto_array_elems[61], 2),
};
static google_protobuf_EnumValueDescriptorProto google_protobuf_EnumValueDescriptorProto_values[25];

static google_protobuf_EnumValueDescriptorProto *google_protobuf_EnumValueDescriptorProto_array_elems[] = {
    &google_protobuf_EnumValueDescriptorProto_values[0],
    &google_protobuf_EnumValueDescriptorProto_values[1],
    &google_protobuf_EnumValueDescriptorProto_values[2],
    &google_protobuf_EnumValueDescriptorProto_values[3],
    &google_protobuf_EnumValueDescriptorProto_values[4],
    &google_protobuf_EnumValueDescriptorProto_values[5],
    &google_protobuf_EnumValueDescriptorProto_values[6],
    &google_protobuf_EnumValueDescriptorProto_values[7],
    &google_protobuf_EnumValueDescriptorProto_values[8],
    &google_protobuf_EnumValueDescriptorProto_values[9],
    &google_protobuf_EnumValueDescriptorProto_values[10],
    &google_protobuf_EnumValueDescriptorProto_values[11],
    &google_protobuf_EnumValueDescriptorProto_values[12],
    &google_protobuf_EnumValueDescriptorProto_values[13],
    &google_protobuf_EnumValueDescriptorProto_values[14],
    &google_protobuf_EnumValueDescriptorProto_values[15],
    &google_protobuf_EnumValueDescriptorProto_values[16],
    &google_protobuf_EnumValueDescriptorProto_values[17],
    &google_protobuf_EnumValueDescriptorProto_values[18],
    &google_protobuf_EnumValueDescriptorProto_values[19],
    &google_protobuf_EnumValueDescriptorProto_values[20],
    &google_protobuf_EnumValueDescriptorProto_values[21],
    &google_protobuf_EnumValueDescriptorProto_values[22],
    &google_protobuf_EnumValueDescriptorProto_values[23],
    &google_protobuf_EnumValueDescriptorProto_values[24],
};
static upb_static_array google_protobuf_EnumValueDescriptorProto_arrays[4] = {
  UPB_STATIC_ARRAY_INIT(&google_protobuf_EnumValueDescriptorProto_array_elems[0], 18),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_EnumValueDescriptorProto_array_elems[18], 3),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_EnumValueDescriptorProto_array_elems[21], 2),
  UPB_STATIC_ARRAY_INIT(&google_protobuf_EnumValueDescriptorProto_array_elems[23], 2),
};
static google_protobuf_DescriptorProto google_protobuf_DescriptorProto_values[18] = {

  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[34]),   /* "FileDescriptorSet" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[0]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[33]),   /* "FileDescriptorProto" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[1]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = true,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[24]),   /* "DescriptorProto" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[2]),
    .nested_type = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_arrays[1]),
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = true,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[31]),   /* "FieldDescriptorProto" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[4]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_EnumDescriptorProto_arrays[0]),
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[26]),   /* "EnumDescriptorProto" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[5]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[28]),   /* "EnumValueDescriptorProto" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[6]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[47]),   /* "ServiceDescriptorProto" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[7]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[41]),   /* "MethodDescriptorProto" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[8]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = true,
    .extension_range = true,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[35]),   /* "FileOptions" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[9]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_EnumDescriptorProto_arrays[1]),
    .extension_range = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_ExtensionRange_arrays[0]),
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = true,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[40]),   /* "MessageOptions" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[10]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_ExtensionRange_arrays[1]),
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = true,
    .extension_range = true,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[32]),   /* "FieldOptions" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[11]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_EnumDescriptorProto_arrays[2]),
    .extension_range = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_ExtensionRange_arrays[2]),
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = true,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[27]),   /* "EnumOptions" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[12]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_ExtensionRange_arrays[3]),
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = true,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[29]),   /* "EnumValueOptions" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[13]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_ExtensionRange_arrays[4]),
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = true,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[48]),   /* "ServiceOptions" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[14]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_ExtensionRange_arrays[5]),
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = true,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[42]),   /* "MethodOptions" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[15]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_ExtensionRange_arrays[6]),
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = true,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[68]),   /* "UninterpretedOption" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[16]),
    .nested_type = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_arrays[2]),
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[30]),   /* "ExtensionRange" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[3]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .field = true,
    .nested_type = false,
    .enum_type = false,
    .extension_range = false,
    .extension = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[43]),   /* "NamePart" */
    .field = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FieldDescriptorProto_arrays[17]),
    .nested_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension_range = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = 0,   /* Not set. */
  },
};
static google_protobuf_FileDescriptorProto google_protobuf_FileDescriptorProto_values[1] = {

  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .package = true,
    .dependency = false,
    .message_type = true,
    .enum_type = false,
    .service = false,
    .extension = false,
    .options = true,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[74]),   /* "descriptor/descriptor.proto" */
    .package = UPB_STATIC_STRING_PTR_INIT(strings[85]),   /* "google.protobuf" */
    .dependency = UPB_ARRAY_NULL_INITIALIZER,   /* Not set. */
    .message_type = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_DescriptorProto_arrays[0]),
    .enum_type = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .service = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .extension = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
    .options = &google_protobuf_FileOptions_values[0],
  },
};
static google_protobuf_FileDescriptorSet google_protobuf_FileDescriptorSet_values[1] = {

  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .file = true,
  }},
    .file = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_FileDescriptorProto_arrays[0]),
  },
};
static google_protobuf_DescriptorProto_ExtensionRange google_protobuf_DescriptorProto_ExtensionRange_values[7] = {

  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .start = true,
    .end = true,
  }},
    .start = 1000,
    .end = 536870912,
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .start = true,
    .end = true,
  }},
    .start = 1000,
    .end = 536870912,
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .start = true,
    .end = true,
  }},
    .start = 1000,
    .end = 536870912,
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .start = true,
    .end = true,
  }},
    .start = 1000,
    .end = 536870912,
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .start = true,
    .end = true,
  }},
    .start = 1000,
    .end = 536870912,
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .start = true,
    .end = true,
  }},
    .start = 1000,
    .end = 536870912,
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .start = true,
    .end = true,
  }},
    .start = 1000,
    .end = 536870912,
  },
};
static google_protobuf_FileOptions google_protobuf_FileOptions_values[1] = {

  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .java_package = true,
    .java_outer_classname = true,
    .optimize_for = true,
    .java_multiple_files = false,
    .uninterpreted_option = false,
  }},
    .java_package = UPB_STATIC_STRING_PTR_INIT(strings[69]),   /* "com.google.protobuf" */
    .java_outer_classname = UPB_STATIC_STRING_PTR_INIT(strings[25]),   /* "DescriptorProtos" */
    .optimize_for = 1,
    .java_multiple_files = 0,   /* Not set. */
    .uninterpreted_option = {UPB_ARRAY_NULL_INITIALIZER},   /* Not set. */
  },
};
static google_protobuf_EnumDescriptorProto google_protobuf_EnumDescriptorProto_values[4] = {

  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .value = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[67]),   /* "Type" */
    .value = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_EnumValueDescriptorProto_arrays[0]),
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .value = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[39]),   /* "Label" */
    .value = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_EnumValueDescriptorProto_arrays[1]),
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .value = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[44]),   /* "OptimizeMode" */
    .value = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_EnumValueDescriptorProto_arrays[2]),
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .value = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[23]),   /* "CType" */
    .value = UPB_STATIC_ARRAY_PTR_TYPED_INIT(google_protobuf_EnumValueDescriptorProto_arrays[3]),
    .options = 0,   /* Not set. */
  },
};
static google_protobuf_FieldDescriptorProto google_protobuf_FieldDescriptorProto_values[63] = {

  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[84]),   /* "file" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[11]),   /* ".google.protobuf.FileDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[96]),   /* "name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[104]),   /* "package" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[72]),   /* "dependency" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 3,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[94]),   /* "message_type" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 4,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[0]),   /* ".google.protobuf.DescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[77]),   /* "enum_type" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 5,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[2]),   /* ".google.protobuf.EnumDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[107]),   /* "service" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 6,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[17]),   /* ".google.protobuf.ServiceDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[80]),   /* "extension" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 7,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[6]),   /* ".google.protobuf.FieldDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[102]),   /* "options" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 8,
    .label = 1,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[12]),   /* ".google.protobuf.FileOptions" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[96]),   /* "name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[83]),   /* "field" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[6]),   /* ".google.protobuf.FieldDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[99]),   /* "nested_type" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[0]),   /* ".google.protobuf.DescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[77]),   /* "enum_type" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 4,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[2]),   /* ".google.protobuf.EnumDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[81]),   /* "extension_range" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 5,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[1]),   /* ".google.protobuf.DescriptorProto.ExtensionRange" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[80]),   /* "extension" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 6,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[6]),   /* ".google.protobuf.FieldDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[102]),   /* "options" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 7,
    .label = 1,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[14]),   /* ".google.protobuf.MessageOptions" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[108]),   /* "start" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 5,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[76]),   /* "end" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 1,
    .type = 5,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[96]),   /* "name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[79]),   /* "extendee" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[100]),   /* "number" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 1,
    .type = 5,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[92]),   /* "label" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 4,
    .label = 1,
    .type = 14,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[7]),   /* ".google.protobuf.FieldDescriptorProto.Label" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[110]),   /* "type" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 5,
    .label = 1,
    .type = 14,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[8]),   /* ".google.protobuf.FieldDescriptorProto.Type" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[111]),   /* "type_name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 6,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[71]),   /* "default_value" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 7,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[102]),   /* "options" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 8,
    .label = 1,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[9]),   /* ".google.protobuf.FieldOptions" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[96]),   /* "name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[113]),   /* "value" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[4]),   /* ".google.protobuf.EnumValueDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[102]),   /* "options" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 1,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[3]),   /* ".google.protobuf.EnumOptions" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[96]),   /* "name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[100]),   /* "number" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 1,
    .type = 5,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[102]),   /* "options" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 1,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[5]),   /* ".google.protobuf.EnumValueOptions" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[96]),   /* "name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[95]),   /* "method" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[15]),   /* ".google.protobuf.MethodDescriptorProto" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[102]),   /* "options" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 1,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[18]),   /* ".google.protobuf.ServiceOptions" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[96]),   /* "name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[87]),   /* "input_type" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[103]),   /* "output_type" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[102]),   /* "options" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 4,
    .label = 1,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[16]),   /* ".google.protobuf.MethodOptions" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[91]),   /* "java_package" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[90]),   /* "java_outer_classname" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 8,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[101]),   /* "optimize_for" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 9,
    .label = 1,
    .type = 14,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[13]),   /* ".google.protobuf.FileOptions.OptimizeMode" */
    .default_value = UPB_STATIC_STRING_PTR_INIT(strings[45]),   /* "SPEED" */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[89]),   /* "java_multiple_files" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 10,
    .label = 1,
    .type = 8,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STATIC_STRING_PTR_INIT(strings[82]),   /* "false" */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[112]),   /* "uninterpreted_option" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 999,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[19]),   /* ".google.protobuf.UninterpretedOption" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[93]),   /* "message_set_wire_format" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 8,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STATIC_STRING_PTR_INIT(strings[82]),   /* "false" */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[112]),   /* "uninterpreted_option" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 999,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[19]),   /* ".google.protobuf.UninterpretedOption" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[70]),   /* "ctype" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 1,
    .type = 14,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[10]),   /* ".google.protobuf.FieldOptions.CType" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[105]),   /* "packed" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 1,
    .type = 8,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[73]),   /* "deprecated" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 1,
    .type = 8,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STATIC_STRING_PTR_INIT(strings[82]),   /* "false" */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[78]),   /* "experimental_map_key" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 9,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[112]),   /* "uninterpreted_option" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 999,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[19]),   /* ".google.protobuf.UninterpretedOption" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[112]),   /* "uninterpreted_option" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 999,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[19]),   /* ".google.protobuf.UninterpretedOption" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[112]),   /* "uninterpreted_option" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 999,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[19]),   /* ".google.protobuf.UninterpretedOption" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[112]),   /* "uninterpreted_option" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 999,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[19]),   /* ".google.protobuf.UninterpretedOption" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[112]),   /* "uninterpreted_option" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 999,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[19]),   /* ".google.protobuf.UninterpretedOption" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = true,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[96]),   /* "name" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 3,
    .type = 11,
    .type_name = UPB_STATIC_STRING_PTR_INIT(strings[20]),   /* ".google.protobuf.UninterpretedOption.NamePart" */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[86]),   /* "identifier_value" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 3,
    .label = 1,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[106]),   /* "positive_int_value" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 4,
    .label = 1,
    .type = 4,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[98]),   /* "negative_int_value" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 5,
    .label = 1,
    .type = 3,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[75]),   /* "double_value" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 6,
    .label = 1,
    .type = 1,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[109]),   /* "string_value" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 7,
    .label = 1,
    .type = 12,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[97]),   /* "name_part" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 1,
    .label = 2,
    .type = 9,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .extendee = false,
    .number = true,
    .label = true,
    .type = true,
    .type_name = false,
    .default_value = false,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[88]),   /* "is_extension" */
    .extendee = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .number = 2,
    .label = 2,
    .type = 8,
    .type_name = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .default_value = UPB_STRING_NULL_INITIALIZER,   /* Not set. */
    .options = 0,   /* Not set. */
  },
};
static google_protobuf_EnumValueDescriptorProto google_protobuf_EnumValueDescriptorProto_values[25] = {

  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[51]),   /* "TYPE_DOUBLE" */
    .number = 1,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[55]),   /* "TYPE_FLOAT" */
    .number = 2,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[58]),   /* "TYPE_INT64" */
    .number = 3,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[66]),   /* "TYPE_UINT64" */
    .number = 4,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[57]),   /* "TYPE_INT32" */
    .number = 5,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[54]),   /* "TYPE_FIXED64" */
    .number = 6,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[53]),   /* "TYPE_FIXED32" */
    .number = 7,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[49]),   /* "TYPE_BOOL" */
    .number = 8,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[64]),   /* "TYPE_STRING" */
    .number = 9,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[56]),   /* "TYPE_GROUP" */
    .number = 10,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[59]),   /* "TYPE_MESSAGE" */
    .number = 11,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[50]),   /* "TYPE_BYTES" */
    .number = 12,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[65]),   /* "TYPE_UINT32" */
    .number = 13,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[52]),   /* "TYPE_ENUM" */
    .number = 14,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[60]),   /* "TYPE_SFIXED32" */
    .number = 15,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[61]),   /* "TYPE_SFIXED64" */
    .number = 16,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[62]),   /* "TYPE_SINT32" */
    .number = 17,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[63]),   /* "TYPE_SINT64" */
    .number = 18,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[36]),   /* "LABEL_OPTIONAL" */
    .number = 1,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[38]),   /* "LABEL_REQUIRED" */
    .number = 2,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[37]),   /* "LABEL_REPEATED" */
    .number = 3,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[45]),   /* "SPEED" */
    .number = 1,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[21]),   /* "CODE_SIZE" */
    .number = 2,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[22]),   /* "CORD" */
    .number = 1,
    .options = 0,   /* Not set. */
  },
  {.base = {UPB_DATA_FROZEN},
   .set_flags = {.has = {
    .name = true,
    .number = true,
    .options = false,
  }},
    .name = UPB_STATIC_STRING_PTR_INIT(strings[46]),   /* "STRING_PIECE" */
    .number = 2,
    .options = 0,   /* Not set. */
  },
};
/* The externally-visible definition. */
google_protobuf_FileDescriptorSet *upb_file_descriptor_set = &google_protobuf_FileDescriptorSet_values[0];
