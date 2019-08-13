//  Copyright (C) 2015-2019 Virgil Security, Inc.
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


#include "test_data_rsa.h"

const byte test_rsa_DETERMINISTIC_KEY_MATERIAL_BYTES[] = {
    0x77, 0xfa, 0x8f, 0x44, 0x6f, 0x07, 0x58, 0x71,
    0x27, 0x70, 0x09, 0x98, 0x74, 0x2b, 0xa4, 0xc8,
    0xe6, 0x0b, 0xac, 0x5e, 0xf5, 0x2e, 0x53, 0x26,
    0xc7, 0xf9, 0x28, 0xcc, 0x2a, 0x80, 0xeb, 0xe0,
};

const vsc_data_t test_rsa_DETERMINISTIC_KEY_MATERIAL = {
    test_rsa_DETERMINISTIC_KEY_MATERIAL_BYTES, sizeof(test_rsa_DETERMINISTIC_KEY_MATERIAL_BYTES)
};


const byte test_rsa_2048_PUBLIC_KEY_PKCS1_BYTES[] = {
    0x30, 0x82, 0x01, 0x09, 0x02, 0x82, 0x01, 0x00,
    0x53, 0x7c, 0xc7, 0xe8, 0xfb, 0x4b, 0x09, 0x75,
    0x73, 0x9f, 0x3f, 0xf6, 0x13, 0xd0, 0x1a, 0x98,
    0xd5, 0x03, 0x9e, 0xb8, 0x59, 0xc0, 0xfd, 0x8b,
    0x01, 0xdf, 0x72, 0xa6, 0x36, 0x73, 0xef, 0xad,
    0x12, 0x1c, 0x33, 0x74, 0x6f, 0x2a, 0x1c, 0x1b,
    0xe4, 0x39, 0x99, 0xcf, 0xc5, 0x45, 0xfa, 0xb8,
    0x97, 0x56, 0x91, 0x31, 0xae, 0x7e, 0xb7, 0x60,
    0x13, 0xe8, 0x7a, 0xc3, 0x27, 0x07, 0xa9, 0xc9,
    0x10, 0xf1, 0x3a, 0xa7, 0x98, 0xcf, 0xa0, 0x5e,
    0x78, 0x71, 0x1b, 0x71, 0x6b, 0xb5, 0xc8, 0xf3,
    0xa7, 0x0b, 0xad, 0xd3, 0x7e, 0x93, 0x75, 0xac,
    0xf7, 0x52, 0xc1, 0xd0, 0x96, 0xa9, 0xef, 0xba,
    0xed, 0x84, 0x84, 0x72, 0x1e, 0x9e, 0xbb, 0x08,
    0x65, 0xfd, 0x0c, 0x55, 0x47, 0x09, 0x46, 0x17,
    0xd7, 0x13, 0xf8, 0x6f, 0x92, 0xa3, 0x2f, 0x43,
    0xd6, 0xfd, 0x3b, 0x52, 0xd5, 0x85, 0x5c, 0x73,
    0x84, 0x50, 0x4a, 0xad, 0x7f, 0xdf, 0x95, 0xce,
    0xff, 0xef, 0x80, 0x6a, 0xed, 0x6b, 0x75, 0xeb,
    0xd6, 0x50, 0xb7, 0x33, 0xee, 0xee, 0xea, 0x53,
    0x47, 0x9e, 0xf3, 0x8f, 0x59, 0xc5, 0xf6, 0x82,
    0x90, 0x72, 0x4a, 0x62, 0xed, 0xd0, 0x13, 0xdb,
    0xb6, 0xee, 0xa5, 0x66, 0xfd, 0x5c, 0xb4, 0x4e,
    0x7a, 0xcd, 0xc0, 0x27, 0xe4, 0x8f, 0x7d, 0xb6,
    0x20, 0xde, 0x7e, 0xca, 0xb1, 0x87, 0xc3, 0x14,
    0x98, 0x7b, 0xad, 0xe4, 0xcb, 0xe1, 0xd1, 0x9d,
    0xd4, 0x3b, 0x0c, 0x86, 0xef, 0xf9, 0x00, 0xeb,
    0x4e, 0xe1, 0xf7, 0x93, 0xe8, 0xd0, 0x33, 0xd9,
    0x45, 0x9b, 0x14, 0x6a, 0xaf, 0xf9, 0x97, 0x1d,
    0xc1, 0xc7, 0x27, 0x40, 0x8e, 0x97, 0x22, 0xa9,
    0x1d, 0x27, 0xae, 0x3b, 0xb3, 0x15, 0x1e, 0x97,
    0xae, 0xc7, 0xf3, 0x60, 0x56, 0x22, 0xa0, 0xe3,
    0x8b, 0x8b, 0xb4, 0xea, 0x46, 0xe6, 0x10, 0xeb,
    0x02, 0x03, 0x01, 0x00, 0x01
};

const vsc_data_t test_rsa_2048_PUBLIC_KEY_PKCS1 = {
    test_rsa_2048_PUBLIC_KEY_PKCS1_BYTES, sizeof(test_rsa_2048_PUBLIC_KEY_PKCS1_BYTES)
};

