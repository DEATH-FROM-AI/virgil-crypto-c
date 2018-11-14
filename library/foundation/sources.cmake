#   @license
#   -------------------------------------------------------------------------
#   Copyright (C) 2015-2018 Virgil Security Inc.
#
#   All rights reserved.
#
#   Redistribution and use in source and binary forms, with or without
#   modification, are permitted provided that the following conditions are
#   met:
#
#       (1) Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#
#       (2) Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in
#       the documentation and/or other materials provided with the
#       distribution.
#
#       (3) Neither the name of the copyright holder nor the names of its
#       contributors may be used to endorse or promote products derived from
#       this software without specific prior written permission.
#
#   THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
#   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
#   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
#   DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
#   INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
#   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
#   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
#   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
#   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
#   IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
#   POSSIBILITY OF SUCH DAMAGE.
#
#   Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>
#   -------------------------------------------------------------------------

#   @warning
#   -------------------------------------------------------------------------
#   This file is fully generated by script 'cmake_files_codegen.gsl'.
#   It can be changed temporary for debug purposes only.
#   -------------------------------------------------------------------------
#   @end


include_guard()

if(NOT TARGET foundation)
    message(FATAL_ERROR "Expected target 'foundation' to be defined first.")
endif()

configure_file(
        "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_platform.h.in"
        "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/foundation/vscf_platform.h"
        )

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_assert.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_library.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_memory.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/foundation/vscf_platform.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_api.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_impl.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1_reader.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1_writer.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_auth_decrypt.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_auth_encrypt.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_cipher.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_cipher_auth.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_cipher_auth_info.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_cipher_info.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_compute_shared_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_decrypt.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_encrypt.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_entropy_source.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_ex_kdf.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_export_private_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_export_public_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_generate_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hash.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hash_info.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hash_stream.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_import_private_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_import_public_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_kdf.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_mac.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_mac_info.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_mac_stream.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_private_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_public_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_random.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sign.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_verify.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_aes256_gcm.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1rd.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1wr.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_ctr_drbg.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_entropy_accumulator.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_fake_random.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hkdf.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hmac.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_kdf1.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_kdf2.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_rsa_private_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_rsa_public_key.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sha224.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sha256.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sha384.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sha512.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_error_ctx.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_error.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1_tag.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

