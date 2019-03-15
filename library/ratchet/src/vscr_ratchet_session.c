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
//  Class for ratchet session between 2 participants
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vscr_ratchet_session.h"
#include "vscr_memory.h"
#include "vscr_assert.h"
#include "vscr_ratchet_common_hidden.h"
#include "vscr_ratchet_x3dh.h"
#include "vscr_ratchet_message_defs.h"
#include "vscr_ratchet_key_utils.h"
#include "vscr_ratchet.h"

#include <virgil/crypto/foundation/vscf_random.h>
#include <virgil/crypto/common/private/vsc_buffer_defs.h>
#include <virgil/crypto/foundation/vscf_ctr_drbg.h>
#include <RatchetSession.pb.h>
#include <RatchetMessage.pb.h>
#include <pb_decode.h>
#include <pb_encode.h>
#include <ed25519/ed25519.h>

// clang-format on
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Handle 'ratchet session' context.
//
struct vscr_ratchet_session_t {
    //
    //  Function do deallocate self context.
    //
    vscr_dealloc_fn self_dealloc_cb;
    //
    //  Reference counter.
    //
    size_t refcnt;
    //
    //  Dependency to the interface 'random'.
    //
    vscf_impl_t *rng;

    vscr_ratchet_key_utils_t *key_utils;

    vscr_ratchet_t *ratchet;

    bool is_initiator;

    bool received_first_response;

    byte sender_identity_public_key[vscr_ratchet_common_hidden_RATCHET_KEY_LENGTH];

    byte sender_ephemeral_public_key[vscr_ratchet_common_hidden_RATCHET_KEY_LENGTH];

    byte receiver_long_term_public_key[vscr_ratchet_common_hidden_RATCHET_KEY_LENGTH];

    bool receiver_has_one_time_public_key;

    byte receiver_one_time_public_key[vscr_ratchet_common_hidden_RATCHET_KEY_LENGTH];
};

//
//  Perform context specific initialization.
//  Note, this method is called automatically when method vscr_ratchet_session_init() is called.
//  Note, that context is already zeroed.
//
static void
vscr_ratchet_session_init_ctx(vscr_ratchet_session_t *self);

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vscr_ratchet_session_cleanup_ctx(vscr_ratchet_session_t *self);

//
//  This method is called when interface 'random' was setup.
//
static vscr_status_t
vscr_ratchet_session_did_setup_rng(vscr_ratchet_session_t *self) VSCR_NODISCARD;

//
//  This method is called when interface 'random' was released.
//
static void
vscr_ratchet_session_did_release_rng(vscr_ratchet_session_t *self);

//
//  Return size of 'vscr_ratchet_session_t'.
//
VSCR_PUBLIC size_t
vscr_ratchet_session_ctx_size(void) {

    return sizeof(vscr_ratchet_session_t);
}

//
//  Perform initialization of pre-allocated context.
//
VSCR_PUBLIC void
vscr_ratchet_session_init(vscr_ratchet_session_t *self) {

    VSCR_ASSERT_PTR(self);

    vscr_zeroize(self, sizeof(vscr_ratchet_session_t));

    self->refcnt = 1;

    vscr_ratchet_session_init_ctx(self);
}

//
//  Release all inner resources including class dependencies.
//
VSCR_PUBLIC void
vscr_ratchet_session_cleanup(vscr_ratchet_session_t *self) {

    if (self == NULL) {
        return;
    }

    if (self->refcnt == 0) {
        return;
    }

    if (--self->refcnt == 0) {
        vscr_ratchet_session_cleanup_ctx(self);

        vscr_ratchet_session_release_rng(self);

        vscr_zeroize(self, sizeof(vscr_ratchet_session_t));
    }
}

//
//  Allocate context and perform it's initialization.
//
VSCR_PUBLIC vscr_ratchet_session_t *
vscr_ratchet_session_new(void) {

    vscr_ratchet_session_t *self = (vscr_ratchet_session_t *) vscr_alloc(sizeof (vscr_ratchet_session_t));
    VSCR_ASSERT_ALLOC(self);

    vscr_ratchet_session_init(self);

    self->self_dealloc_cb = vscr_dealloc;

    return self;
}