const byte test_rsa_2048_PRIVATE_KEY_PKCS1_BYTES[] = {
    0x30, 0x82, 0x04, 0xa2, 0x02, 0x01, 0x00, 0x02,
    0x82, 0x01, 0x00, 0x53, 0x7c, 0xc7, 0xe8, 0xfb,
    0x4b, 0x09, 0x75, 0x73, 0x9f, 0x3f, 0xf6, 0x13,
    0xd0, 0x1a, 0x98, 0xd5, 0x03, 0x9e, 0xb8, 0x59,
    0xc0, 0xfd, 0x8b, 0x01, 0xdf, 0x72, 0xa6, 0x36,
    0x73, 0xef, 0xad, 0x12, 0x1c, 0x33, 0x74, 0x6f,
    0x2a, 0x1c, 0x1b, 0xe4, 0x39, 0x99, 0xcf, 0xc5,
    0x45, 0xfa, 0xb8, 0x97, 0x56, 0x91, 0x31, 0xae,
    0x7e, 0xb7, 0x60, 0x13, 0xe8, 0x7a, 0xc3, 0x27,
    0x07, 0xa9, 0xc9, 0x10, 0xf1, 0x3a, 0xa7, 0x98,
    0xcf, 0xa0, 0x5e, 0x78, 0x71, 0x1b, 0x71, 0x6b,
    0xb5, 0xc8, 0xf3, 0xa7, 0x0b, 0xad, 0xd3, 0x7e,
    0x93, 0x75, 0xac, 0xf7, 0x52, 0xc1, 0xd0, 0x96,
    0xa9, 0xef, 0xba, 0xed, 0x84, 0x84, 0x72, 0x1e,
    0x9e, 0xbb, 0x08, 0x65, 0xfd, 0x0c, 0x55, 0x47,
    0x09, 0x46, 0x17, 0xd7, 0x13, 0xf8, 0x6f, 0x92,
    0xa3, 0x2f, 0x43, 0xd6, 0xfd, 0x3b, 0x52, 0xd5,
    0x85, 0x5c, 0x73, 0x84, 0x50, 0x4a, 0xad, 0x7f,
    0xdf, 0x95, 0xce, 0xff, 0xef, 0x80, 0x6a, 0xed,
    0x6b, 0x75, 0xeb, 0xd6, 0x50, 0xb7, 0x33, 0xee,
    0xee, 0xea, 0x53, 0x47, 0x9e, 0xf3, 0x8f, 0x59,
    0xc5, 0xf6, 0x82, 0x90, 0x72, 0x4a, 0x62, 0xed,
    0xd0, 0x13, 0xdb, 0xb6, 0xee, 0xa5, 0x66, 0xfd,
    0x5c, 0xb4, 0x4e, 0x7a, 0xcd, 0xc0, 0x27, 0xe4,
    0x8f, 0x7d, 0xb6, 0x20, 0xde, 0x7e, 0xca, 0xb1,
    0x87, 0xc3, 0x14, 0x98, 0x7b, 0xad, 0xe4, 0xcb,
    0xe1, 0xd1, 0x9d, 0xd4, 0x3b, 0x0c, 0x86, 0xef,
    0xf9, 0x00, 0xeb, 0x4e, 0xe1, 0xf7, 0x93, 0xe8,
    0xd0, 0x33, 0xd9, 0x45, 0x9b, 0x14, 0x6a, 0xaf,
    0xf9, 0x97, 0x1d, 0xc1, 0xc7, 0x27, 0x40, 0x8e,
    0x97, 0x22, 0xa9, 0x1d, 0x27, 0xae, 0x3b, 0xb3,
    0x15, 0x1e, 0x97, 0xae, 0xc7, 0xf3, 0x60, 0x56,
    0x22, 0xa0, 0xe3, 0x8b, 0x8b, 0xb4, 0xea, 0x46,
    0xe6, 0x10, 0xeb, 0x02, 0x03, 0x01, 0x00, 0x01,
    0x02, 0x82, 0x01, 0x00, 0x48, 0xa0, 0xa0, 0x77,
    0xf9, 0x43, 0xc9, 0xb2, 0xb7, 0x26, 0xae, 0x49,
    0xaf, 0xea, 0xb5, 0x78, 0x86, 0xb6, 0x63, 0x79,
    0x13, 0xfb, 0x63, 0x95, 0x6d, 0xc7, 0xa8, 0xc1,
    0x17, 0x55, 0xbc, 0x06, 0xdf, 0x5e, 0x51, 0x14,
    0xd5, 0x2f, 0xd8, 0xcc, 0x1a, 0xba, 0x51, 0x28,
    0x02, 0x01, 0x62, 0x9e, 0xfa, 0x68, 0x80, 0x5e,
    0xab, 0xe1, 0xe8, 0x3c, 0x58, 0x95, 0x41, 0x56,
    0x4b, 0xb9, 0xca, 0xe5, 0xf3, 0x2b, 0x27, 0x4f,
    0x6d, 0x0c, 0x12, 0x02, 0x9c, 0xdc, 0x28, 0x77,
    0x7e, 0xaf, 0xe1, 0x64, 0xb4, 0xc8, 0xe0, 0x2a,
    0xc0, 0x4e, 0x1f, 0x6c, 0x9c, 0xab, 0x0d, 0x98,
    0x1b, 0xb9, 0x31, 0xa7, 0x77, 0xc0, 0x74, 0x47,
    0xa2, 0x83, 0x8b, 0x49, 0x3f, 0x0f, 0xe7, 0x8e,
    0xb8, 0x01, 0x45, 0x4c, 0xaf, 0xf9, 0xdb, 0x81,
    0x94, 0x1b, 0x09, 0x9f, 0x06, 0x83, 0xbc, 0xfb,
    0xce, 0x6b, 0xf9, 0x84, 0x34, 0x7f, 0xc0, 0xf3,
    0xb6, 0x93, 0xa4, 0xa3, 0x55, 0x68, 0x7f, 0xd4,
    0x64, 0xaa, 0x72, 0x89, 0xd3, 0x4c, 0x5b, 0x86,
    0x68, 0x95, 0xdd, 0x41, 0xaa, 0xbb, 0x54, 0xd0,
    0xb3, 0x40, 0x74, 0x75, 0x67, 0x46, 0x9c, 0xea,
    0xa3, 0x6f, 0x39, 0x20, 0xdf, 0x1c, 0x39, 0x3c,
    0x9b, 0x8f, 0xca, 0x82, 0x4e, 0x2b, 0xe7, 0x41,
    0xa0, 0x94, 0xd7, 0x92, 0x25, 0x9d, 0x5c, 0xb7,
    0x1a, 0x98, 0x1e, 0xed, 0x71, 0x27, 0x18, 0x1e,
    0x61, 0xb9, 0x14, 0x7f, 0x25, 0x73, 0x98, 0x2d,
    0x7a, 0x31, 0xc7, 0x05, 0xb0, 0x89, 0xc3, 0x88,
    0x1d, 0xd2, 0x85, 0xab, 0x0e, 0x8d, 0xc7, 0x75,
    0x24, 0x9c, 0xe3, 0xaf, 0xcc, 0xc1, 0x9c, 0xe1,
    0xfb, 0xa4, 0x67, 0x6b, 0x84, 0xdd, 0x79, 0x05,
    0x7a, 0xa2, 0xb0, 0xe8, 0x72, 0xa5, 0xee, 0xc9,
    0x83, 0x57, 0xe3, 0x1b, 0x0b, 0x58, 0xdc, 0xcb,
    0xf6, 0x01, 0xd2, 0x21, 0x02, 0x81, 0x81, 0x00,
    0xa3, 0x79, 0xb8, 0xfd, 0xb3, 0x1d, 0x79, 0x53,
    0x25, 0x61, 0x3b, 0x14, 0x72, 0x2c, 0x91, 0xc2,
    0xdf, 0x5b, 0x4b, 0x1d, 0x79, 0x68, 0xfa, 0x18,
    0x03, 0xdc, 0x57, 0x44, 0x93, 0xf0, 0x72, 0x7a,
    0xfe, 0xa8, 0x2a, 0x1a, 0x83, 0x76, 0x35, 0x32,
    0xb4, 0xa4, 0x48, 0x49, 0x71, 0xd7, 0x89, 0x8a,
    0x17, 0x9b, 0xaf, 0xf9, 0x21, 0x99, 0x6c, 0x74,
    0xdd, 0x92, 0x0b, 0x5a, 0x01, 0x19, 0x57, 0x45,
    0x1c, 0x3c, 0x5e, 0xe0, 0x17, 0x8a, 0x0e, 0x5b,
    0x56, 0x73, 0xc5, 0x6d, 0x56, 0x0e, 0xc5, 0x4f,
    0xcb, 0x1e, 0x18, 0xd6, 0xa8, 0xbd, 0x0b, 0x12,
    0x15, 0xf0, 0x20, 0xcb, 0x1d, 0xef, 0x12, 0xdb,
    0x03, 0x25, 0xf9, 0x33, 0x7f, 0x40, 0x39, 0xa7,
    0x9f, 0xca, 0xae, 0x33, 0x5e, 0x06, 0x94, 0x23,
    0x67, 0x5a, 0x00, 0x0f, 0x1f, 0x73, 0x37, 0xfc,
    0x86, 0x1f, 0x0a, 0x24, 0x63, 0x55, 0xa0, 0xdd,
    0x02, 0x81, 0x81, 0x00, 0x82, 0xbd, 0x6f, 0x58,
    0xf1, 0x21, 0xe6, 0xc8, 0xdc, 0xa3, 0xd6, 0x2c,
    0x20, 0x79, 0xae, 0x7d, 0xad, 0xd8, 0xd9, 0xf1,
    0x8c, 0x67, 0x8a, 0x36, 0xe1, 0xd9, 0x7e, 0xba,
    0x58, 0xd7, 0x39, 0x2d, 0x5c, 0x64, 0x1b, 0x23,
    0xef, 0x4f, 0x17, 0x2e, 0xf6, 0x45, 0x02, 0x7f,
    0x6d, 0xf8, 0xea, 0xd0, 0xeb, 0xda, 0x15, 0x4b,
    0x72, 0x3b, 0x98, 0x21, 0x2d, 0xd1, 0xbf, 0x7c,
    0x4b, 0x90, 0xaa, 0x8a, 0xad, 0x06, 0xfe, 0xab,
    0xee, 0xaa, 0x3f, 0x8c, 0xbb, 0xe0, 0x2e, 0xb8,
    0xd0, 0xe5, 0xb8, 0x19, 0x35, 0x6b, 0xce, 0x6c,
    0x0f, 0x55, 0x9e, 0x25, 0x9f, 0xf4, 0xff, 0x11,
    0xc4, 0x5b, 0xea, 0x46, 0xdf, 0xab, 0xf7, 0x98,
    0x3d, 0x05, 0x9a, 0xb6, 0xae, 0x28, 0xc2, 0xbc,
    0x64, 0xe5, 0xd3, 0x33, 0x5e, 0x96, 0xb2, 0xa4,
    0x46, 0x37, 0x1c, 0xf3, 0x19, 0x17, 0xa3, 0x70,
    0xf0, 0x2a, 0x38, 0x67, 0x02, 0x81, 0x80, 0x70,
    0x21, 0x79, 0x13, 0x83, 0xfd, 0xae, 0x8f, 0xaa,
    0xaf, 0x23, 0xd0, 0x25, 0x74, 0x8e, 0xd2, 0xc5,
    0x54, 0x20, 0x94, 0xea, 0x07, 0x68, 0xac, 0x7a,
    0x51, 0x74, 0x06, 0x95, 0x17, 0x33, 0xdf, 0x4b,
    0xb7, 0xdb, 0x91, 0x6e, 0x24, 0xf1, 0xde, 0x82,
    0xeb, 0xc0, 0xad, 0xa8, 0x09, 0xb8, 0xcc, 0xe0,
    0xde, 0xa8, 0x78, 0xd1, 0x64, 0x24, 0x71, 0x90,
    0xdd, 0xb1, 0x2d, 0x9e, 0x5d, 0x5c, 0x70, 0x0a,
    0x2b, 0x1a, 0xc4, 0xc9, 0x40, 0xa8, 0x12, 0x5c,
    0x9d, 0x72, 0x89, 0x49, 0xa3, 0x3e, 0x12, 0x3a,
    0x77, 0xbd, 0x7f, 0xd8, 0x24, 0x3b, 0x68, 0xbf,
    0x65, 0x83, 0x88, 0xef, 0x52, 0x62, 0x73, 0x99,
    0x98, 0x3d, 0x73, 0xe6, 0x50, 0x0e, 0x7b, 0xfc,
    0xee, 0x10, 0x49, 0x29, 0xb0, 0x87, 0x82, 0x35,
    0x4d, 0x15, 0x87, 0x4a, 0x02, 0x45, 0x1f, 0xd0,
    0x7b, 0x90, 0x00, 0x5f, 0xa6, 0x87, 0x7d, 0x02,
    0x81, 0x80, 0x4a, 0x9f, 0x93, 0xd1, 0xa1, 0x78,
    0xe7, 0x40, 0x98, 0xe7, 0x8f, 0x14, 0x8a, 0xc8,
    0xc9, 0x77, 0x04, 0xe6, 0xb4, 0xa7, 0x71, 0xab,
    0x9b, 0xb1, 0x6d, 0xc1, 0xf5, 0xda, 0xa9, 0x60,
    0xd7, 0x4a, 0xf3, 0xe4, 0x53, 0xb5, 0x74, 0x1f,
    0xa1, 0xac, 0xf5, 0x76, 0x38, 0x51, 0xc1, 0xd4,
    0x85, 0x3b, 0x10, 0x93, 0xde, 0xf9, 0xbc, 0x4f,
    0x15, 0xab, 0x42, 0x7a, 0xe9, 0x20, 0x2a, 0x05,
    0x7d, 0xc2, 0x3f, 0xb6, 0xb1, 0x60, 0x33, 0x8e,
    0xcb, 0x4d, 0x29, 0xe3, 0x70, 0xe7, 0x9e, 0x9c,
    0xb0, 0x32, 0xfb, 0x51, 0xf8, 0x75, 0xa7, 0x5f,
    0x08, 0x30, 0x93, 0x97, 0x84, 0x8b, 0x80, 0x97,
    0xb2, 0x26, 0x17, 0xff, 0x11, 0x08, 0xbd, 0x33,
    0xd8, 0xb6, 0x12, 0xbc, 0x43, 0x42, 0xc3, 0x18,
    0x87, 0x2f, 0x57, 0xfb, 0x0e, 0x26, 0x43, 0xc9,
    0xab, 0x65, 0x7a, 0x5a, 0x0a, 0xb9, 0x28, 0xec,
    0x00, 0x5b, 0x02, 0x81, 0x81, 0x00, 0x94, 0x69,
    0x45, 0xf8, 0x1b, 0xd8, 0x13, 0xfd, 0x29, 0xf9,
    0x9d, 0xa0, 0xee, 0x71, 0xd9, 0x94, 0xcc, 0x30,
    0x25, 0xfc, 0x78, 0x1a, 0xc9, 0xa3, 0x1d, 0x73,
    0x49, 0x51, 0xa5, 0xd7, 0x65, 0xc9, 0xa3, 0xf7,
    0x6d, 0x35, 0xa5, 0x18, 0xb6, 0x80, 0x4e, 0x5c,
    0x7a, 0x1c, 0xc9, 0x5c, 0x2d, 0xf4, 0xde, 0xfc,
    0x69, 0x00, 0x85, 0x0a, 0x2c, 0x8b, 0xad, 0xec,
    0x1c, 0x1a, 0xa4, 0x51, 0x6a, 0x8a, 0x47, 0xbb,
    0xbe, 0x73, 0x9b, 0xe7, 0x93, 0xfb, 0x63, 0x5e,
    0xcd, 0xe6, 0x92, 0x8a, 0xef, 0x68, 0x84, 0x20,
    0xa8, 0x33, 0xb5, 0x4f, 0xca, 0x49, 0x26, 0x54,
    0x73, 0xae, 0xca, 0x51, 0x8b, 0x64, 0xa7, 0x7a,
    0x3c, 0x02, 0x0a, 0x76, 0x67, 0xea, 0x76, 0xdc,
    0xcf, 0x1f, 0x85, 0xc5, 0x67, 0xeb, 0xbd, 0x94,
    0x48, 0x08, 0xbb, 0x17, 0x52, 0x27, 0xd8, 0x28,
    0x21, 0x39, 0x93, 0xe8, 0x03, 0x01
};

