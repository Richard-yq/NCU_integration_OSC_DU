/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_FeatureSetUplinkPerCC_H_
#define	_FeatureSetUplinkPerCC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SubcarrierSpacing.h"
#include "SupportedBandwidth.h"
#include <NativeEnumerated.h>
#include "MIMO-LayersUL.h"
#include "ModulationOrder.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FeatureSetUplinkPerCC__channelBW_90mhz {
	FeatureSetUplinkPerCC__channelBW_90mhz_supported	= 0
} e_FeatureSetUplinkPerCC__channelBW_90mhz;

/* FeatureSetUplinkPerCC */
typedef struct FeatureSetUplinkPerCC {
	SubcarrierSpacing_t	 supportedSubcarrierSpacingUL;
	SupportedBandwidth_t	 supportedBandwidthUL;
	long	*channelBW_90mhz;	/* OPTIONAL */
	struct FeatureSetUplinkPerCC__mimo_CB_PUSCH {
		MIMO_LayersUL_t	*maxNumberMIMO_LayersCB_PUSCH;	/* OPTIONAL */
		long	 maxNumberSRS_ResourcePerSet;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mimo_CB_PUSCH;
	MIMO_LayersUL_t	*maxNumberMIMO_LayersNonCB_PUSCH;	/* OPTIONAL */
	ModulationOrder_t	*supportedModulationOrderUL;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetUplinkPerCC_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_channelBW_90mhz_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetUplinkPerCC;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetUplinkPerCC_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetUplinkPerCC_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _FeatureSetUplinkPerCC_H_ */
#include <asn_internal.h>