//
//  Release all inner resources and deallocate context if needed.
//  It is safe to call this method even if context was allocated by the caller.
//
VSCR_PUBLIC void
vscr_ratchet_session_delete(vscr_ratchet_session_t *self) {

    if (self == NULL) {
        return;
    }

    vscr_dealloc_fn self_dealloc_cb = self->self_dealloc_cb;

    vscr_ratchet_session_cleanup(self);

    if (self->refcnt == 0 && self_dealloc_cb != NULL) {
        self_dealloc_cb(self);
    }
}

//
//  Delete given context and nullifies reference.
//  This is a reverse action of the function 'vscr_ratchet_session_new ()'.
//
VSCR_PUBLIC void
vscr_ratchet_session_destroy(vscr_ratchet_session_t **self_ref) {

    VSCR_ASSERT_PTR(self_ref);

    vscr_ratchet_session_t *self = *self_ref;
    *self_ref = NULL;

    vscr_ratchet_session_delete(self);
}

//
//  Copy given class context by increasing reference counter.
//
VSCR_PUBLIC vscr_ratchet_session_t *
vscr_ratchet_session_shallow_copy(vscr_ratchet_session_t *self) {

    VSCR_ASSERT_PTR(self);

    ++self->refcnt;

    return self;
}

//
//  Random used to generate keys
//
//  Note, ownership is shared.
//
VSCR_PUBLIC vscr_status_t
vscr_ratchet_session_use_rng(vscr_ratchet_session_t *self, vscf_impl_t *rng) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT_PTR(rng);
    VSCR_ASSERT(self->rng == NULL);

    VSCR_ASSERT(vscf_random_is_implemented(rng));

    self->rng = vscf_impl_shallow_copy(rng);

    return vscr_ratchet_session_did_setup_rng(self);
}

//
//  Random used to generate keys
//
//  Note, ownership is transfered.
//  Note, transfer ownership does not mean that object is uniquely owned by the target object.
//
VSCR_PUBLIC vscr_status_t
vscr_ratchet_session_take_rng(vscr_ratchet_session_t *self, vscf_impl_t *rng) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT_PTR(rng);
    VSCR_ASSERT_PTR(self->rng == NULL);

    VSCR_ASSERT(vscf_random_is_implemented(rng));

    self->rng = rng;

    return vscr_ratchet_session_did_setup_rng(self);
}

//
//  Release dependency to the interface 'random'.
//
VSCR_PUBLIC void
vscr_ratchet_session_release_rng(vscr_ratchet_session_t *self) {

    VSCR_ASSERT_PTR(self);

    vscf_impl_destroy(&self->rng);

    vscr_ratchet_session_did_release_rng(self);
}


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


//
//  Perform context specific initialization.
//  Note, this method is called automatically when method vscr_ratchet_session_init() is called.
//  Note, that context is already zeroed.
//
static void
vscr_ratchet_session_init_ctx(vscr_ratchet_session_t *self) {

    VSCR_ASSERT_PTR(self);
    self->received_first_response = false;
    self->is_initiator = false;
    self->ratchet = vscr_ratchet_new();
    self->key_utils = vscr_ratchet_key_utils_new();
}

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vscr_ratchet_session_cleanup_ctx(vscr_ratchet_session_t *self) {

    VSCR_ASSERT_PTR(self);

    vscr_ratchet_destroy(&self->ratchet);
    vscr_ratchet_key_utils_destroy(&self->key_utils);
}

//
//  This method is called when interface 'random' was setup.
//
static vscr_status_t
vscr_ratchet_session_did_setup_rng(vscr_ratchet_session_t *self) {

    if (self->rng != NULL) {
        vscr_ratchet_use_rng(self->ratchet, self->rng);
    }

    return vscr_status_SUCCESS;
}

//
//  This method is called when interface 'random' was released.
//
static void
vscr_ratchet_session_did_release_rng(vscr_ratchet_session_t *self) {

    VSCR_UNUSED(self);
}