const vsc_data_t test_rsa_2048_PRIVATE_KEY_PKCS1 = {
    test_rsa_2048_PRIVATE_KEY_PKCS1_BYTES, sizeof(test_rsa_2048_PRIVATE_KEY_PKCS1_BYTES)
};

const byte test_rsa_2048_GENERATED_PRIVATE_KEY_PKCS1_BYTES[] = {
    0x30, 0x82, 0x04, 0xA4, 0x02, 0x01, 0x00, 0x02,
    0x82, 0x01, 0x01, 0x00, 0xE3, 0xDB, 0xC3, 0xC8,
    0x88, 0x84, 0x2D, 0xF8, 0xBF, 0x63, 0xBC, 0xEF,
    0xB4, 0x0C, 0x2E, 0x9D, 0xB5, 0x28, 0xA8, 0x83,
    0xD8, 0xDA, 0xC6, 0x5A, 0xC0, 0xE7, 0x20, 0x74,
    0xB2, 0x1A, 0x50, 0x01, 0x04, 0xA8, 0x1B, 0xB5,
    0xFC, 0xB4, 0xC1, 0x15, 0xAE, 0x33, 0x0E, 0x21,
    0x61, 0xB9, 0xC2, 0xF6, 0x55, 0x41, 0x6E, 0x4B,
    0x25, 0x68, 0x12, 0xC6, 0xC7, 0x70, 0x83, 0x9C,
    0xE5, 0xE0, 0x27, 0x22, 0xB2, 0x77, 0x5C, 0x59,
    0x1B, 0xEF, 0xA0, 0x90, 0xBE, 0x7A, 0x70, 0x59,
    0xB0, 0x96, 0x08, 0xAB, 0x90, 0xE2, 0xEE, 0x79,
    0x64, 0x34, 0xC3, 0x26, 0xEB, 0x2C, 0x98, 0x24,
    0x3A, 0x98, 0x0D, 0xC6, 0x63, 0x10, 0xED, 0xA8,
    0x79, 0x1D, 0xF0, 0x1F, 0x84, 0xB9, 0x79, 0x9B,
    0xEF, 0xE9, 0xCB, 0x45, 0x10, 0x7A, 0xFB, 0xA9,
    0xD2, 0xEB, 0xD4, 0x08, 0x60, 0x67, 0xBC, 0xED,
    0x01, 0x10, 0xEC, 0x99, 0xFF, 0x48, 0x82, 0xFA,
    0x48, 0x5F, 0x22, 0x12, 0x2B, 0xB0, 0x9F, 0xCC,
    0xFA, 0xC8, 0xC5, 0x79, 0xAD, 0x1B, 0x78, 0x7E,
    0x62, 0x82, 0x91, 0x3B, 0x7E, 0xC7, 0x2D, 0xB7,
    0xB5, 0xDF, 0x0A, 0x27, 0xF4, 0xA3, 0x35, 0x3B,
    0x6A, 0x3B, 0x57, 0xB4, 0x69, 0x32, 0xB2, 0x77,
    0xC0, 0x8A, 0xEF, 0x43, 0xCC, 0x47, 0x08, 0xA4,
    0xF5, 0x51, 0xFE, 0xDC, 0x78, 0x44, 0xD3, 0x5A,
    0xC4, 0x42, 0x49, 0x4D, 0x1A, 0x3F, 0xD8, 0x05,
    0xB4, 0xD9, 0x96, 0x7D, 0x86, 0x4D, 0x88, 0xA1,
    0x8E, 0x54, 0xE7, 0x37, 0x92, 0xB3, 0x21, 0xE1,
    0xB9, 0x37, 0x0D, 0x6E, 0xC8, 0x3D, 0x3A, 0x98,
    0x96, 0x3A, 0xF3, 0x50, 0x8C, 0x41, 0xC0, 0xD8,
    0xFE, 0x64, 0x05, 0x31, 0x31, 0x41, 0x6F, 0x46,
    0x15, 0x66, 0x96, 0x63, 0x91, 0x57, 0x5E, 0x8D,
    0x7F, 0xE5, 0x7D, 0xDF, 0xD6, 0xCE, 0x50, 0xBF,
    0x4D, 0xEC, 0xD8, 0x8F, 0x02, 0x03, 0x01, 0x00,
    0x01, 0x02, 0x82, 0x01, 0x00, 0x6C, 0xF5, 0x8B,
    0x32, 0xDA, 0xAD, 0x32, 0x7A, 0x8F, 0xB2, 0xF7,
    0x07, 0x3C, 0xF6, 0xD2, 0x57, 0xD1, 0xE8, 0x46,
    0x64, 0xFE, 0x0E, 0xE7, 0xE9, 0x3F, 0xF3, 0x86,
    0x1E, 0xA7, 0x88, 0x53, 0x97, 0x99, 0x0D, 0x76,
    0x6A, 0xD9, 0x13, 0xEA, 0x7D, 0x1E, 0x97, 0x05,
    0x7B, 0xCB, 0x0A, 0x94, 0x83, 0x4D, 0x13, 0x83,
    0xD5, 0x65, 0x66, 0xD6, 0x0B, 0xBE, 0x15, 0x3C,
    0xAA, 0x8B, 0x76, 0x5B, 0xE0, 0x88, 0xAC, 0xF1,
    0x39, 0x1F, 0x55, 0xC0, 0x57, 0x56, 0xEE, 0x9F,
    0xC9, 0x13, 0xDB, 0x3A, 0xFC, 0x27, 0xC5, 0x8C,
    0xB9, 0xF9, 0xC4, 0x0D, 0x4A, 0x10, 0x0D, 0x7C,
    0x17, 0x5E, 0xF9, 0x95, 0x24, 0xB7, 0xFC, 0xC1,
    0x58, 0xDD, 0xCA, 0x06, 0x28, 0x5C, 0x44, 0x81,
    0x35, 0xA3, 0x4D, 0x0E, 0x49, 0xD1, 0x6E, 0xAD,
    0xE7, 0x70, 0x98, 0x1B, 0x05, 0x82, 0x6C, 0x38,
    0xF8, 0xB0, 0x98, 0xD2, 0x3A, 0x8E, 0xB0, 0x4E,
    0x66, 0x10, 0x96, 0x1F, 0xB9, 0x33, 0xDD, 0xC7,
    0xB9, 0x64, 0x7C, 0xF6, 0xA5, 0xB1, 0x46, 0xE5,
    0xB4, 0x12, 0x50, 0x4C, 0x6E, 0x42, 0x91, 0x3F,
    0x67, 0xAB, 0xA2, 0x38, 0x66, 0xF1, 0x09, 0x36,
    0xA5, 0xC5, 0x3D, 0xB1, 0xFB, 0xB2, 0xAB, 0xD4,
    0xE2, 0x25, 0x5B, 0x56, 0xB8, 0x29, 0x0C, 0x5B,
    0x2B, 0xE3, 0x85, 0xC5, 0xCA, 0x07, 0x7C, 0x93,
    0x1F, 0xFF, 0xD4, 0x77, 0x89, 0x31, 0xFE, 0x8A,
    0x35, 0xDE, 0xCD, 0x07, 0xAD, 0x79, 0xD7, 0xE0,
    0x7C, 0xBE, 0xD4, 0xD1, 0x48, 0x9E, 0xA9, 0x1E,
    0xD4, 0xC7, 0x4B, 0xE5, 0x06, 0x13, 0xB2, 0x80,
    0x8E, 0x3F, 0xFB, 0xD2, 0x46, 0x74, 0x75, 0xB7,
    0x01, 0xED, 0x54, 0xBE, 0x6A, 0x5E, 0xFD, 0x05,
    0xDF, 0x7B, 0xCC, 0xDD, 0x80, 0xD7, 0x4F, 0xD5,
    0xC5, 0x63, 0xF3, 0x08, 0xCC, 0x8C, 0xB0, 0x16,
    0x56, 0x54, 0x29, 0xBA, 0x49, 0x02, 0x81, 0x81,
    0x00, 0xF9, 0x6D, 0x72, 0x7B, 0x9A, 0xD5, 0x4D,
    0x11, 0xA8, 0x88, 0x58, 0x04, 0xF8, 0x6E, 0x80,
    0xE6, 0x3D, 0x08, 0xA3, 0x62, 0xA2, 0x8A, 0x0C,
    0x9F, 0xF2, 0x70, 0x50, 0xD3, 0xB1, 0x18, 0x30,
    0x35, 0x33, 0x67, 0x8E, 0x28, 0xFD, 0xBA, 0x26,
    0x87, 0xF3, 0xA2, 0xDE, 0x2B, 0x9D, 0x90, 0x76,
    0xD6, 0xB4, 0x41, 0xD0, 0xCC, 0xD4, 0x92, 0x01,
    0xDF, 0x45, 0xF3, 0xAF, 0x59, 0x9D, 0xEC, 0xCA,
    0xAE, 0x33, 0x13, 0xCE, 0x70, 0xC6, 0x66, 0xBD,
    0x26, 0xA1, 0xD3, 0x63, 0x88, 0x36, 0x9C, 0x01,
    0x3E, 0xFC, 0x2D, 0x23, 0xF4, 0x8D, 0x18, 0xBC,
    0x86, 0xC4, 0xEE, 0x55, 0xD0, 0x57, 0x80, 0xD0,
    0x4E, 0xD3, 0x09, 0xE6, 0x6B, 0x9D, 0xEE, 0xFB,
    0x23, 0x0B, 0x20, 0x19, 0x34, 0x25, 0xC5, 0x27,
    0xCC, 0xFD, 0x13, 0xBC, 0xFF, 0x44, 0x7B, 0xCF,
    0xEB, 0x6B, 0x2D, 0x55, 0x79, 0x30, 0x9C, 0xC5,
    0x9B, 0x02, 0x81, 0x81, 0x00, 0xE9, 0xDC, 0xD1,
    0xEB, 0x56, 0xA9, 0x90, 0xA6, 0xCA, 0x50, 0xBA,
    0x26, 0x7C, 0xAF, 0x47, 0x5F, 0x58, 0xAC, 0x69,
    0xBB, 0x0A, 0x43, 0x2C, 0x95, 0xBD, 0x80, 0xB6,
    0x25, 0xA5, 0x5D, 0xE8, 0x46, 0x5F, 0xE4, 0xA2,
    0x38, 0x49, 0x6E, 0xB6, 0x6B, 0x3B, 0x09, 0x64,
    0x52, 0x10, 0xAF, 0x44, 0xB6, 0xC7, 0x18, 0xBF,
    0x6F, 0x61, 0xFA, 0xE6, 0x0B, 0x70, 0xC9, 0x58,
    0xC5, 0x13, 0xC5, 0x52, 0x55, 0x24, 0xA6, 0xEF,
    0x33, 0x99, 0xD2, 0x43, 0x9A, 0x34, 0xEF, 0xB0,
    0xB8, 0xDB, 0xEF, 0xD2, 0xEF, 0x2F, 0xAC, 0x48,
    0x6D, 0x17, 0xFC, 0x33, 0x66, 0xAB, 0xE3, 0xCA,
    0x94, 0x34, 0xAD, 0xD0, 0xF0, 0xFC, 0xE9, 0x3D,
    0xDE, 0x41, 0xFD, 0x90, 0xBF, 0xA4, 0xE3, 0xB2,
    0x31, 0x63, 0x6B, 0x68, 0xDF, 0x5B, 0x1E, 0x4C,
    0x9D, 0x80, 0x71, 0x7D, 0xAA, 0x23, 0x5C, 0xED,
    0x77, 0x1F, 0x71, 0xC2, 0x1D, 0x02, 0x81, 0x81,
    0x00, 0x97, 0x28, 0xB9, 0xF9, 0xA8, 0xA2, 0xDD,
    0xDA, 0xF6, 0xBC, 0xF2, 0x42, 0xC8, 0xE0, 0x07,
    0x24, 0x01, 0x17, 0x0C, 0x15, 0x49, 0x95, 0xCA,
    0x02, 0xE0, 0xE5, 0x2A, 0x46, 0xB0, 0x8B, 0x8D,
    0x23, 0xA0, 0xAC, 0x80, 0x5D, 0xDD, 0x2E, 0x84,
    0x0D, 0x5E, 0x1C, 0x74, 0xF2, 0x0F, 0xC2, 0x2E,
    0x12, 0xFE, 0x18, 0xE8, 0xD6, 0x49, 0x78, 0xD6,
    0xC3, 0x9D, 0xDC, 0x09, 0x87, 0x91, 0x0A, 0xA0,
    0xE6, 0x23, 0x34, 0x3C, 0xA6, 0xE1, 0xC5, 0xFF,
    0x99, 0xBA, 0xF6, 0xA5, 0xDA, 0x35, 0xE6, 0x23,
    0x67, 0x2D, 0x62, 0x99, 0xE8, 0xA9, 0xDD, 0xB4,
    0xDB, 0x23, 0xDB, 0xA0, 0x8B, 0xEB, 0x8B, 0xB8,
    0x32, 0x1C, 0xF9, 0x61, 0xF8, 0x14, 0x35, 0x71,
    0x63, 0x12, 0x69, 0xF8, 0x7C, 0x3E, 0xEB, 0x95,
    0xAC, 0x48, 0x2F, 0x3F, 0x19, 0xA0, 0x42, 0x3C,
    0x86, 0x5A, 0x64, 0x95, 0xE9, 0x25, 0x09, 0xCD,
    0x43, 0x02, 0x81, 0x81, 0x00, 0xD1, 0x87, 0x95,
    0x55, 0x03, 0x9A, 0x7D, 0x0D, 0xD3, 0x2A, 0xAC,
    0xFE, 0x1A, 0xAC, 0x78, 0x88, 0x06, 0xCC, 0xC3,
    0x16, 0x5F, 0xC5, 0x7B, 0xC6, 0xD5, 0xB8, 0xE2,
    0x79, 0xAC, 0x46, 0x0C, 0xFC, 0x30, 0xA2, 0x8A,
    0x6D, 0x5F, 0xED, 0x9F, 0xE7, 0x47, 0x47, 0xCC,
    0xE8, 0x72, 0x26, 0x76, 0xAC, 0x44, 0x89, 0xF9,
    0xCA, 0xF3, 0xC0, 0x76, 0x28, 0x3D, 0xEF, 0x48,
    0x67, 0x9A, 0xA5, 0x2A, 0x75, 0x3A, 0x97, 0x8E,
    0xAD, 0x6E, 0xDE, 0x22, 0xCF, 0xA1, 0x2A, 0x37,
    0xEE, 0x08, 0xB0, 0x41, 0x0F, 0x28, 0x69, 0x75,
    0xA2, 0xB8, 0xE0, 0xAF, 0xB5, 0x07, 0xC0, 0xDA,
    0x1A, 0x1B, 0x70, 0xB8, 0x49, 0x92, 0x6F, 0xEF,
    0x8C, 0x99, 0x17, 0x74, 0x7F, 0x20, 0x5F, 0x19,
    0xA2, 0x82, 0x6F, 0x13, 0xD1, 0x3A, 0xB4, 0x54,
    0xF4, 0xB0, 0xC5, 0xFE, 0x4F, 0x57, 0xCB, 0xC4,
    0xBE, 0xFC, 0x1F, 0x52, 0x49, 0x02, 0x81, 0x80,
    0x10, 0x8E, 0x25, 0xD8, 0x51, 0x52, 0xC4, 0xB4,
    0x19, 0xD5, 0xB9, 0xEE, 0x1A, 0xB2, 0xB3, 0x98,
    0x6E, 0x90, 0x42, 0xC1, 0x43, 0x3D, 0x00, 0x97,
    0x7F, 0x77, 0xFC, 0x5D, 0x3C, 0xA6, 0x00, 0x97,
    0x66, 0x76, 0xC3, 0xE1, 0x15, 0xFA, 0x4D, 0x9E,
    0x33, 0x56, 0x5E, 0x0D, 0xCB, 0x18, 0x73, 0xCC,
    0xAE, 0x65, 0x50, 0x13, 0x1C, 0x66, 0x6D, 0x4A,
    0x4B, 0x4F, 0x5D, 0x8B, 0x95, 0x59, 0x61, 0x3A,
    0xD8, 0x80, 0x60, 0xE7, 0xA9, 0x67, 0xA7, 0xD8,
    0x11, 0x96, 0x59, 0x01, 0x8C, 0xDF, 0x31, 0x2C,
    0x79, 0x79, 0x1C, 0x8F, 0xEC, 0x5E, 0x87, 0x91,
    0x08, 0x27, 0x2B, 0x40, 0xE6, 0xAE, 0xF1, 0x8F,
    0x8F, 0x01, 0x1A, 0x1D, 0xF8, 0x97, 0xF0, 0xC8,
    0xE1, 0xB0, 0x22, 0x44, 0x21, 0xEF, 0xC7, 0x9F,
    0xE6, 0x2A, 0x59, 0xEC, 0xE4, 0xD3, 0xF5, 0x91,
    0x33, 0xCB, 0xC2, 0x4E, 0x9D, 0x44, 0xCB, 0xD4,
};

