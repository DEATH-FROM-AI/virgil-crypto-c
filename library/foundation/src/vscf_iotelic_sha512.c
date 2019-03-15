//  @license
// --------------------------------------------------------------------------
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
// --------------------------------------------------------------------------
// clang-format off


//  @description
// --------------------------------------------------------------------------
//  This module contains 'iotelic sha512' implementation.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vscf_iotelic_sha512.h"
#include "vscf_assert.h"
#include "vscf_memory.h"
#include "vscf_iotelic_sha512_defs.h"
#include "vscf_iotelic_sha512_internal.h"

// clang-format on
//  @end

#include <iotelic_sp_interface.h>
#include <virgil/crypto/common/private/vsc_buffer_defs.h>

//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


//
//  Provide algorithm identificator.
//
VSCF_PUBLIC vscf_alg_id_t
vscf_iotelic_sha512_alg_id(const vscf_iotelic_sha512_t *self) {

    VSCF_UNUSED(self);
    return vscf_alg_id_SHA512;
}

//
//  Produce object with algorithm information and configuration parameters.
//
VSCF_PUBLIC vscf_impl_t *
vscf_iotelic_sha512_produce_alg_info(const vscf_iotelic_sha512_t *self) {

    VSCF_UNUSED(self);
    return NULL;
}

//
//  Restore algorithm configuration from the given object.
//
VSCF_PUBLIC vscf_error_t
vscf_iotelic_sha512_restore_alg_info(vscf_iotelic_sha512_t *self, const vscf_impl_t *alg_info) {

    VSCF_UNUSED(self);
    VSCF_UNUSED(alg_info);
    return vscf_error_BAD_ARGUMENTS;
}

//
//  Calculate hash over given data.
//
VSCF_PUBLIC void
vscf_iotelic_sha512_hash(vsc_data_t data, vsc_buffer_t *digest) {

    vs_iot_execute_crypto_op(
            VS_IOT_HASH_SHA512, (void *)data.bytes, data.len, (void *)digest->bytes, digest->capacity, &digest->len);
}

//
//  Start a new hashing.
//
VSCF_PUBLIC void
vscf_iotelic_sha512_start(vscf_iotelic_sha512_t *self) {

    VSCF_UNUSED(self);
}

//
//  Add given data to the hash.
//
VSCF_PUBLIC void
vscf_iotelic_sha512_update(vscf_iotelic_sha512_t *self, vsc_data_t data) {

    VSCF_UNUSED(self);
    VSCF_UNUSED(data);
}

//
//  Accompilsh hashing and return it's result (a message digest).
//
VSCF_PUBLIC void
vscf_iotelic_sha512_finish(vscf_iotelic_sha512_t *self, vsc_buffer_t *digest) {

    VSCF_UNUSED(self);
    VSCF_UNUSED(digest);
}