//
//  Setups default dependencies:
//      - RNG: CTR DRBG
//      - Key serialization: DER PKCS8
//      - Symmetric cipher: AES256-GCM
//
VSCR_PUBLIC vscr_status_t
vscr_ratchet_session_setup_defaults(vscr_ratchet_session_t *self) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT(self->rng == NULL);

    vscf_ctr_drbg_t *rng = vscf_ctr_drbg_new();
    vscf_status_t status = vscf_ctr_drbg_setup_defaults(rng);

    if (status != vscf_status_SUCCESS) {
        vscf_ctr_drbg_destroy(&rng);
        return vscr_status_ERROR_RNG_FAILED;
    }

    return vscr_ratchet_session_take_rng(self, vscf_ctr_drbg_impl(rng));
}

//
//  Initiates session
//
VSCR_PUBLIC vscr_status_t
vscr_ratchet_session_initiate(vscr_ratchet_session_t *self, vsc_data_t sender_identity_private_key,
        vsc_data_t receiver_identity_public_key, vsc_data_t receiver_long_term_public_key,
        vsc_data_t receiver_one_time_public_key) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT_PTR(self->rng);
    VSCR_ASSERT_PTR(self->ratchet);
    VSCR_ASSERT_PTR(self->key_utils);

    vscr_status_t status = vscr_status_SUCCESS;

    vscr_error_t error_ctx;
    vscr_error_reset(&error_ctx);

    vsc_buffer_t *sender_identity_private_key_raw = vscr_ratchet_key_utils_extract_ratchet_private_key(
            self->key_utils, sender_identity_private_key, &error_ctx);

    if (vscr_error_has_error(&error_ctx)) {
        status = vscr_error_status(&error_ctx);
        goto key_err1;
    }

    vsc_buffer_t *receiver_identity_public_key_raw = vscr_ratchet_key_utils_extract_ratchet_public_key(
            self->key_utils, receiver_identity_public_key, &error_ctx);

    if (vscr_error_has_error(&error_ctx)) {
        status = vscr_error_status(&error_ctx);
        goto key_err2;
    }

    int curve_status =
            curve25519_get_pubkey(self->sender_identity_public_key, vsc_buffer_bytes(sender_identity_private_key_raw));

    if (curve_status != 0) {
        status = vscr_status_ERROR_CURVE25519;
        goto key_err2;
    }

    vsc_buffer_t *receiver_long_term_public_key_raw = vscr_ratchet_key_utils_extract_ratchet_public_key(
            self->key_utils, receiver_long_term_public_key, &error_ctx);

    if (vscr_error_has_error(&error_ctx)) {
        status = vscr_error_status(&error_ctx);
        goto key_err3;
    }

    memcpy(self->receiver_long_term_public_key, vsc_buffer_bytes(receiver_long_term_public_key_raw),
            vsc_buffer_len(receiver_long_term_public_key_raw));

    size_t shared_secret_count = 3;

    vsc_buffer_t *receiver_one_time_public_key_raw = NULL;

    if (receiver_one_time_public_key.len != 0) {
        receiver_one_time_public_key_raw = vscr_ratchet_key_utils_extract_ratchet_public_key(
                self->key_utils, receiver_one_time_public_key, &error_ctx);

        if (vscr_error_has_error(&error_ctx)) {
            status = vscr_error_status(&error_ctx);
            goto key_err4;
        }

        shared_secret_count = 4;

        self->receiver_has_one_time_public_key = true;
        memcpy(self->receiver_one_time_public_key, vsc_buffer_bytes(receiver_one_time_public_key_raw),
                vsc_buffer_len(receiver_one_time_public_key_raw));
    } else {
        self->receiver_has_one_time_public_key = false;
    }

    vsc_buffer_t *ephemeral_private_key = vsc_buffer_new_with_capacity(vscr_ratchet_common_hidden_RATCHET_KEY_LENGTH);
    vsc_buffer_make_secure(ephemeral_private_key);

    vscf_status_t f_status =
            vscf_random(self->rng, vscr_ratchet_common_hidden_RATCHET_KEY_LENGTH, ephemeral_private_key);

    if (f_status != vscf_status_SUCCESS) {
        status = vscr_status_ERROR_RNG_FAILED;
        goto rng_err;
    }

    curve_status = curve25519_get_pubkey(self->sender_ephemeral_public_key, vsc_buffer_bytes(ephemeral_private_key));

    if (curve_status != 0) {
        status = vscr_status_ERROR_CURVE25519;
        goto rng_err;
    }

    vsc_buffer_t *shared_secret = vsc_buffer_new_with_capacity(shared_secret_count * ED25519_DH_LEN);
    vsc_buffer_make_secure(shared_secret);

    status = vscr_ratchet_x3dh_compute_initiator_x3dh_secret(vsc_buffer_data(sender_identity_private_key_raw),
            vsc_buffer_data(ephemeral_private_key), vsc_buffer_data(receiver_identity_public_key_raw),
            vsc_buffer_data(receiver_long_term_public_key_raw),
            receiver_one_time_public_key_raw ? vsc_buffer_data(receiver_one_time_public_key_raw) : vsc_data_empty(),
            shared_secret);

    if (status != vscr_status_SUCCESS) {
        goto x3dh_err;
    }

    status = vscr_ratchet_initiate(self->ratchet, vsc_buffer_data(shared_secret));

    self->is_initiator = true;

