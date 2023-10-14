/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_BFR_CSIRS_Resource_H_
#define	_BFR_CSIRS_Resource_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NZP-CSI-RS-ResourceId.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BFR-CSIRS-Resource */
typedef struct BFR_CSIRS_Resource {
	NZP_CSI_RS_ResourceId_t	 csi_RS;
	struct BFR_CSIRS_Resource__ra_OccasionList {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ra_OccasionList;
	long	*ra_PreambleIndex;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BFR_CSIRS_Resource_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BFR_CSIRS_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_BFR_CSIRS_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_BFR_CSIRS_Resource_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BFR_CSIRS_Resource_H_ */
#include <asn_internal.h>