const vsc_data_t test_rsa_2048_GENERATED_PRIVATE_KEY_PKCS1 = {
    test_rsa_2048_GENERATED_PRIVATE_KEY_PKCS1_BYTES, sizeof(test_rsa_2048_GENERATED_PRIVATE_KEY_PKCS1_BYTES)
};


//
//  Test data
//
const byte test_rsa_DATA_1_BYTES[] = {
    0x45, 0x6E, 0x63, 0x72, 0x79, 0x70, 0x74, 0x20,
    0x6D, 0x65, 0x21
};

const vsc_data_t test_rsa_DATA_1 = {
    test_rsa_DATA_1_BYTES, sizeof(test_rsa_DATA_1_BYTES)
};

const byte test_rsa_DATA_1_SHA512_DIGEST_BYTES[] = {
    0x6d, 0x49, 0xd5, 0xe3, 0x4a, 0xd7, 0xa0, 0x35,
    0x9f, 0xb0, 0x06, 0x28, 0xaa, 0xcd, 0x41, 0xda,
    0x3c, 0x62, 0x34, 0x1e, 0xf2, 0x04, 0x00, 0x8e,
    0xa8, 0x7d, 0x40, 0x72, 0x9a, 0xa5, 0xfb, 0xd8,
    0x1c, 0xc1, 0x80, 0x97, 0x62, 0xa8, 0x05, 0x11,
    0x85, 0x26, 0x4d, 0xb0, 0x94, 0x04, 0x4e, 0xf8,
    0xe1, 0x2c, 0x4b, 0x27, 0x78, 0x1d, 0xe5, 0x58,
    0xf3, 0x97, 0xda, 0xa2, 0x07, 0x8c, 0x56, 0x8d,
};

