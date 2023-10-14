/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "SIB1.h"

#include "ConnEstFailureControl.h"
#include "SI-SchedulingInfo.h"
#include "ServingCellConfigCommonSIB.h"
#include "UE-TimersAndConstants.h"
#include "UAC-BarringPerCatList.h"
#include "UAC-BarringPerPLMN-List.h"
static int
memb_q_RxLevMinOffset_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_q_QualMinOffset_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_individualPLMNList_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 2 && size <= 12)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_memb_q_RxLevMinOffset_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_q_RxLevMinOffset_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_q_QualMinOffset_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_q_QualMinOffset_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ims_EmergencySupport_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ims_EmergencySupport_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_eCallOverIMS_Support_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_eCallOverIMS_Support_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_individualPLMNList_constr_23 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(2..12)) */};
static asn_per_constraints_t asn_PER_type_individualPLMNList_constr_23 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  2,  12 }	/* (SIZE(2..12)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_individualPLMNList_constr_23 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(2..12)) */};
static asn_per_constraints_t asn_PER_memb_individualPLMNList_constr_23 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  2,  12 }	/* (SIZE(2..12)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_uac_AccessCategory1_SelectionAssistanceInfo_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_uac_AccessCategory1_SelectionAssistanceInfo_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_useFullResumeID_constr_25 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_useFullResumeID_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cellSelectionInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SIB1__cellSelectionInfo, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin"
		},
	{ ATF_POINTER, 4, offsetof(struct SIB1__cellSelectionInfo, q_RxLevMinOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_q_RxLevMinOffset_constr_4, &asn_PER_memb_q_RxLevMinOffset_constr_4,  memb_q_RxLevMinOffset_constraint_2 },
		0, 0, /* No default value */
		"q-RxLevMinOffset"
		},
	{ ATF_POINTER, 3, offsetof(struct SIB1__cellSelectionInfo, q_RxLevMinSUL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMinSUL"
		},
	{ ATF_POINTER, 2, offsetof(struct SIB1__cellSelectionInfo, q_QualMin),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMin"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB1__cellSelectionInfo, q_QualMinOffset),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_q_QualMinOffset_constr_7, &asn_PER_memb_q_QualMinOffset_constr_7,  memb_q_QualMinOffset_constraint_2 },
		0, 0, /* No default value */
		"q-QualMinOffset"
		},
};
static const int asn_MAP_cellSelectionInfo_oms_2[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_cellSelectionInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellSelectionInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-RxLevMinOffset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* q-RxLevMinSUL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* q-QualMin */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* q-QualMinOffset */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellSelectionInfo_specs_2 = {
	sizeof(struct SIB1__cellSelectionInfo),
	offsetof(struct SIB1__cellSelectionInfo, _asn_ctx),
	asn_MAP_cellSelectionInfo_tag2el_2,
	5,	/* Count of tags in the map */
	asn_MAP_cellSelectionInfo_oms_2,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellSelectionInfo_2 = {
	"cellSelectionInfo",
	"cellSelectionInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_cellSelectionInfo_tags_2,
	sizeof(asn_DEF_cellSelectionInfo_tags_2)
		/sizeof(asn_DEF_cellSelectionInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellSelectionInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellSelectionInfo_tags_2)
		/sizeof(asn_DEF_cellSelectionInfo_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellSelectionInfo_2,
	5,	/* Elements count */
	&asn_SPC_cellSelectionInfo_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ims_EmergencySupport_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ims_EmergencySupport_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ims_EmergencySupport_specs_12 = {
	asn_MAP_ims_EmergencySupport_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_ims_EmergencySupport_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ims_EmergencySupport_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ims_EmergencySupport_12 = {
	"ims-EmergencySupport",
	"ims-EmergencySupport",
	&asn_OP_NativeEnumerated,
	asn_DEF_ims_EmergencySupport_tags_12,
	sizeof(asn_DEF_ims_EmergencySupport_tags_12)
		/sizeof(asn_DEF_ims_EmergencySupport_tags_12[0]) - 1, /* 1 */
	asn_DEF_ims_EmergencySupport_tags_12,	/* Same as above */
	sizeof(asn_DEF_ims_EmergencySupport_tags_12)
		/sizeof(asn_DEF_ims_EmergencySupport_tags_12[0]), /* 2 */
	{ &asn_OER_type_ims_EmergencySupport_constr_12, &asn_PER_type_ims_EmergencySupport_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ims_EmergencySupport_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eCallOverIMS_Support_value2enum_14[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_eCallOverIMS_Support_enum2value_14[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eCallOverIMS_Support_specs_14 = {
	asn_MAP_eCallOverIMS_Support_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_eCallOverIMS_Support_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eCallOverIMS_Support_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eCallOverIMS_Support_14 = {
	"eCallOverIMS-Support",
	"eCallOverIMS-Support",
	&asn_OP_NativeEnumerated,
	asn_DEF_eCallOverIMS_Support_tags_14,
	sizeof(asn_DEF_eCallOverIMS_Support_tags_14)
		/sizeof(asn_DEF_eCallOverIMS_Support_tags_14[0]) - 1, /* 1 */
	asn_DEF_eCallOverIMS_Support_tags_14,	/* Same as above */
	sizeof(asn_DEF_eCallOverIMS_Support_tags_14)
		/sizeof(asn_DEF_eCallOverIMS_Support_tags_14[0]), /* 2 */
	{ &asn_OER_type_eCallOverIMS_Support_constr_14, &asn_PER_type_eCallOverIMS_Support_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eCallOverIMS_Support_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_individualPLMNList_23[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_individualPLMNList_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_individualPLMNList_specs_23 = {
	sizeof(struct SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo__individualPLMNList),
	offsetof(struct SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo__individualPLMNList, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_individualPLMNList_23 = {
	"individualPLMNList",
	"individualPLMNList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_individualPLMNList_tags_23,
	sizeof(asn_DEF_individualPLMNList_tags_23)
		/sizeof(asn_DEF_individualPLMNList_tags_23[0]) - 1, /* 1 */
	asn_DEF_individualPLMNList_tags_23,	/* Same as above */
	sizeof(asn_DEF_individualPLMNList_tags_23)
		/sizeof(asn_DEF_individualPLMNList_tags_23[0]), /* 2 */
	{ &asn_OER_type_individualPLMNList_constr_23, &asn_PER_type_individualPLMNList_constr_23, SEQUENCE_OF_constraint },
	asn_MBR_individualPLMNList_23,
	1,	/* Single element */
	&asn_SPC_individualPLMNList_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_uac_AccessCategory1_SelectionAssistanceInfo_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo, choice.plmnCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmnCommon"
		},
	{ ATF_POINTER, 0, offsetof(struct SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo, choice.individualPLMNList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_individualPLMNList_23,
		0,
		{ &asn_OER_memb_individualPLMNList_constr_23, &asn_PER_memb_individualPLMNList_constr_23,  memb_individualPLMNList_constraint_21 },
		0, 0, /* No default value */
		"individualPLMNList"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_uac_AccessCategory1_SelectionAssistanceInfo_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmnCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* individualPLMNList */
};
static asn_CHOICE_specifics_t asn_SPC_uac_AccessCategory1_SelectionAssistanceInfo_specs_21 = {
	sizeof(struct SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo),
	offsetof(struct SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo, _asn_ctx),
	offsetof(struct SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo, present),
	sizeof(((struct SIB1__uac_BarringInfo__uac_AccessCategory1_SelectionAssistanceInfo *)0)->present),
	asn_MAP_uac_AccessCategory1_SelectionAssistanceInfo_tag2el_21,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uac_AccessCategory1_SelectionAssistanceInfo_21 = {
	"uac-AccessCategory1-SelectionAssistanceInfo",
	"uac-AccessCategory1-SelectionAssistanceInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_uac_AccessCategory1_SelectionAssistanceInfo_constr_21, &asn_PER_type_uac_AccessCategory1_SelectionAssistanceInfo_constr_21, CHOICE_constraint },
	asn_MBR_uac_AccessCategory1_SelectionAssistanceInfo_21,
	2,	/* Elements count */
	&asn_SPC_uac_AccessCategory1_SelectionAssistanceInfo_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_uac_BarringInfo_17[] = {
	{ ATF_POINTER, 2, offsetof(struct SIB1__uac_BarringInfo, uac_BarringForCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringPerCatList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-BarringForCommon"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB1__uac_BarringInfo, uac_BarringPerPLMN_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringPerPLMN_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-BarringPerPLMN-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB1__uac_BarringInfo, uac_BarringInfoSetList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringInfoSetList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-BarringInfoSetList"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB1__uac_BarringInfo, uac_AccessCategory1_SelectionAssistanceInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_uac_AccessCategory1_SelectionAssistanceInfo_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-AccessCategory1-SelectionAssistanceInfo"
		},
};
static const int asn_MAP_uac_BarringInfo_oms_17[] = { 0, 1, 3 };
static const ber_tlv_tag_t asn_DEF_uac_BarringInfo_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_uac_BarringInfo_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uac-BarringForCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uac-BarringPerPLMN-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uac-BarringInfoSetList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* uac-AccessCategory1-SelectionAssistanceInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_uac_BarringInfo_specs_17 = {
	sizeof(struct SIB1__uac_BarringInfo),
	offsetof(struct SIB1__uac_BarringInfo, _asn_ctx),
	asn_MAP_uac_BarringInfo_tag2el_17,
	4,	/* Count of tags in the map */
	asn_MAP_uac_BarringInfo_oms_17,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uac_BarringInfo_17 = {
	"uac-BarringInfo",
	"uac-BarringInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_uac_BarringInfo_tags_17,
	sizeof(asn_DEF_uac_BarringInfo_tags_17)
		/sizeof(asn_DEF_uac_BarringInfo_tags_17[0]) - 1, /* 1 */
	asn_DEF_uac_BarringInfo_tags_17,	/* Same as above */
	sizeof(asn_DEF_uac_BarringInfo_tags_17)
		/sizeof(asn_DEF_uac_BarringInfo_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_uac_BarringInfo_17,
	4,	/* Elements count */
	&asn_SPC_uac_BarringInfo_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_useFullResumeID_value2enum_25[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_useFullResumeID_enum2value_25[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_useFullResumeID_specs_25 = {
	asn_MAP_useFullResumeID_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_useFullResumeID_enum2value_25,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_useFullResumeID_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_useFullResumeID_25 = {
	"useFullResumeID",
	"useFullResumeID",
	&asn_OP_NativeEnumerated,
	asn_DEF_useFullResumeID_tags_25,
	sizeof(asn_DEF_useFullResumeID_tags_25)
		/sizeof(asn_DEF_useFullResumeID_tags_25[0]) - 1, /* 1 */
	asn_DEF_useFullResumeID_tags_25,	/* Same as above */
	sizeof(asn_DEF_useFullResumeID_tags_25)
		/sizeof(asn_DEF_useFullResumeID_tags_25[0]), /* 2 */
	{ &asn_OER_type_useFullResumeID_constr_25, &asn_PER_type_useFullResumeID_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_useFullResumeID_specs_25	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_28 = {
	sizeof(struct SIB1__nonCriticalExtension),
	offsetof(struct SIB1__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_28 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_28,
	sizeof(asn_DEF_nonCriticalExtension_tags_28)
		/sizeof(asn_DEF_nonCriticalExtension_tags_28[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_28,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_28)
		/sizeof(asn_DEF_nonCriticalExtension_tags_28[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_28	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SIB1_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SIB1, cellSelectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellSelectionInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB1, cellAccessRelatedInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellAccessRelatedInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellAccessRelatedInfo"
		},
	{ ATF_POINTER, 10, offsetof(struct SIB1, connEstFailureControl),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConnEstFailureControl,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connEstFailureControl"
		},
	{ ATF_POINTER, 9, offsetof(struct SIB1, si_SchedulingInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SI_SchedulingInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-SchedulingInfo"
		},
	{ ATF_POINTER, 8, offsetof(struct SIB1, servingCellConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServingCellConfigCommonSIB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellConfigCommon"
		},
	{ ATF_POINTER, 7, offsetof(struct SIB1, ims_EmergencySupport),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ims_EmergencySupport_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ims-EmergencySupport"
		},
	{ ATF_POINTER, 6, offsetof(struct SIB1, eCallOverIMS_Support),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eCallOverIMS_Support_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eCallOverIMS-Support"
		},
	{ ATF_POINTER, 5, offsetof(struct SIB1, ue_TimersAndConstants),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_TimersAndConstants,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-TimersAndConstants"
		},
	{ ATF_POINTER, 4, offsetof(struct SIB1, uac_BarringInfo),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_uac_BarringInfo_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-BarringInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct SIB1, useFullResumeID),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_useFullResumeID_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useFullResumeID"
		},
	{ ATF_POINTER, 2, offsetof(struct SIB1, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB1, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SIB1_oms_1[] = { 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_SIB1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SIB1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellSelectionInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellAccessRelatedInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* connEstFailureControl */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* si-SchedulingInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* servingCellConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ims-EmergencySupport */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* eCallOverIMS-Support */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ue-TimersAndConstants */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* uac-BarringInfo */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* useFullResumeID */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SIB1_specs_1 = {
	sizeof(struct SIB1),
	offsetof(struct SIB1, _asn_ctx),
	asn_MAP_SIB1_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_SIB1_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SIB1 = {
	"SIB1",
	"SIB1",
	&asn_OP_SEQUENCE,
	asn_DEF_SIB1_tags_1,
	sizeof(asn_DEF_SIB1_tags_1)
		/sizeof(asn_DEF_SIB1_tags_1[0]), /* 1 */
	asn_DEF_SIB1_tags_1,	/* Same as above */
	sizeof(asn_DEF_SIB1_tags_1)
		/sizeof(asn_DEF_SIB1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SIB1_1,
	12,	/* Elements count */
	&asn_SPC_SIB1_specs_1	/* Additional specs */
};