target_sources(foundation
    PRIVATE
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_assert.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_library.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_memory.h"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bridge_random.h"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bridge_entropy.h"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bridge_entropy_poll.h"
            "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/foundation/vscf_platform.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_api.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_api_private.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_impl.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_impl_private.h"
            "$<$<BOOL:${VSCF_ASN1_READER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1_reader.h>"
            "$<$<BOOL:${VSCF_ASN1_READER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_asn1_reader_api.h>"
            "$<$<BOOL:${VSCF_ASN1_WRITER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1_writer.h>"
            "$<$<BOOL:${VSCF_ASN1_WRITER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_asn1_writer_api.h>"
            "$<$<BOOL:${VSCF_AUTH_DECRYPT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_auth_decrypt.h>"
            "$<$<BOOL:${VSCF_AUTH_DECRYPT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_auth_decrypt_api.h>"
            "$<$<BOOL:${VSCF_AUTH_ENCRYPT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_auth_encrypt.h>"
            "$<$<BOOL:${VSCF_AUTH_ENCRYPT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_auth_encrypt_api.h>"
            "$<$<BOOL:${VSCF_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_cipher.h>"
            "$<$<BOOL:${VSCF_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_cipher_api.h>"
            "$<$<BOOL:${VSCF_CIPHER_AUTH}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_cipher_auth.h>"
            "$<$<BOOL:${VSCF_CIPHER_AUTH}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_cipher_auth_api.h>"
            "$<$<BOOL:${VSCF_CIPHER_AUTH_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_cipher_auth_info.h>"
            "$<$<BOOL:${VSCF_CIPHER_AUTH_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_cipher_auth_info_api.h>"
            "$<$<BOOL:${VSCF_CIPHER_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_cipher_info.h>"
            "$<$<BOOL:${VSCF_CIPHER_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_cipher_info_api.h>"
            "$<$<BOOL:${VSCF_COMPUTE_SHARED_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_compute_shared_key.h>"
            "$<$<BOOL:${VSCF_COMPUTE_SHARED_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_compute_shared_key_api.h>"
            "$<$<BOOL:${VSCF_DECRYPT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_decrypt.h>"
            "$<$<BOOL:${VSCF_DECRYPT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_decrypt_api.h>"
            "$<$<BOOL:${VSCF_ENCRYPT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_encrypt.h>"
            "$<$<BOOL:${VSCF_ENCRYPT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_encrypt_api.h>"
            "$<$<BOOL:${VSCF_ENTROPY_SOURCE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_entropy_source.h>"
            "$<$<BOOL:${VSCF_ENTROPY_SOURCE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_entropy_source_api.h>"
            "$<$<BOOL:${VSCF_EX_KDF}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_ex_kdf.h>"
            "$<$<BOOL:${VSCF_EX_KDF}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_ex_kdf_api.h>"
            "$<$<BOOL:${VSCF_EXPORT_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_export_private_key.h>"
            "$<$<BOOL:${VSCF_EXPORT_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_export_private_key_api.h>"
            "$<$<BOOL:${VSCF_EXPORT_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_export_public_key.h>"
            "$<$<BOOL:${VSCF_EXPORT_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_export_public_key_api.h>"
            "$<$<BOOL:${VSCF_GENERATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_generate_key.h>"
            "$<$<BOOL:${VSCF_GENERATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_generate_key_api.h>"
            "$<$<BOOL:${VSCF_HASH}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hash.h>"
            "$<$<BOOL:${VSCF_HASH}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_hash_api.h>"
            "$<$<BOOL:${VSCF_HASH_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hash_info.h>"
            "$<$<BOOL:${VSCF_HASH_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_hash_info_api.h>"
            "$<$<BOOL:${VSCF_HASH_STREAM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hash_stream.h>"
            "$<$<BOOL:${VSCF_HASH_STREAM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_hash_stream_api.h>"
            "$<$<BOOL:${VSCF_IMPORT_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_import_private_key.h>"
            "$<$<BOOL:${VSCF_IMPORT_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_import_private_key_api.h>"
            "$<$<BOOL:${VSCF_IMPORT_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_import_public_key.h>"
            "$<$<BOOL:${VSCF_IMPORT_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_import_public_key_api.h>"
            "$<$<BOOL:${VSCF_KDF}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_kdf.h>"
            "$<$<BOOL:${VSCF_KDF}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_kdf_api.h>"
            "$<$<BOOL:${VSCF_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_key.h>"
            "$<$<BOOL:${VSCF_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_key_api.h>"
            "$<$<BOOL:${VSCF_MAC}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_mac.h>"
            "$<$<BOOL:${VSCF_MAC}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_mac_api.h>"
            "$<$<BOOL:${VSCF_MAC_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_mac_info.h>"
            "$<$<BOOL:${VSCF_MAC_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_mac_info_api.h>"
            "$<$<BOOL:${VSCF_MAC_STREAM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_mac_stream.h>"
            "$<$<BOOL:${VSCF_MAC_STREAM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_mac_stream_api.h>"
            "$<$<BOOL:${VSCF_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_private_key.h>"
            "$<$<BOOL:${VSCF_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_private_key_api.h>"
            "$<$<BOOL:${VSCF_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_public_key.h>"
            "$<$<BOOL:${VSCF_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_public_key_api.h>"
            "$<$<BOOL:${VSCF_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_random.h>"
            "$<$<BOOL:${VSCF_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_random_api.h>"
            "$<$<BOOL:${VSCF_SIGN}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sign.h>"
            "$<$<BOOL:${VSCF_SIGN}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_sign_api.h>"
            "$<$<BOOL:${VSCF_VERIFY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_verify.h>"
            "$<$<BOOL:${VSCF_VERIFY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_verify_api.h>"
            "$<$<BOOL:${VSCF_AES256_GCM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_aes256_gcm.h>"
            "$<$<BOOL:${VSCF_AES256_GCM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_aes256_gcm_internal.h>"
            "$<$<BOOL:${VSCF_AES256_GCM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_aes256_gcm_impl.h>"
            "$<$<BOOL:${VSCF_ASN1RD}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1rd.h>"
            "$<$<BOOL:${VSCF_ASN1RD}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1rd_internal.h>"
            "$<$<BOOL:${VSCF_ASN1RD}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_asn1rd_impl.h>"
            "$<$<BOOL:${VSCF_ASN1WR}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1wr.h>"
            "$<$<BOOL:${VSCF_ASN1WR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1wr_internal.h>"
            "$<$<BOOL:${VSCF_ASN1WR}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_asn1wr_impl.h>"
            "$<$<BOOL:${VSCF_CTR_DRBG}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_ctr_drbg.h>"
            "$<$<BOOL:${VSCF_CTR_DRBG}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_ctr_drbg_internal.h>"
            "$<$<BOOL:${VSCF_CTR_DRBG}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_ctr_drbg_impl.h>"
            "$<$<BOOL:${VSCF_ENTROPY_ACCUMULATOR}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_entropy_accumulator.h>"
            "$<$<BOOL:${VSCF_ENTROPY_ACCUMULATOR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_entropy_accumulator_internal.h>"
            "$<$<BOOL:${VSCF_ENTROPY_ACCUMULATOR}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_entropy_accumulator_impl.h>"
            "$<$<BOOL:${VSCF_FAKE_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_fake_random.h>"
            "$<$<BOOL:${VSCF_FAKE_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_fake_random_internal.h>"
            "$<$<BOOL:${VSCF_FAKE_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_fake_random_impl.h>"
            "$<$<BOOL:${VSCF_HKDF}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hkdf.h>"
            "$<$<BOOL:${VSCF_HKDF}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hkdf_internal.h>"
            "$<$<BOOL:${VSCF_HKDF}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_hkdf_impl.h>"
            "$<$<BOOL:${VSCF_HMAC}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_hmac.h>"
            "$<$<BOOL:${VSCF_HMAC}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hmac_internal.h>"
            "$<$<BOOL:${VSCF_HMAC}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_hmac_impl.h>"
            "$<$<BOOL:${VSCF_KDF1}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_kdf1.h>"
            "$<$<BOOL:${VSCF_KDF1}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf1_internal.h>"
            "$<$<BOOL:${VSCF_KDF1}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_kdf1_impl.h>"
            "$<$<BOOL:${VSCF_KDF2}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_kdf2.h>"
            "$<$<BOOL:${VSCF_KDF2}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf2_internal.h>"
            "$<$<BOOL:${VSCF_KDF2}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_kdf2_impl.h>"
            "$<$<BOOL:${VSCF_RSA_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_rsa_private_key.h>"
            "$<$<BOOL:${VSCF_RSA_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_rsa_private_key_internal.h>"
            "$<$<BOOL:${VSCF_RSA_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_rsa_private_key_impl.h>"
            "$<$<BOOL:${VSCF_RSA_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_rsa_public_key.h>"
            "$<$<BOOL:${VSCF_RSA_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_rsa_public_key_internal.h>"
            "$<$<BOOL:${VSCF_RSA_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_rsa_public_key_impl.h>"
            "$<$<BOOL:${VSCF_SHA224}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sha224.h>"
            "$<$<BOOL:${VSCF_SHA224}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha224_internal.h>"
            "$<$<BOOL:${VSCF_SHA224}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_sha224_impl.h>"
            "$<$<BOOL:${VSCF_SHA256}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sha256.h>"
            "$<$<BOOL:${VSCF_SHA256}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha256_internal.h>"
            "$<$<BOOL:${VSCF_SHA256}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_sha256_impl.h>"
            "$<$<BOOL:${VSCF_SHA384}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sha384.h>"
            "$<$<BOOL:${VSCF_SHA384}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha384_internal.h>"
            "$<$<BOOL:${VSCF_SHA384}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_sha384_impl.h>"
            "$<$<BOOL:${VSCF_SHA512}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_sha512.h>"
            "$<$<BOOL:${VSCF_SHA512}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha512_internal.h>"
            "$<$<BOOL:${VSCF_SHA512}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private/vscf_sha512_impl.h>"
            "$<$<BOOL:${VSCF_ERROR_CTX}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_error_ctx.h>"
            "$<$<BOOL:${VSCF_MBEDTLS_BIGNUM_ASN1_READER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bignum_asn1_reader.h>"
            "$<$<BOOL:${VSCF_MBEDTLS_BIGNUM_ASN1_WRITER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bignum_asn1_writer.h>"
            "$<$<BOOL:${VSCF_MBEDTLS_MD}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_md.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_error.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/vscf_asn1_tag.h"

            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_assert.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_library.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_memory.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bridge_random.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bridge_entropy.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bridge_entropy_poll.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_api.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_api_private.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_impl.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_impl_private.c"
            "$<$<BOOL:${VSCF_ASN1_READER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1_reader.c>"
            "$<$<BOOL:${VSCF_ASN1_READER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1_reader_api.c>"
            "$<$<BOOL:${VSCF_ASN1_WRITER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1_writer.c>"
            "$<$<BOOL:${VSCF_ASN1_WRITER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1_writer_api.c>"
            "$<$<BOOL:${VSCF_AUTH_DECRYPT}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_auth_decrypt.c>"
            "$<$<BOOL:${VSCF_AUTH_DECRYPT}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_auth_decrypt_api.c>"
            "$<$<BOOL:${VSCF_AUTH_ENCRYPT}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_auth_encrypt.c>"
            "$<$<BOOL:${VSCF_AUTH_ENCRYPT}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_auth_encrypt_api.c>"
            "$<$<BOOL:${VSCF_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_cipher.c>"
            "$<$<BOOL:${VSCF_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_cipher_api.c>"
            "$<$<BOOL:${VSCF_CIPHER_AUTH}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_cipher_auth.c>"
            "$<$<BOOL:${VSCF_CIPHER_AUTH}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_cipher_auth_api.c>"
            "$<$<BOOL:${VSCF_CIPHER_AUTH_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_cipher_auth_info.c>"
            "$<$<BOOL:${VSCF_CIPHER_AUTH_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_cipher_auth_info_api.c>"
            "$<$<BOOL:${VSCF_CIPHER_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_cipher_info.c>"
            "$<$<BOOL:${VSCF_CIPHER_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_cipher_info_api.c>"
            "$<$<BOOL:${VSCF_COMPUTE_SHARED_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_compute_shared_key.c>"
            "$<$<BOOL:${VSCF_COMPUTE_SHARED_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_compute_shared_key_api.c>"
            "$<$<BOOL:${VSCF_DECRYPT}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_decrypt.c>"
            "$<$<BOOL:${VSCF_DECRYPT}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_decrypt_api.c>"
            "$<$<BOOL:${VSCF_ENCRYPT}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_encrypt.c>"
            "$<$<BOOL:${VSCF_ENCRYPT}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_encrypt_api.c>"
            "$<$<BOOL:${VSCF_ENTROPY_SOURCE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_entropy_source.c>"
            "$<$<BOOL:${VSCF_ENTROPY_SOURCE}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_entropy_source_api.c>"
            "$<$<BOOL:${VSCF_EX_KDF}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_ex_kdf.c>"
            "$<$<BOOL:${VSCF_EX_KDF}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_ex_kdf_api.c>"
            "$<$<BOOL:${VSCF_EXPORT_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_export_private_key.c>"
            "$<$<BOOL:${VSCF_EXPORT_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_export_private_key_api.c>"
            "$<$<BOOL:${VSCF_EXPORT_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_export_public_key.c>"
            "$<$<BOOL:${VSCF_EXPORT_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_export_public_key_api.c>"
            "$<$<BOOL:${VSCF_GENERATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_generate_key.c>"
            "$<$<BOOL:${VSCF_GENERATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_generate_key_api.c>"
            "$<$<BOOL:${VSCF_HASH}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hash.c>"
            "$<$<BOOL:${VSCF_HASH}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hash_api.c>"
            "$<$<BOOL:${VSCF_HASH_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hash_info.c>"
            "$<$<BOOL:${VSCF_HASH_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hash_info_api.c>"
            "$<$<BOOL:${VSCF_HASH_STREAM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hash_stream.c>"
            "$<$<BOOL:${VSCF_HASH_STREAM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hash_stream_api.c>"
            "$<$<BOOL:${VSCF_IMPORT_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_import_private_key.c>"
            "$<$<BOOL:${VSCF_IMPORT_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_import_private_key_api.c>"
            "$<$<BOOL:${VSCF_IMPORT_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_import_public_key.c>"
            "$<$<BOOL:${VSCF_IMPORT_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_import_public_key_api.c>"
            "$<$<BOOL:${VSCF_KDF}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf.c>"
            "$<$<BOOL:${VSCF_KDF}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf_api.c>"
            "$<$<BOOL:${VSCF_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_key.c>"
            "$<$<BOOL:${VSCF_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_key_api.c>"
            "$<$<BOOL:${VSCF_MAC}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mac.c>"
            "$<$<BOOL:${VSCF_MAC}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mac_api.c>"
            "$<$<BOOL:${VSCF_MAC_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mac_info.c>"
            "$<$<BOOL:${VSCF_MAC_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mac_info_api.c>"
            "$<$<BOOL:${VSCF_MAC_STREAM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mac_stream.c>"
            "$<$<BOOL:${VSCF_MAC_STREAM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mac_stream_api.c>"
            "$<$<BOOL:${VSCF_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_private_key.c>"
            "$<$<BOOL:${VSCF_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_private_key_api.c>"
            "$<$<BOOL:${VSCF_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_public_key.c>"
            "$<$<BOOL:${VSCF_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_public_key_api.c>"
            "$<$<BOOL:${VSCF_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_random.c>"
            "$<$<BOOL:${VSCF_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_random_api.c>"
            "$<$<BOOL:${VSCF_SIGN}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sign.c>"
            "$<$<BOOL:${VSCF_SIGN}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sign_api.c>"
            "$<$<BOOL:${VSCF_VERIFY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_verify.c>"
            "$<$<BOOL:${VSCF_VERIFY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_verify_api.c>"
            "$<$<BOOL:${VSCF_AES256_GCM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_aes256_gcm.c>"
            "$<$<BOOL:${VSCF_AES256_GCM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_aes256_gcm_internal.c>"
            "$<$<BOOL:${VSCF_AES256_GCM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_aes256_gcm_impl.c>"
            "$<$<BOOL:${VSCF_ASN1RD}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1rd.c>"
            "$<$<BOOL:${VSCF_ASN1RD}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1rd_internal.c>"
            "$<$<BOOL:${VSCF_ASN1RD}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1rd_impl.c>"
            "$<$<BOOL:${VSCF_ASN1WR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1wr.c>"
            "$<$<BOOL:${VSCF_ASN1WR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1wr_internal.c>"
            "$<$<BOOL:${VSCF_ASN1WR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1wr_impl.c>"
            "$<$<BOOL:${VSCF_CTR_DRBG}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_ctr_drbg.c>"
            "$<$<BOOL:${VSCF_CTR_DRBG}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_ctr_drbg_internal.c>"
            "$<$<BOOL:${VSCF_CTR_DRBG}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_ctr_drbg_impl.c>"
            "$<$<BOOL:${VSCF_ENTROPY_ACCUMULATOR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_entropy_accumulator.c>"
            "$<$<BOOL:${VSCF_ENTROPY_ACCUMULATOR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_entropy_accumulator_internal.c>"
            "$<$<BOOL:${VSCF_ENTROPY_ACCUMULATOR}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_entropy_accumulator_impl.c>"
            "$<$<BOOL:${VSCF_FAKE_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_fake_random.c>"
            "$<$<BOOL:${VSCF_FAKE_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_fake_random_internal.c>"
            "$<$<BOOL:${VSCF_FAKE_RANDOM}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_fake_random_impl.c>"
            "$<$<BOOL:${VSCF_HKDF}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hkdf.c>"
            "$<$<BOOL:${VSCF_HKDF}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hkdf_internal.c>"
            "$<$<BOOL:${VSCF_HKDF}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hkdf_impl.c>"
            "$<$<BOOL:${VSCF_HMAC}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hmac.c>"
            "$<$<BOOL:${VSCF_HMAC}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hmac_internal.c>"
            "$<$<BOOL:${VSCF_HMAC}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_hmac_impl.c>"
            "$<$<BOOL:${VSCF_KDF1}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf1.c>"
            "$<$<BOOL:${VSCF_KDF1}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf1_internal.c>"
            "$<$<BOOL:${VSCF_KDF1}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf1_impl.c>"
            "$<$<BOOL:${VSCF_KDF2}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf2.c>"
            "$<$<BOOL:${VSCF_KDF2}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf2_internal.c>"
            "$<$<BOOL:${VSCF_KDF2}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_kdf2_impl.c>"
            "$<$<BOOL:${VSCF_RSA_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_rsa_private_key.c>"
            "$<$<BOOL:${VSCF_RSA_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_rsa_private_key_internal.c>"
            "$<$<BOOL:${VSCF_RSA_PRIVATE_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_rsa_private_key_impl.c>"
            "$<$<BOOL:${VSCF_RSA_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_rsa_public_key.c>"
            "$<$<BOOL:${VSCF_RSA_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_rsa_public_key_internal.c>"
            "$<$<BOOL:${VSCF_RSA_PUBLIC_KEY}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_rsa_public_key_impl.c>"
            "$<$<BOOL:${VSCF_SHA224}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha224.c>"
            "$<$<BOOL:${VSCF_SHA224}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha224_internal.c>"
            "$<$<BOOL:${VSCF_SHA224}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha224_impl.c>"
            "$<$<BOOL:${VSCF_SHA256}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha256.c>"
            "$<$<BOOL:${VSCF_SHA256}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha256_internal.c>"
            "$<$<BOOL:${VSCF_SHA256}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha256_impl.c>"
            "$<$<BOOL:${VSCF_SHA384}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha384.c>"
            "$<$<BOOL:${VSCF_SHA384}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha384_internal.c>"
            "$<$<BOOL:${VSCF_SHA384}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha384_impl.c>"
            "$<$<BOOL:${VSCF_SHA512}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha512.c>"
            "$<$<BOOL:${VSCF_SHA512}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha512_internal.c>"
            "$<$<BOOL:${VSCF_SHA512}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_sha512_impl.c>"
            "$<$<BOOL:${VSCF_ERROR_CTX}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_error_ctx.c>"
            "$<$<BOOL:${VSCF_MBEDTLS_BIGNUM_ASN1_READER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bignum_asn1_reader.c>"
            "$<$<BOOL:${VSCF_MBEDTLS_BIGNUM_ASN1_WRITER}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_bignum_asn1_writer.c>"
            "$<$<BOOL:${VSCF_MBEDTLS_MD}>:${CMAKE_CURRENT_LIST_DIR}/src/vscf_mbedtls_md.c>"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_error.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vscf_asn1_tag.c"
        )

target_include_directories(foundation
        PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/foundation/private>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/foundation>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/foundation/private>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/src>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        )
