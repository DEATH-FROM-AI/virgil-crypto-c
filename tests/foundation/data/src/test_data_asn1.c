//  Copyright (C) 2015-2018 Virgil Security Inc.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are
//  met:
//
//      (1) Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//
//      (2) Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//
//      (3) Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
//  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
//  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
//  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
//  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//
//  Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>


#include "test_data_sha224.h"

//
//  Primitive types
//
const byte test_asn1_encoded_INT_2_BYTES[] = {
    0x02, 0x01, 0x02
};

const vsc_data_t test_asn1_encoded_INT_2 = {
    test_asn1_encoded_INT_2_BYTES, sizeof(test_asn1_encoded_INT_2_BYTES)
};

const byte test_asn1_encoded_BOOLEAN_TRUE_BYTES[] = {
    0x01, 0x01, 0xFF
};

const vsc_data_t test_asn1_encoded_BOOLEAN_TRUE = {
    test_asn1_encoded_BOOLEAN_TRUE_BYTES, sizeof(test_asn1_encoded_BOOLEAN_TRUE_BYTES)
};

const byte test_asn1_encoded_BOOLEAN_FALSE_BYTES[] = {
    0x01, 0x01, 0x00
};

const vsc_data_t test_asn1_encoded_BOOLEAN_FALSE = {
    test_asn1_encoded_BOOLEAN_FALSE_BYTES, sizeof(test_asn1_encoded_BOOLEAN_FALSE_BYTES)
};

const byte test_asn1_encoded_NULL_BYTES[] = {
    0x05, 00
};

const vsc_data_t test_asn1_encoded_NULL = {
    test_asn1_encoded_NULL_BYTES, sizeof(test_asn1_encoded_NULL_BYTES)
};



//
// Strings
//
const byte test_asn1_encoded_OCTET_STRING_BYTES[] = {
    0x04, 0x04, 0xFF, 0x01, 0x02, 0x03
};

const vsc_data_t test_asn1_encoded_OCTET_STRING = {
    test_asn1_encoded_OCTET_STRING_BYTES, sizeof(test_asn1_encoded_OCTET_STRING_BYTES)
};

const byte test_asn1_decoded_OCTET_STRING_BYTES[] = {
    0xFF, 0x01, 0x02, 0x03
};

const vsc_data_t test_asn1_decoded_OCTET_STRING = {
    test_asn1_decoded_OCTET_STRING_BYTES, sizeof(test_asn1_decoded_OCTET_STRING_BYTES)
};

const byte test_asn1_encoded_UTF8_STRING_BYTES[] = {
    0x0C, 0x04, 0x54, 0x45, 0x53, 0x54
};

const vsc_data_t test_asn1_encoded_UTF8_STRING = {
    test_asn1_encoded_UTF8_STRING_BYTES, sizeof(test_asn1_encoded_UTF8_STRING_BYTES)
};

const byte test_asn1_decoded_UTF8_STRING_BYTES[] = {
    0x54, 0x45, 0x53, 0x54
};

const vsc_data_t test_asn1_decoded_UTF8_STRING = {
    test_asn1_decoded_UTF8_STRING_BYTES, sizeof(test_asn1_decoded_UTF8_STRING_BYTES)
};

const byte test_asn1_encoded_OID_SHA256_BYTES[] = {
    0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03,
    0x04, 0x02, 0x01
};

const vsc_data_t test_asn1_encoded_OID_SHA256 = {
    test_asn1_encoded_OID_SHA256_BYTES, sizeof(test_asn1_encoded_OID_SHA256_BYTES)
};

const byte test_asn1_decoded_OID_SHA256_BYTES[] = {
    0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02,
    0x01
};

const vsc_data_t test_asn1_decoded_OID_SHA256 = {
    test_asn1_decoded_OID_SHA256_BYTES, sizeof(test_asn1_decoded_OID_SHA256_BYTES)
};


//
// Containers
//
const byte test_asn1_encoded_SEQUENCE_WITH_LEN_32_BYTES[] = {
    0x30, 0x20
};

const vsc_data_t test_asn1_encoded_SEQUENCE_WITH_LEN_32 = {
    test_asn1_encoded_SEQUENCE_WITH_LEN_32_BYTES, sizeof(test_asn1_encoded_SEQUENCE_WITH_LEN_32_BYTES)
};

const byte test_asn1_encoded_SET_WITH_LEN_32_BYTES[] = {
    0x31, 0x20
};

const vsc_data_t test_asn1_encoded_SET_WITH_LEN_32 = {
    test_asn1_encoded_SET_WITH_LEN_32_BYTES, sizeof(test_asn1_encoded_SET_WITH_LEN_32_BYTES)
};