const vsc_data_t test_rsa_DATA_1_SHA512_DIGEST = {
    test_rsa_DATA_1_SHA512_DIGEST_BYTES, sizeof(test_rsa_DATA_1_SHA512_DIGEST_BYTES)
};

const byte test_rsa_2048_ENCRYPTED_DATA_1_BYTES[] = {
    0x39, 0xcf, 0xfa, 0x1d, 0xca, 0xe1, 0xf3, 0x14,
    0x50, 0x00, 0xd9, 0xa7, 0x3e, 0x14, 0xac, 0x5e,
    0x8e, 0x80, 0xe6, 0xc3, 0x7e, 0x64, 0x91, 0x0f,
    0xea, 0x4f, 0x85, 0x8e, 0x2d, 0x3a, 0x1d, 0x5c,
    0x1f, 0x32, 0x4e, 0xbe, 0xe7, 0x7b, 0xa8, 0xf6,
    0x7f, 0x84, 0x3d, 0x46, 0x6c, 0x89, 0x0e, 0x2d,
    0x57, 0xe0, 0x8d, 0xc9, 0x0e, 0xfe, 0x27, 0x97,
    0x88, 0xb9, 0x57, 0xb3, 0x9d, 0x35, 0x20, 0xf0,
    0x95, 0x3d, 0x08, 0x10, 0xd9, 0x8b, 0x23, 0xd3,
    0xe4, 0xa9, 0x1a, 0x0f, 0x01, 0x1c, 0xb1, 0x42,
    0x2b, 0xcf, 0x09, 0x0a, 0xe9, 0x87, 0xfe, 0x6f,
    0xe7, 0x7f, 0x68, 0xdb, 0x46, 0xdf, 0xca, 0x83,
    0x8b, 0xe3, 0x78, 0x43, 0x39, 0x37, 0x2b, 0xd4,
    0xd7, 0x03, 0x19, 0x64, 0x08, 0xd5, 0x69, 0x80,
    0x57, 0x0b, 0x40, 0x1c, 0x37, 0xe2, 0x9d, 0x01,
    0xb4, 0xf9, 0x39, 0x24, 0xee, 0x2e, 0xad, 0x07,
    0x92, 0x34, 0x50, 0x7c, 0xd3, 0xc4, 0x70, 0x62,
    0x9d, 0x2b, 0x04, 0x42, 0xd6, 0x28, 0x77, 0xea,
    0x3a, 0xb9, 0xe3, 0x1e, 0x15, 0x45, 0x9c, 0xc2,
    0x2b, 0x8c, 0x21, 0x24, 0x37, 0xa5, 0x20, 0x36,
    0xd5, 0xd6, 0x3f, 0x6a, 0x01, 0x1c, 0x7f, 0xde,
    0x16, 0x75, 0x3d, 0x93, 0x93, 0xa2, 0x08, 0xf6,
    0xc3, 0x02, 0x32, 0x3c, 0x4e, 0x63, 0x6a, 0x92,
    0xc8, 0x30, 0xc7, 0xe4, 0x3f, 0xc8, 0x08, 0x48,
    0xb9, 0xb1, 0xb7, 0x0b, 0x7b, 0x6b, 0xe4, 0xdf,
    0x7e, 0xa1, 0xf1, 0x76, 0xc5, 0x0c, 0x8e, 0x19,
    0xc7, 0xc6, 0xd1, 0x02, 0xff, 0x8b, 0xd8, 0xa0,
    0xba, 0xa3, 0x56, 0xdf, 0x8e, 0xc8, 0xc0, 0x0d,
    0x2f, 0x47, 0x99, 0x22, 0x08, 0x8d, 0x73, 0x5d,
    0xbc, 0x17, 0x5b, 0xee, 0x38, 0x74, 0x8f, 0x86,
    0xad, 0xff, 0x51, 0x40, 0x66, 0x49, 0x2c, 0xca,
    0xc2, 0x41, 0xbf, 0xaf, 0x3f, 0xf1, 0x89, 0xe6
};

const vsc_data_t test_rsa_2048_ENCRYPTED_DATA_1 = {
    test_rsa_2048_ENCRYPTED_DATA_1_BYTES, sizeof(test_rsa_2048_ENCRYPTED_DATA_1_BYTES)
};

const byte test_rsa_2048_DATA_1_SHA512_SIGNATURE_BYTES[] = {
    0x0a, 0x14, 0xd1, 0x69, 0x39, 0x61, 0x62, 0xc9,
    0x06, 0xe5, 0xd8, 0x15, 0xa4, 0x22, 0x38, 0xa6,
    0x86, 0x14, 0x21, 0x8d, 0x20, 0x4f, 0x58, 0x43,
    0x17, 0x71, 0x43, 0xe6, 0x47, 0x94, 0xe6, 0x79,
    0xed, 0x90, 0xdf, 0xfc, 0xa3, 0xfc, 0x6f, 0xc6,
    0x2d, 0x44, 0x31, 0x5c, 0x14, 0x83, 0x00, 0x55,
    0x01, 0xe4, 0x8e, 0x8e, 0x85, 0x8e, 0x39, 0x7f,
    0xcb, 0x53, 0x99, 0x08, 0x7e, 0x1b, 0xd4, 0x9e,
    0xae, 0xd9, 0x4d, 0x4f, 0x2c, 0x1c, 0x83, 0xc8,
    0xb7, 0xd4, 0xe1, 0xd3, 0xcf, 0x84, 0x7f, 0x2f,
    0x74, 0xdd, 0x66, 0x22, 0x25, 0x57, 0x2e, 0x74,
    0x2d, 0x17, 0xbf, 0x46, 0x37, 0xa0, 0x94, 0x7b,
    0xa4, 0xb6, 0x72, 0xb1, 0x73, 0xb7, 0xd0, 0x58,
    0x26, 0xda, 0xf1, 0xdd, 0x9a, 0xe9, 0x73, 0x6f,
    0xf6, 0x5c, 0x2f, 0x4a, 0x8e, 0x67, 0xcf, 0xf9,
    0x1f, 0x5b, 0x14, 0x13, 0xa6, 0xe3, 0xd9, 0xc8,
    0x29, 0x0f, 0x80, 0xb2, 0x37, 0x9d, 0x21, 0x14,
    0xe7, 0x51, 0xfa, 0x1d, 0xcb, 0x0f, 0x8f, 0xb8,
    0xa6, 0x88, 0xdb, 0x61, 0x30, 0xcd, 0x04, 0xea,
    0x30, 0x69, 0xca, 0xc6, 0xe5, 0x74, 0x7c, 0xc2,
    0x96, 0x5e, 0x61, 0x07, 0xe8, 0x2a, 0xf0, 0xca,
    0x19, 0x9d, 0xb7, 0x52, 0xcc, 0xd6, 0xd2, 0x08,
    0x9c, 0x78, 0x3a, 0x4a, 0xad, 0xdb, 0xee, 0xf3,
    0xc5, 0x6c, 0x44, 0x06, 0xc8, 0x5b, 0xe3, 0xa5,
    0xb2, 0x74, 0x1c, 0x9a, 0x28, 0x7b, 0x07, 0x5a,
    0xbd, 0x52, 0x93, 0x37, 0xe1, 0x8b, 0x4b, 0x95,
    0xe7, 0x2d, 0x3f, 0xc4, 0xce, 0x26, 0x23, 0x4b,
    0x77, 0xef, 0x9e, 0xf3, 0xa6, 0x35, 0xba, 0x08,
    0xff, 0xaa, 0x4c, 0xc0, 0x52, 0xff, 0x67, 0x6d,
    0x46, 0xa9, 0x97, 0x6d, 0x97, 0x51, 0xc0, 0x1e,
    0x27, 0xdc, 0xfb, 0x23, 0xbe, 0x29, 0xaa, 0x8c,
    0x9c, 0xc2, 0xcb, 0x47, 0xda, 0x8b, 0x54, 0x18,
};