x3dh_err:
    vsc_buffer_destroy(&shared_secret);

rng_err:
    vsc_buffer_destroy(&ephemeral_private_key);

key_err4:
    vsc_buffer_destroy(&receiver_one_time_public_key_raw);

key_err3:
    vsc_buffer_destroy(&receiver_long_term_public_key_raw);

key_err2:
    vsc_buffer_destroy(&receiver_identity_public_key_raw);

key_err1:
    vsc_buffer_destroy(&sender_identity_private_key_raw);

    return status;
}

//
//  Responds to session initiation
//
VSCR_PUBLIC vscr_status_t
vscr_ratchet_session_respond(vscr_ratchet_session_t *self, vsc_data_t sender_identity_public_key,
        vsc_data_t receiver_identity_private_key, vsc_data_t receiver_long_term_private_key,
        vsc_data_t receiver_one_time_private_key, const vscr_ratchet_message_t *message) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT_PTR(self->rng);
    VSCR_ASSERT_PTR(self->ratchet);
    VSCR_ASSERT_PTR(self->key_utils);

    vscr_status_t status = vscr_status_SUCCESS;

    if (!message->message_pb.has_prekey_message) {
        status = vscr_status_ERROR_BAD_MESSAGE_TYPE;
        goto msg_type_err;
    }

    vscr_error_t error_ctx;
    vscr_error_reset(&error_ctx);

    vsc_buffer_t *sender_identity_public_key_raw =
            vscr_ratchet_key_utils_extract_ratchet_public_key(self->key_utils, sender_identity_public_key, &error_ctx);

    if (vscr_error_has_error(&error_ctx)) {
        status = vscr_error_status(&error_ctx);
        goto key_err1;
    }

    memcpy(self->sender_identity_public_key, vsc_buffer_bytes(sender_identity_public_key_raw),
            vsc_buffer_len(sender_identity_public_key_raw));
    memcpy(self->sender_ephemeral_public_key, message->message_pb.prekey_message.sender_ephemeral_key,
            sizeof(message->message_pb.prekey_message.sender_ephemeral_key));

    if (memcmp(message->message_pb.prekey_message.sender_identity_key, vsc_buffer_bytes(sender_identity_public_key_raw),
                vsc_buffer_len(sender_identity_public_key_raw)) != 0) {
        status = vscr_status_ERROR_IDENTITY_KEY_DOESNT_MATCH;
        goto key_err1;
    }

    vsc_buffer_t *receiver_identity_private_key_raw = vscr_ratchet_key_utils_extract_ratchet_private_key(
            self->key_utils, receiver_identity_private_key, &error_ctx);

    if (vscr_error_has_error(&error_ctx)) {
        status = vscr_error_status(&error_ctx);
        goto key_err2;
    }

    vsc_buffer_t *receiver_long_term_private_key_raw = vscr_ratchet_key_utils_extract_ratchet_private_key(
            self->key_utils, receiver_long_term_private_key, &error_ctx);

    if (vscr_error_has_error(&error_ctx)) {
        status = vscr_error_status(&error_ctx);
        goto key_err3;
    }

    int curve_status = curve25519_get_pubkey(
            self->receiver_long_term_public_key, vsc_buffer_bytes(receiver_long_term_private_key_raw));

    if (curve_status != 0) {
        status = vscr_status_ERROR_CURVE25519;
        goto key_err3;
    }

    vsc_buffer_t *receiver_one_time_private_key_raw = NULL;

    size_t shared_secret_count = 3;
    if (receiver_one_time_private_key.len != 0) {
        receiver_one_time_private_key_raw = vscr_ratchet_key_utils_extract_ratchet_private_key(
                self->key_utils, receiver_one_time_private_key, &error_ctx);

        if (vscr_error_has_error(&error_ctx)) {
            status = vscr_error_status(&error_ctx);
            goto key_err4;
        }

        shared_secret_count = 4;

        self->receiver_has_one_time_public_key = true;
        curve_status = curve25519_get_pubkey(
                self->receiver_one_time_public_key, vsc_buffer_bytes(receiver_one_time_private_key_raw));

        if (curve_status != 0) {
            status = vscr_status_ERROR_CURVE25519;
            goto key_err4;
        }
    } else {
        self->receiver_has_one_time_public_key = false;
    }

    vsc_buffer_t *shared_secret = vsc_buffer_new_with_capacity(shared_secret_count * ED25519_DH_LEN);
    vsc_buffer_make_secure(shared_secret);

    status = vscr_ratchet_x3dh_compute_responder_x3dh_secret(vsc_buffer_data(sender_identity_public_key_raw),
            vsc_data(self->sender_ephemeral_public_key, sizeof(self->sender_ephemeral_public_key)),
            vsc_buffer_data(receiver_identity_private_key_raw), vsc_buffer_data(receiver_long_term_private_key_raw),
            receiver_one_time_private_key_raw ? vsc_buffer_data(receiver_one_time_private_key_raw) : vsc_data_empty(),
            shared_secret);

    if (status != vscr_status_SUCCESS) {
        goto x3dh_err;
    }

    status = vscr_ratchet_respond(
            self->ratchet, vsc_buffer_data(shared_secret), &message->message_pb.prekey_message.regular_message);

    self->is_initiator = false;

