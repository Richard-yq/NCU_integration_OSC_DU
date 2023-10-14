/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/labadmin/hlal/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./15_3_rrc/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PollPDU_H_
#define	_PollPDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PollPDU {
	PollPDU_p4	= 0,
	PollPDU_p8	= 1,
	PollPDU_p16	= 2,
	PollPDU_p32	= 3,
	PollPDU_p64	= 4,
	PollPDU_p128	= 5,
	PollPDU_p256	= 6,
	PollPDU_p512	= 7,
	PollPDU_p1024	= 8,
	PollPDU_p2048	= 9,
	PollPDU_p4096	= 10,
	PollPDU_p6144	= 11,
	PollPDU_p8192	= 12,
	PollPDU_p12288	= 13,
	PollPDU_p16384	= 14,
	PollPDU_p20480	= 15,
	PollPDU_p24576	= 16,
	PollPDU_p28672	= 17,
	PollPDU_p32768	= 18,
	PollPDU_p40960	= 19,
	PollPDU_p49152	= 20,
	PollPDU_p57344	= 21,
	PollPDU_p65536	= 22,
	PollPDU_infinity	= 23,
	PollPDU_spare8	= 24,
	PollPDU_spare7	= 25,
	PollPDU_spare6	= 26,
	PollPDU_spare5	= 27,
	PollPDU_spare4	= 28,
	PollPDU_spare3	= 29,
	PollPDU_spare2	= 30,
	PollPDU_spare1	= 31
} e_PollPDU;

/* PollPDU */
typedef long	 PollPDU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PollPDU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PollPDU;
extern const asn_INTEGER_specifics_t asn_SPC_PollPDU_specs_1;
asn_struct_free_f PollPDU_free;
asn_struct_print_f PollPDU_print;
asn_constr_check_f PollPDU_constraint;
ber_type_decoder_f PollPDU_decode_ber;
der_type_encoder_f PollPDU_encode_der;
xer_type_decoder_f PollPDU_decode_xer;
xer_type_encoder_f PollPDU_encode_xer;
oer_type_decoder_f PollPDU_decode_oer;
oer_type_encoder_f PollPDU_encode_oer;
per_type_decoder_f PollPDU_decode_uper;
per_type_encoder_f PollPDU_encode_uper;
per_type_decoder_f PollPDU_decode_aper;
per_type_encoder_f PollPDU_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PollPDU_H_ */
#include <asn_internal.h>