const vsc_data_t test_rsa_2048_DATA_1_SHA512_SIGNATURE = {
    test_rsa_2048_DATA_1_SHA512_SIGNATURE_BYTES, sizeof(test_rsa_2048_DATA_1_SHA512_SIGNATURE_BYTES)
};


// --------------------------------------------------------------------------
//  PKCS#8
// --------------------------------------------------------------------------

const byte test_rsa_2048_PUBLIC_KEY_PKCS8_DER_BYTES[] = {
    0x30, 0x82, 0x01, 0x21, 0x30, 0x0d, 0x06, 0x09,
    0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01,
    0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0e, 0x00,
    0x30, 0x82, 0x01, 0x09, 0x02, 0x82, 0x01, 0x00,
    0x53, 0x7c, 0xc7, 0xe8, 0xfb, 0x4b, 0x09, 0x75,
    0x73, 0x9f, 0x3f, 0xf6, 0x13, 0xd0, 0x1a, 0x98,
    0xd5, 0x03, 0x9e, 0xb8, 0x59, 0xc0, 0xfd, 0x8b,
    0x01, 0xdf, 0x72, 0xa6, 0x36, 0x73, 0xef, 0xad,
    0x12, 0x1c, 0x33, 0x74, 0x6f, 0x2a, 0x1c, 0x1b,
    0xe4, 0x39, 0x99, 0xcf, 0xc5, 0x45, 0xfa, 0xb8,
    0x97, 0x56, 0x91, 0x31, 0xae, 0x7e, 0xb7, 0x60,
    0x13, 0xe8, 0x7a, 0xc3, 0x27, 0x07, 0xa9, 0xc9,
    0x10, 0xf1, 0x3a, 0xa7, 0x98, 0xcf, 0xa0, 0x5e,
    0x78, 0x71, 0x1b, 0x71, 0x6b, 0xb5, 0xc8, 0xf3,
    0xa7, 0x0b, 0xad, 0xd3, 0x7e, 0x93, 0x75, 0xac,
    0xf7, 0x52, 0xc1, 0xd0, 0x96, 0xa9, 0xef, 0xba,
    0xed, 0x84, 0x84, 0x72, 0x1e, 0x9e, 0xbb, 0x08,
    0x65, 0xfd, 0x0c, 0x55, 0x47, 0x09, 0x46, 0x17,
    0xd7, 0x13, 0xf8, 0x6f, 0x92, 0xa3, 0x2f, 0x43,
    0xd6, 0xfd, 0x3b, 0x52, 0xd5, 0x85, 0x5c, 0x73,
    0x84, 0x50, 0x4a, 0xad, 0x7f, 0xdf, 0x95, 0xce,
    0xff, 0xef, 0x80, 0x6a, 0xed, 0x6b, 0x75, 0xeb,
    0xd6, 0x50, 0xb7, 0x33, 0xee, 0xee, 0xea, 0x53,
    0x47, 0x9e, 0xf3, 0x8f, 0x59, 0xc5, 0xf6, 0x82,
    0x90, 0x72, 0x4a, 0x62, 0xed, 0xd0, 0x13, 0xdb,
    0xb6, 0xee, 0xa5, 0x66, 0xfd, 0x5c, 0xb4, 0x4e,
    0x7a, 0xcd, 0xc0, 0x27, 0xe4, 0x8f, 0x7d, 0xb6,
    0x20, 0xde, 0x7e, 0xca, 0xb1, 0x87, 0xc3, 0x14,
    0x98, 0x7b, 0xad, 0xe4, 0xcb, 0xe1, 0xd1, 0x9d,
    0xd4, 0x3b, 0x0c, 0x86, 0xef, 0xf9, 0x00, 0xeb,
    0x4e, 0xe1, 0xf7, 0x93, 0xe8, 0xd0, 0x33, 0xd9,
    0x45, 0x9b, 0x14, 0x6a, 0xaf, 0xf9, 0x97, 0x1d,
    0xc1, 0xc7, 0x27, 0x40, 0x8e, 0x97, 0x22, 0xa9,
    0x1d, 0x27, 0xae, 0x3b, 0xb3, 0x15, 0x1e, 0x97,
    0xae, 0xc7, 0xf3, 0x60, 0x56, 0x22, 0xa0, 0xe3,
    0x8b, 0x8b, 0xb4, 0xea, 0x46, 0xe6, 0x10, 0xeb,
    0x02, 0x03, 0x01, 0x00, 0x01
};