x3dh_err:
    vsc_buffer_destroy(&shared_secret);

key_err4:
    vsc_buffer_destroy(&receiver_one_time_private_key_raw);

key_err3:
    vsc_buffer_destroy(&receiver_long_term_private_key_raw);

key_err2:
    vsc_buffer_destroy(&receiver_identity_private_key_raw);

key_err1:
    vsc_buffer_destroy(&sender_identity_public_key_raw);

msg_type_err:
    return status;
}

//
//  Returns flag that indicates is this session was initiated or responded
//
VSCR_PUBLIC bool
vscr_ratchet_session_is_initiator(vscr_ratchet_session_t *self) {

    return self->is_initiator;
}

//
//  Returns true if at least 1 response was successfully decrypted, false - otherwise
//
VSCR_PUBLIC bool
vscr_ratchet_session_received_first_response(vscr_ratchet_session_t *self) {

    return self->received_first_response;
}

//
//  Returns true if receiver had one time public key
//
VSCR_PUBLIC bool
vscr_ratchet_session_receiver_has_one_time_public_key(vscr_ratchet_session_t *self) {

    return self->receiver_has_one_time_public_key;
}

//
//  Encrypts data
//
VSCR_PUBLIC vscr_ratchet_message_t *
vscr_ratchet_session_encrypt(vscr_ratchet_session_t *self, vsc_data_t plain_text, vscr_error_t *error) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT_PTR(self->rng);
    VSCR_ASSERT_PTR(self->ratchet);

    vscr_ratchet_message_t *ratchet_message = NULL;

    if (plain_text.len > vscr_ratchet_common_MAX_PLAIN_TEXT_LEN) {
        VSCR_ERROR_SAFE_UPDATE(error, vscr_status_ERROR_EXCEEDED_MAX_PLAIN_TEXT_LEN);
        goto err;
    }

    if (!self->is_initiator && !self->received_first_response) {
        VSCR_ERROR_SAFE_UPDATE(error, vscr_status_ERROR_CAN_T_ENCRYPT_YET);
        goto err;
    }

    ratchet_message = vscr_ratchet_message_new();
    ratchet_message->message_pb.version = vscr_ratchet_common_hidden_RATCHET_MESSAGE_VERSION;
    RegularMessage *regular_message;

    if (self->received_first_response || !self->is_initiator) {
        ratchet_message->message_pb.has_regular_message = true;
        regular_message = &ratchet_message->message_pb.regular_message;
    } else {
        ratchet_message->message_pb.has_prekey_message = true;
        PrekeyMessage *prekey_message = &ratchet_message->message_pb.prekey_message;
        regular_message = &prekey_message->regular_message;

        prekey_message->version = vscr_ratchet_common_hidden_RATCHET_PROTOCOL_VERSION;

        memcpy(prekey_message->sender_identity_key, self->sender_identity_public_key,
                sizeof(self->sender_identity_public_key));

        memcpy(prekey_message->sender_ephemeral_key, self->sender_ephemeral_public_key,
                sizeof(self->sender_ephemeral_public_key));

        memcpy(prekey_message->receiver_long_term_key, self->receiver_long_term_public_key,
                sizeof(self->receiver_long_term_public_key));

        if (self->receiver_has_one_time_public_key) {
            prekey_message->has_receiver_one_time_key = true;
            memcpy(prekey_message->receiver_one_time_key, self->receiver_one_time_public_key,
                    sizeof(self->receiver_one_time_public_key));
        } else {
            prekey_message->has_receiver_one_time_key = false;
        }
    }

    regular_message->cipher_text.arg =
            vsc_buffer_new_with_capacity(vscr_ratchet_encrypt_len(self->ratchet, plain_text.len));

    vscr_status_t result = vscr_ratchet_encrypt(self->ratchet, plain_text, regular_message);

    if (result != vscr_status_SUCCESS) {
        VSCR_ERROR_SAFE_UPDATE(error, result);

        vscr_ratchet_message_destroy(&ratchet_message);

        return NULL;
    }

