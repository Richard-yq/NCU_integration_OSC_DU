/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "EUTRA-Transmission-Bandwidth.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_EUTRA_Transmission_Bandwidth_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_EUTRA_Transmission_Bandwidth_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_EUTRA_Transmission_Bandwidth_value2enum_1[] = {
	{ 0,	3,	"bw6" },
	{ 1,	4,	"bw15" },
	{ 2,	4,	"bw25" },
	{ 3,	4,	"bw50" },
	{ 4,	4,	"bw75" },
	{ 5,	5,	"bw100" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_EUTRA_Transmission_Bandwidth_enum2value_1[] = {
	5,	/* bw100(5) */
	1,	/* bw15(1) */
	2,	/* bw25(2) */
	3,	/* bw50(3) */
	0,	/* bw6(0) */
	4	/* bw75(4) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_EUTRA_Transmission_Bandwidth_specs_1 = {
	asn_MAP_EUTRA_Transmission_Bandwidth_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_EUTRA_Transmission_Bandwidth_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_EUTRA_Transmission_Bandwidth_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_Transmission_Bandwidth = {
	"EUTRA-Transmission-Bandwidth",
	"EUTRA-Transmission-Bandwidth",
	&asn_OP_NativeEnumerated,
	asn_DEF_EUTRA_Transmission_Bandwidth_tags_1,
	sizeof(asn_DEF_EUTRA_Transmission_Bandwidth_tags_1)
		/sizeof(asn_DEF_EUTRA_Transmission_Bandwidth_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_Transmission_Bandwidth_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_Transmission_Bandwidth_tags_1)
		/sizeof(asn_DEF_EUTRA_Transmission_Bandwidth_tags_1[0]), /* 1 */
	{ &asn_OER_type_EUTRA_Transmission_Bandwidth_constr_1, &asn_PER_type_EUTRA_Transmission_Bandwidth_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_EUTRA_Transmission_Bandwidth_specs_1	/* Additional specs */
};

