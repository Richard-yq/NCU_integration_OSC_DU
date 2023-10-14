/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "SRS-CC-SetIndex.h"

static int
memb_cc_SetIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cc_IndexInOneCC_Set_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_cc_SetIndex_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_cc_SetIndex_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_cc_IndexInOneCC_Set_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_cc_IndexInOneCC_Set_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SRS_CC_SetIndex_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SRS_CC_SetIndex, cc_SetIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_cc_SetIndex_constr_2, &asn_PER_memb_cc_SetIndex_constr_2,  memb_cc_SetIndex_constraint_1 },
		0, 0, /* No default value */
		"cc-SetIndex"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_CC_SetIndex, cc_IndexInOneCC_Set),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_cc_IndexInOneCC_Set_constr_3, &asn_PER_memb_cc_IndexInOneCC_Set_constr_3,  memb_cc_IndexInOneCC_Set_constraint_1 },
		0, 0, /* No default value */
		"cc-IndexInOneCC-Set"
		},
};
static const int asn_MAP_SRS_CC_SetIndex_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SRS_CC_SetIndex_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_CC_SetIndex_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cc-SetIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cc-IndexInOneCC-Set */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_CC_SetIndex_specs_1 = {
	sizeof(struct SRS_CC_SetIndex),
	offsetof(struct SRS_CC_SetIndex, _asn_ctx),
	asn_MAP_SRS_CC_SetIndex_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SRS_CC_SetIndex_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_CC_SetIndex = {
	"SRS-CC-SetIndex",
	"SRS-CC-SetIndex",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_CC_SetIndex_tags_1,
	sizeof(asn_DEF_SRS_CC_SetIndex_tags_1)
		/sizeof(asn_DEF_SRS_CC_SetIndex_tags_1[0]), /* 1 */
	asn_DEF_SRS_CC_SetIndex_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_CC_SetIndex_tags_1)
		/sizeof(asn_DEF_SRS_CC_SetIndex_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRS_CC_SetIndex_1,
	2,	/* Elements count */
	&asn_SPC_SRS_CC_SetIndex_specs_1	/* Additional specs */
};
