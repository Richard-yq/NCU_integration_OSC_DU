/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_DRXConfigurationIndicator_H_
#define	_DRXConfigurationIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRXConfigurationIndicator {
	DRXConfigurationIndicator_release	= 0
	/*
	 * Enumeration is extensible
	 */
} e_DRXConfigurationIndicator;

/* DRXConfigurationIndicator */
typedef long	 DRXConfigurationIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRXConfigurationIndicator;
asn_struct_free_f DRXConfigurationIndicator_free;
asn_struct_print_f DRXConfigurationIndicator_print;
asn_constr_check_f DRXConfigurationIndicator_constraint;
ber_type_decoder_f DRXConfigurationIndicator_decode_ber;
der_type_encoder_f DRXConfigurationIndicator_encode_der;
xer_type_decoder_f DRXConfigurationIndicator_decode_xer;
xer_type_encoder_f DRXConfigurationIndicator_encode_xer;
oer_type_decoder_f DRXConfigurationIndicator_decode_oer;
oer_type_encoder_f DRXConfigurationIndicator_encode_oer;
per_type_decoder_f DRXConfigurationIndicator_decode_uper;
per_type_encoder_f DRXConfigurationIndicator_encode_uper;
per_type_decoder_f DRXConfigurationIndicator_decode_aper;
per_type_encoder_f DRXConfigurationIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DRXConfigurationIndicator_H_ */
#include <asn_internal.h>