const byte test_rsa_2048_PRIVATE_KEY_PKCS8_DER_BYTES[] = {
    0x30, 0x82, 0x04, 0xbc, 0x02, 0x01, 0x00, 0x30,
    0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
    0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x04, 0x82,
    0x04, 0xa6, 0x30, 0x82, 0x04, 0xa2, 0x02, 0x01,
    0x00, 0x02, 0x82, 0x01, 0x00, 0x53, 0x7c, 0xc7,
    0xe8, 0xfb, 0x4b, 0x09, 0x75, 0x73, 0x9f, 0x3f,
    0xf6, 0x13, 0xd0, 0x1a, 0x98, 0xd5, 0x03, 0x9e,
    0xb8, 0x59, 0xc0, 0xfd, 0x8b, 0x01, 0xdf, 0x72,
    0xa6, 0x36, 0x73, 0xef, 0xad, 0x12, 0x1c, 0x33,
    0x74, 0x6f, 0x2a, 0x1c, 0x1b, 0xe4, 0x39, 0x99,
    0xcf, 0xc5, 0x45, 0xfa, 0xb8, 0x97, 0x56, 0x91,
    0x31, 0xae, 0x7e, 0xb7, 0x60, 0x13, 0xe8, 0x7a,
    0xc3, 0x27, 0x07, 0xa9, 0xc9, 0x10, 0xf1, 0x3a,
    0xa7, 0x98, 0xcf, 0xa0, 0x5e, 0x78, 0x71, 0x1b,
    0x71, 0x6b, 0xb5, 0xc8, 0xf3, 0xa7, 0x0b, 0xad,
    0xd3, 0x7e, 0x93, 0x75, 0xac, 0xf7, 0x52, 0xc1,
    0xd0, 0x96, 0xa9, 0xef, 0xba, 0xed, 0x84, 0x84,
    0x72, 0x1e, 0x9e, 0xbb, 0x08, 0x65, 0xfd, 0x0c,
    0x55, 0x47, 0x09, 0x46, 0x17, 0xd7, 0x13, 0xf8,
    0x6f, 0x92, 0xa3, 0x2f, 0x43, 0xd6, 0xfd, 0x3b,
    0x52, 0xd5, 0x85, 0x5c, 0x73, 0x84, 0x50, 0x4a,
    0xad, 0x7f, 0xdf, 0x95, 0xce, 0xff, 0xef, 0x80,
    0x6a, 0xed, 0x6b, 0x75, 0xeb, 0xd6, 0x50, 0xb7,
    0x33, 0xee, 0xee, 0xea, 0x53, 0x47, 0x9e, 0xf3,
    0x8f, 0x59, 0xc5, 0xf6, 0x82, 0x90, 0x72, 0x4a,
    0x62, 0xed, 0xd0, 0x13, 0xdb, 0xb6, 0xee, 0xa5,
    0x66, 0xfd, 0x5c, 0xb4, 0x4e, 0x7a, 0xcd, 0xc0,
    0x27, 0xe4, 0x8f, 0x7d, 0xb6, 0x20, 0xde, 0x7e,
    0xca, 0xb1, 0x87, 0xc3, 0x14, 0x98, 0x7b, 0xad,
    0xe4, 0xcb, 0xe1, 0xd1, 0x9d, 0xd4, 0x3b, 0x0c,
    0x86, 0xef, 0xf9, 0x00, 0xeb, 0x4e, 0xe1, 0xf7,
    0x93, 0xe8, 0xd0, 0x33, 0xd9, 0x45, 0x9b, 0x14,
    0x6a, 0xaf, 0xf9, 0x97, 0x1d, 0xc1, 0xc7, 0x27,
    0x40, 0x8e, 0x97, 0x22, 0xa9, 0x1d, 0x27, 0xae,
    0x3b, 0xb3, 0x15, 0x1e, 0x97, 0xae, 0xc7, 0xf3,
    0x60, 0x56, 0x22, 0xa0, 0xe3, 0x8b, 0x8b, 0xb4,
    0xea, 0x46, 0xe6, 0x10, 0xeb, 0x02, 0x03, 0x01,
    0x00, 0x01, 0x02, 0x82, 0x01, 0x00, 0x48, 0xa0,
    0xa0, 0x77, 0xf9, 0x43, 0xc9, 0xb2, 0xb7, 0x26,
    0xae, 0x49, 0xaf, 0xea, 0xb5, 0x78, 0x86, 0xb6,
    0x63, 0x79, 0x13, 0xfb, 0x63, 0x95, 0x6d, 0xc7,
    0xa8, 0xc1, 0x17, 0x55, 0xbc, 0x06, 0xdf, 0x5e,
    0x51, 0x14, 0xd5, 0x2f, 0xd8, 0xcc, 0x1a, 0xba,
    0x51, 0x28, 0x02, 0x01, 0x62, 0x9e, 0xfa, 0x68,
    0x80, 0x5e, 0xab, 0xe1, 0xe8, 0x3c, 0x58, 0x95,
    0x41, 0x56, 0x4b, 0xb9, 0xca, 0xe5, 0xf3, 0x2b,
    0x27, 0x4f, 0x6d, 0x0c, 0x12, 0x02, 0x9c, 0xdc,
    0x28, 0x77, 0x7e, 0xaf, 0xe1, 0x64, 0xb4, 0xc8,
    0xe0, 0x2a, 0xc0, 0x4e, 0x1f, 0x6c, 0x9c, 0xab,
    0x0d, 0x98, 0x1b, 0xb9, 0x31, 0xa7, 0x77, 0xc0,
    0x74, 0x47, 0xa2, 0x83, 0x8b, 0x49, 0x3f, 0x0f,
    0xe7, 0x8e, 0xb8, 0x01, 0x45, 0x4c, 0xaf, 0xf9,
    0xdb, 0x81, 0x94, 0x1b, 0x09, 0x9f, 0x06, 0x83,
    0xbc, 0xfb, 0xce, 0x6b, 0xf9, 0x84, 0x34, 0x7f,
    0xc0, 0xf3, 0xb6, 0x93, 0xa4, 0xa3, 0x55, 0x68,
    0x7f, 0xd4, 0x64, 0xaa, 0x72, 0x89, 0xd3, 0x4c,
    0x5b, 0x86, 0x68, 0x95, 0xdd, 0x41, 0xaa, 0xbb,
    0x54, 0xd0, 0xb3, 0x40, 0x74, 0x75, 0x67, 0x46,
    0x9c, 0xea, 0xa3, 0x6f, 0x39, 0x20, 0xdf, 0x1c,
    0x39, 0x3c, 0x9b, 0x8f, 0xca, 0x82, 0x4e, 0x2b,
    0xe7, 0x41, 0xa0, 0x94, 0xd7, 0x92, 0x25, 0x9d,
    0x5c, 0xb7, 0x1a, 0x98, 0x1e, 0xed, 0x71, 0x27,
    0x18, 0x1e, 0x61, 0xb9, 0x14, 0x7f, 0x25, 0x73,
    0x98, 0x2d, 0x7a, 0x31, 0xc7, 0x05, 0xb0, 0x89,
    0xc3, 0x88, 0x1d, 0xd2, 0x85, 0xab, 0x0e, 0x8d,
    0xc7, 0x75, 0x24, 0x9c, 0xe3, 0xaf, 0xcc, 0xc1,
    0x9c, 0xe1, 0xfb, 0xa4, 0x67, 0x6b, 0x84, 0xdd,
    0x79, 0x05, 0x7a, 0xa2, 0xb0, 0xe8, 0x72, 0xa5,
    0xee, 0xc9, 0x83, 0x57, 0xe3, 0x1b, 0x0b, 0x58,
    0xdc, 0xcb, 0xf6, 0x01, 0xd2, 0x21, 0x02, 0x81,
    0x81, 0x00, 0xa3, 0x79, 0xb8, 0xfd, 0xb3, 0x1d,
    0x79, 0x53, 0x25, 0x61, 0x3b, 0x14, 0x72, 0x2c,
    0x91, 0xc2, 0xdf, 0x5b, 0x4b, 0x1d, 0x79, 0x68,
    0xfa, 0x18, 0x03, 0xdc, 0x57, 0x44, 0x93, 0xf0,
    0x72, 0x7a, 0xfe, 0xa8, 0x2a, 0x1a, 0x83, 0x76,
    0x35, 0x32, 0xb4, 0xa4, 0x48, 0x49, 0x71, 0xd7,
    0x89, 0x8a, 0x17, 0x9b, 0xaf, 0xf9, 0x21, 0x99,
    0x6c, 0x74, 0xdd, 0x92, 0x0b, 0x5a, 0x01, 0x19,
    0x57, 0x45, 0x1c, 0x3c, 0x5e, 0xe0, 0x17, 0x8a,
    0x0e, 0x5b, 0x56, 0x73, 0xc5, 0x6d, 0x56, 0x0e,
    0xc5, 0x4f, 0xcb, 0x1e, 0x18, 0xd6, 0xa8, 0xbd,
    0x0b, 0x12, 0x15, 0xf0, 0x20, 0xcb, 0x1d, 0xef,
    0x12, 0xdb, 0x03, 0x25, 0xf9, 0x33, 0x7f, 0x40,
    0x39, 0xa7, 0x9f, 0xca, 0xae, 0x33, 0x5e, 0x06,
    0x94, 0x23, 0x67, 0x5a, 0x00, 0x0f, 0x1f, 0x73,
    0x37, 0xfc, 0x86, 0x1f, 0x0a, 0x24, 0x63, 0x55,
    0xa0, 0xdd, 0x02, 0x81, 0x81, 0x00, 0x82, 0xbd,
    0x6f, 0x58, 0xf1, 0x21, 0xe6, 0xc8, 0xdc, 0xa3,
    0xd6, 0x2c, 0x20, 0x79, 0xae, 0x7d, 0xad, 0xd8,
    0xd9, 0xf1, 0x8c, 0x67, 0x8a, 0x36, 0xe1, 0xd9,
    0x7e, 0xba, 0x58, 0xd7, 0x39, 0x2d, 0x5c, 0x64,
    0x1b, 0x23, 0xef, 0x4f, 0x17, 0x2e, 0xf6, 0x45,
    0x02, 0x7f, 0x6d, 0xf8, 0xea, 0xd0, 0xeb, 0xda,
    0x15, 0x4b, 0x72, 0x3b, 0x98, 0x21, 0x2d, 0xd1,
    0xbf, 0x7c, 0x4b, 0x90, 0xaa, 0x8a, 0xad, 0x06,
    0xfe, 0xab, 0xee, 0xaa, 0x3f, 0x8c, 0xbb, 0xe0,
    0x2e, 0xb8, 0xd0, 0xe5, 0xb8, 0x19, 0x35, 0x6b,
    0xce, 0x6c, 0x0f, 0x55, 0x9e, 0x25, 0x9f, 0xf4,
    0xff, 0x11, 0xc4, 0x5b, 0xea, 0x46, 0xdf, 0xab,
    0xf7, 0x98, 0x3d, 0x05, 0x9a, 0xb6, 0xae, 0x28,
    0xc2, 0xbc, 0x64, 0xe5, 0xd3, 0x33, 0x5e, 0x96,
    0xb2, 0xa4, 0x46, 0x37, 0x1c, 0xf3, 0x19, 0x17,
    0xa3, 0x70, 0xf0, 0x2a, 0x38, 0x67, 0x02, 0x81,
    0x80, 0x70, 0x21, 0x79, 0x13, 0x83, 0xfd, 0xae,
    0x8f, 0xaa, 0xaf, 0x23, 0xd0, 0x25, 0x74, 0x8e,
    0xd2, 0xc5, 0x54, 0x20, 0x94, 0xea, 0x07, 0x68,
    0xac, 0x7a, 0x51, 0x74, 0x06, 0x95, 0x17, 0x33,
    0xdf, 0x4b, 0xb7, 0xdb, 0x91, 0x6e, 0x24, 0xf1,
    0xde, 0x82, 0xeb, 0xc0, 0xad, 0xa8, 0x09, 0xb8,
    0xcc, 0xe0, 0xde, 0xa8, 0x78, 0xd1, 0x64, 0x24,
    0x71, 0x90, 0xdd, 0xb1, 0x2d, 0x9e, 0x5d, 0x5c,
    0x70, 0x0a, 0x2b, 0x1a, 0xc4, 0xc9, 0x40, 0xa8,
    0x12, 0x5c, 0x9d, 0x72, 0x89, 0x49, 0xa3, 0x3e,
    0x12, 0x3a, 0x77, 0xbd, 0x7f, 0xd8, 0x24, 0x3b,
    0x68, 0xbf, 0x65, 0x83, 0x88, 0xef, 0x52, 0x62,
    0x73, 0x99, 0x98, 0x3d, 0x73, 0xe6, 0x50, 0x0e,
    0x7b, 0xfc, 0xee, 0x10, 0x49, 0x29, 0xb0, 0x87,
    0x82, 0x35, 0x4d, 0x15, 0x87, 0x4a, 0x02, 0x45,
    0x1f, 0xd0, 0x7b, 0x90, 0x00, 0x5f, 0xa6, 0x87,
    0x7d, 0x02, 0x81, 0x80, 0x4a, 0x9f, 0x93, 0xd1,
    0xa1, 0x78, 0xe7, 0x40, 0x98, 0xe7, 0x8f, 0x14,
    0x8a, 0xc8, 0xc9, 0x77, 0x04, 0xe6, 0xb4, 0xa7,
    0x71, 0xab, 0x9b, 0xb1, 0x6d, 0xc1, 0xf5, 0xda,
    0xa9, 0x60, 0xd7, 0x4a, 0xf3, 0xe4, 0x53, 0xb5,
    0x74, 0x1f, 0xa1, 0xac, 0xf5, 0x76, 0x38, 0x51,
    0xc1, 0xd4, 0x85, 0x3b, 0x10, 0x93, 0xde, 0xf9,
    0xbc, 0x4f, 0x15, 0xab, 0x42, 0x7a, 0xe9, 0x20,
    0x2a, 0x05, 0x7d, 0xc2, 0x3f, 0xb6, 0xb1, 0x60,
    0x33, 0x8e, 0xcb, 0x4d, 0x29, 0xe3, 0x70, 0xe7,
    0x9e, 0x9c, 0xb0, 0x32, 0xfb, 0x51, 0xf8, 0x75,
    0xa7, 0x5f, 0x08, 0x30, 0x93, 0x97, 0x84, 0x8b,
    0x80, 0x97, 0xb2, 0x26, 0x17, 0xff, 0x11, 0x08,
    0xbd, 0x33, 0xd8, 0xb6, 0x12, 0xbc, 0x43, 0x42,
    0xc3, 0x18, 0x87, 0x2f, 0x57, 0xfb, 0x0e, 0x26,
    0x43, 0xc9, 0xab, 0x65, 0x7a, 0x5a, 0x0a, 0xb9,
    0x28, 0xec, 0x00, 0x5b, 0x02, 0x81, 0x81, 0x00,
    0x94, 0x69, 0x45, 0xf8, 0x1b, 0xd8, 0x13, 0xfd,
    0x29, 0xf9, 0x9d, 0xa0, 0xee, 0x71, 0xd9, 0x94,
    0xcc, 0x30, 0x25, 0xfc, 0x78, 0x1a, 0xc9, 0xa3,
    0x1d, 0x73, 0x49, 0x51, 0xa5, 0xd7, 0x65, 0xc9,
    0xa3, 0xf7, 0x6d, 0x35, 0xa5, 0x18, 0xb6, 0x80,
    0x4e, 0x5c, 0x7a, 0x1c, 0xc9, 0x5c, 0x2d, 0xf4,
    0xde, 0xfc, 0x69, 0x00, 0x85, 0x0a, 0x2c, 0x8b,
    0xad, 0xec, 0x1c, 0x1a, 0xa4, 0x51, 0x6a, 0x8a,
    0x47, 0xbb, 0xbe, 0x73, 0x9b, 0xe7, 0x93, 0xfb,
    0x63, 0x5e, 0xcd, 0xe6, 0x92, 0x8a, 0xef, 0x68,
    0x84, 0x20, 0xa8, 0x33, 0xb5, 0x4f, 0xca, 0x49,
    0x26, 0x54, 0x73, 0xae, 0xca, 0x51, 0x8b, 0x64,
    0xa7, 0x7a, 0x3c, 0x02, 0x0a, 0x76, 0x67, 0xea,
    0x76, 0xdc, 0xcf, 0x1f, 0x85, 0xc5, 0x67, 0xeb,
    0xbd, 0x94, 0x48, 0x08, 0xbb, 0x17, 0x52, 0x27,
    0xd8, 0x28, 0x21, 0x39, 0x93, 0xe8, 0x03, 0x01,
};



