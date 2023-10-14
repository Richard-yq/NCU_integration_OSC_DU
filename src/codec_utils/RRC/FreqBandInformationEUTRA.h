/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_FreqBandInformationEUTRA_H_
#define	_FreqBandInformationEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorEUTRA.h"
#include "CA-BandwidthClassEUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FreqBandInformationEUTRA */
typedef struct FreqBandInformationEUTRA {
	FreqBandIndicatorEUTRA_t	 bandEUTRA;
	CA_BandwidthClassEUTRA_t	*ca_BandwidthClassDL_EUTRA;	/* OPTIONAL */
	CA_BandwidthClassEUTRA_t	*ca_BandwidthClassUL_EUTRA;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqBandInformationEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqBandInformationEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_FreqBandInformationEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqBandInformationEUTRA_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _FreqBandInformationEUTRA_H_ */
#include <asn_internal.h>
