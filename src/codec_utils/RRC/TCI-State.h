/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_TCI_State_H_
#define	_TCI_State_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TCI-StateId.h"
#include "QCL-Info.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QCL_Info;

/* TCI-State */
typedef struct TCI_State {
	TCI_StateId_t	 tci_StateId;
	QCL_Info_t	 qcl_Type1;
	struct QCL_Info	*qcl_Type2;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TCI_State_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TCI_State;
extern asn_SEQUENCE_specifics_t asn_SPC_TCI_State_specs_1;
extern asn_TYPE_member_t asn_MBR_TCI_State_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TCI_State_H_ */
#include <asn_internal.h>