err:
    return ratchet_message;
}

//
//  Calculates size of buffer sufficient to store decrypted message
//
VSCR_PUBLIC size_t
vscr_ratchet_session_decrypt_len(vscr_ratchet_session_t *self, const vscr_ratchet_message_t *message) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT_PTR(self->ratchet);
    VSCR_ASSERT_PTR(message);

    size_t cipher_text_len = 0;

    if (message->message_pb.has_regular_message) {
        cipher_text_len = vsc_buffer_len(message->message_pb.regular_message.cipher_text.arg);
    } else if (message->message_pb.has_prekey_message) {
        cipher_text_len = vsc_buffer_len(message->message_pb.prekey_message.regular_message.cipher_text.arg);
    }

    VSCR_ASSERT(cipher_text_len <= vscr_ratchet_common_MAX_CIPHER_TEXT_LEN);

    return vscr_ratchet_decrypt_len(self->ratchet, cipher_text_len);
}

//
//  Decrypts message
//
VSCR_PUBLIC vscr_status_t
vscr_ratchet_session_decrypt(
        vscr_ratchet_session_t *self, const vscr_ratchet_message_t *message, vsc_buffer_t *plain_text) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT_PTR(self->rng);
    VSCR_ASSERT_PTR(self->ratchet);

    VSCR_ASSERT_PTR(message);
    VSCR_ASSERT_PTR(plain_text);

    const RegularMessage *regular_message = NULL;

    if (message->message_pb.has_regular_message) {
        regular_message = &message->message_pb.regular_message;
    } else if (message->message_pb.has_prekey_message) {
        if (self->is_initiator) {
            return vscr_status_ERROR_BAD_MESSAGE_TYPE;
        }

        regular_message = &message->message_pb.prekey_message.regular_message;
    }

    VSCR_ASSERT(vsc_buffer_unused_len(plain_text) >= vscr_ratchet_session_decrypt_len(self, message));

    vscr_status_t result = vscr_ratchet_decrypt(self->ratchet, regular_message, plain_text);

    if (result == vscr_status_SUCCESS)
        self->received_first_response = true;

    return result;
}