const vsc_data_t test_rsa_2048_PUBLIC_KEY_PKCS8_DER = {
    test_rsa_2048_PUBLIC_KEY_PKCS8_DER_BYTES, sizeof(test_rsa_2048_PUBLIC_KEY_PKCS8_DER_BYTES)
};

const vsc_data_t test_rsa_2048_PRIVATE_KEY_PKCS8_DER = {
    test_rsa_2048_PRIVATE_KEY_PKCS8_DER_BYTES, sizeof(test_rsa_2048_PRIVATE_KEY_PKCS8_DER_BYTES)
};

const char test_rsa_2048_PUBLIC_KEY_PKCS8_PEM_STR[] =
        "-----BEGIN PUBLIC KEY-----\n"
        "MIIBITANBgkqhkiG9w0BAQEFAAOCAQ4AMIIBCQKCAQBTfMfo+0sJdXOfP/YT0BqY\n"
        "1QOeuFnA/YsB33KmNnPvrRIcM3RvKhwb5DmZz8VF+riXVpExrn63YBPoesMnB6nJ\n"
        "EPE6p5jPoF54cRtxa7XI86cLrdN+k3Ws91LB0Jap77rthIRyHp67CGX9DFVHCUYX\n"
        "1xP4b5KjL0PW/TtS1YVcc4RQSq1/35XO/++Aau1rdevWULcz7u7qU0ee849ZxfaC\n"
        "kHJKYu3QE9u27qVm/Vy0TnrNwCfkj322IN5+yrGHwxSYe63ky+HRndQ7DIbv+QDr\n"
        "TuH3k+jQM9lFmxRqr/mXHcHHJ0COlyKpHSeuO7MVHpeux/NgViKg44uLtOpG5hDr\n"
        "AgMBAAE=\n"
        "-----END PUBLIC KEY-----";

const vsc_data_t test_rsa_2048_PUBLIC_KEY_PKCS8_PEM = {
    (const byte*)test_rsa_2048_PUBLIC_KEY_PKCS8_PEM_STR, sizeof(test_rsa_2048_PUBLIC_KEY_PKCS8_PEM_STR) - 1
};

const char test_rsa_2048_PRIVATE_KEY_PKCS8_PEM_STR[] =
        "-----BEGIN PRIVATE KEY-----\n"
        "MIIEvAIBADANBgkqhkiG9w0BAQEFAASCBKYwggSiAgEAAoIBAFN8x+j7Swl1c58/\n"
        "9hPQGpjVA564WcD9iwHfcqY2c++tEhwzdG8qHBvkOZnPxUX6uJdWkTGufrdgE+h6\n"
        "wycHqckQ8TqnmM+gXnhxG3Frtcjzpwut036Tdaz3UsHQlqnvuu2EhHIenrsIZf0M\n"
        "VUcJRhfXE/hvkqMvQ9b9O1LVhVxzhFBKrX/flc7/74Bq7Wt169ZQtzPu7upTR57z\n"
        "j1nF9oKQckpi7dAT27bupWb9XLROes3AJ+SPfbYg3n7KsYfDFJh7reTL4dGd1DsM\n"
        "hu/5AOtO4feT6NAz2UWbFGqv+ZcdwccnQI6XIqkdJ647sxUel67H82BWIqDji4u0\n"
        "6kbmEOsCAwEAAQKCAQBIoKB3+UPJsrcmrkmv6rV4hrZjeRP7Y5Vtx6jBF1W8Bt9e\n"
        "URTVL9jMGrpRKAIBYp76aIBeq+HoPFiVQVZLucrl8ysnT20MEgKc3Ch3fq/hZLTI\n"
        "4CrATh9snKsNmBu5Mad3wHRHooOLST8P5464AUVMr/nbgZQbCZ8Gg7z7zmv5hDR/\n"
        "wPO2k6SjVWh/1GSqconTTFuGaJXdQaq7VNCzQHR1Z0ac6qNvOSDfHDk8m4/Kgk4r\n"
        "50GglNeSJZ1ctxqYHu1xJxgeYbkUfyVzmC16MccFsInDiB3ShasOjcd1JJzjr8zB\n"
        "nOH7pGdrhN15BXqisOhype7Jg1fjGwtY3Mv2AdIhAoGBAKN5uP2zHXlTJWE7FHIs\n"
        "kcLfW0sdeWj6GAPcV0ST8HJ6/qgqGoN2NTK0pEhJcdeJihebr/khmWx03ZILWgEZ\n"
        "V0UcPF7gF4oOW1ZzxW1WDsVPyx4Y1qi9CxIV8CDLHe8S2wMl+TN/QDmnn8quM14G\n"
        "lCNnWgAPH3M3/IYfCiRjVaDdAoGBAIK9b1jxIebI3KPWLCB5rn2t2NnxjGeKNuHZ\n"
        "frpY1zktXGQbI+9PFy72RQJ/bfjq0OvaFUtyO5ghLdG/fEuQqoqtBv6r7qo/jLvg\n"
        "LrjQ5bgZNWvObA9VniWf9P8RxFvqRt+r95g9BZq2rijCvGTl0zNelrKkRjcc8xkX\n"
        "o3DwKjhnAoGAcCF5E4P9ro+qryPQJXSO0sVUIJTqB2iselF0BpUXM99Lt9uRbiTx\n"
        "3oLrwK2oCbjM4N6oeNFkJHGQ3bEtnl1ccAorGsTJQKgSXJ1yiUmjPhI6d71/2CQ7\n"
        "aL9lg4jvUmJzmZg9c+ZQDnv87hBJKbCHgjVNFYdKAkUf0HuQAF+mh30CgYBKn5PR\n"
        "oXjnQJjnjxSKyMl3BOa0p3Grm7FtwfXaqWDXSvPkU7V0H6Gs9XY4UcHUhTsQk975\n"
        "vE8Vq0J66SAqBX3CP7axYDOOy00p43DnnpywMvtR+HWnXwgwk5eEi4CXsiYX/xEI\n"
        "vTPYthK8Q0LDGIcvV/sOJkPJq2V6Wgq5KOwAWwKBgQCUaUX4G9gT/Sn5naDucdmU\n"
        "zDAl/HgayaMdc0lRpddlyaP3bTWlGLaATlx6HMlcLfTe/GkAhQosi63sHBqkUWqK\n"
        "R7u+c5vnk/tjXs3mkorvaIQgqDO1T8pJJlRzrspRi2SnejwCCnZn6nbczx+FxWfr\n"
        "vZRICLsXUifYKCE5k+gDAQ==\n"
        "-----END PRIVATE KEY-----";

const vsc_data_t test_rsa_2048_PRIVATE_KEY_PKCS8_PEM = {
    (const byte*)test_rsa_2048_PRIVATE_KEY_PKCS8_PEM_STR, sizeof(test_rsa_2048_PRIVATE_KEY_PKCS8_PEM_STR) - 1
};