//
//  Calculates size of buffer sufficient to store session
//
VSCR_PUBLIC size_t
vscr_ratchet_session_serialize_len(vscr_ratchet_session_t *self) {

    VSCR_UNUSED(self);

    return Session_size;
}

//
//  Serializes session to buffer
//
VSCR_PUBLIC void
vscr_ratchet_session_serialize(vscr_ratchet_session_t *self, vsc_buffer_t *output) {

    VSCR_ASSERT_PTR(self);
    VSCR_ASSERT(vsc_buffer_unused_len(output) >= vscr_ratchet_session_serialize_len(self));

    Session session_pb = Session_init_zero;

    session_pb.received_first_response = self->received_first_response;
    session_pb.is_initiator = self->is_initiator;

    memcpy(session_pb.sender_identity_key, self->sender_identity_public_key, sizeof(self->sender_identity_public_key));
    memcpy(session_pb.sender_ephemeral_key, self->sender_ephemeral_public_key,
            sizeof(self->sender_ephemeral_public_key));
    memcpy(session_pb.receiver_long_term_key, self->receiver_long_term_public_key,
            sizeof(self->receiver_long_term_public_key));

    if (self->receiver_has_one_time_public_key) {
        session_pb.has_receiver_one_time_key = true;
        memcpy(session_pb.receiver_one_time_key, self->receiver_one_time_public_key,
                sizeof(self->receiver_one_time_public_key));
    } else {
        session_pb.has_receiver_one_time_key = false;
    }

    vscr_ratchet_serialize(self->ratchet, &session_pb.ratchet);

    pb_ostream_t ostream = pb_ostream_from_buffer(vsc_buffer_unused_bytes(output), vsc_buffer_capacity(output));

    VSCR_ASSERT(pb_encode(&ostream, Session_fields, &session_pb));
    vsc_buffer_inc_used(output, ostream.bytes_written);

    vscr_zeroize(&session_pb, sizeof(Session));
}

//
//  Deserializes session from buffer.
//  NOTE: Deserialized session needs dependencies to be set. Check setup defaults
//
VSCR_PUBLIC vscr_ratchet_session_t *
vscr_ratchet_session_deserialize(vsc_data_t input, vscr_error_t *error) {

    VSCR_ASSERT(vsc_data_is_valid(input));

    if (input.len > Session_size) {
        VSCR_ERROR_SAFE_UPDATE(error, vscr_status_ERROR_PROTOBUF_DECODE);

        return NULL;
    }

    Session session_pb = Session_init_zero;

    pb_istream_t istream = pb_istream_from_buffer(input.bytes, input.len);

    bool status = pb_decode(&istream, Session_fields, &session_pb);

    if (!status) {
        VSCR_ERROR_SAFE_UPDATE(error, vscr_status_ERROR_PROTOBUF_DECODE);

        return NULL;
    }

    vscr_ratchet_session_t *session = vscr_ratchet_session_new();

    session->received_first_response = session_pb.received_first_response;
    session->is_initiator = session_pb.is_initiator;

    memcpy(session->sender_identity_public_key, session_pb.sender_identity_key, sizeof(session_pb.sender_identity_key));
    memcpy(session->sender_ephemeral_public_key, session_pb.sender_ephemeral_key,
            sizeof(session_pb.sender_ephemeral_key));
    memcpy(session->receiver_long_term_public_key, session_pb.receiver_long_term_key,
            sizeof(session_pb.receiver_long_term_key));

    if (session_pb.has_receiver_one_time_key) {
        session->receiver_has_one_time_public_key = true;
        memcpy(session->receiver_one_time_public_key, session_pb.receiver_one_time_key,
                sizeof(session_pb.receiver_one_time_key));
    } else {
        session->receiver_has_one_time_public_key = false;
    }

    vscr_ratchet_deserialize(&session_pb.ratchet, session->ratchet);

    vscr_zeroize(&session_pb, sizeof(Session));

    return session;
}
