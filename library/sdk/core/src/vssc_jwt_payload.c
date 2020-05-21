//  @license
// --------------------------------------------------------------------------
//  Copyright (C) 2015-2020 Virgil Security, Inc.
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
//  Class that handles JWT Payload.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vssc_jwt_payload.h"
#include "vssc_memory.h"
#include "vssc_assert.h"
#include "vssc_jwt_payload_defs.h"
#include "vssc_base64_url.h"

// clang-format on
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Perform context specific initialization.
//  Note, this method is called automatically when method vssc_jwt_payload_init() is called.
//  Note, that context is already zeroed.
//
static void
vssc_jwt_payload_init_ctx(vssc_jwt_payload_t *self);

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vssc_jwt_payload_cleanup_ctx(vssc_jwt_payload_t *self);

//
//  Create fully defined JWT Payload.
//
static void
vssc_jwt_payload_init_ctx_with_members(vssc_jwt_payload_t *self, vsc_str_t app_id, vsc_str_t identity, size_t issued_at,
        size_t expires_at);

//
//  Perform initialization of pre-allocated context.
//  Create JWT Payload defined with a JSON object.
//  Prerequisite: The JSON object SHOULD be already validated.
//
static void
vssc_jwt_payload_init_with_json_object(vssc_jwt_payload_t *self, json_object **json_obj_ref);

//
//  Create JWT Payload defined with a JSON object.
//  Prerequisite: The JSON object SHOULD be already validated.
//
static void
vssc_jwt_payload_init_ctx_with_json_object(vssc_jwt_payload_t *self, json_object **json_obj_ref);

//
//  Allocate class context and perform it's initialization.
//  Create JWT Payload defined with a JSON object.
//  Prerequisite: The JSON object SHOULD be already validated.
//
static vssc_jwt_payload_t *
vssc_jwt_payload_new_with_json_object(json_object **json_obj_ref);

//
//  Prefix for JSON value under the key "iss".
//
static const char *const k_json_value_prefix_app_id = "virgil-";

//
//  Prefix for JSON value under the key "sub".
//
static const char *const k_json_value_prefix_identity = "identity-";

//
//  JSON key of application id JWT belongs to.
//
static const char *const k_json_key_app_id = "iss";

//
//  JSON key of JWT identity.
//
static const char *const k_json_key_identity = "sub";

//
//  JSON key of JWT issued at date.
//
static const char *const k_json_key_issued_at = "iat";

//
//  JSON key of JWT expires at date.
//
static const char *const k_json_key_expires_at = "exp";

//
//  Return size of 'vssc_jwt_payload_t'.
//
VSSC_PUBLIC size_t
vssc_jwt_payload_ctx_size(void) {

    return sizeof(vssc_jwt_payload_t);
}

//
//  Perform initialization of pre-allocated context.
//
VSSC_PUBLIC void
vssc_jwt_payload_init(vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);

    vssc_zeroize(self, sizeof(vssc_jwt_payload_t));

    self->refcnt = 1;

    vssc_jwt_payload_init_ctx(self);
}

//
//  Release all inner resources including class dependencies.
//
VSSC_PUBLIC void
vssc_jwt_payload_cleanup(vssc_jwt_payload_t *self) {

    if (self == NULL) {
        return;
    }

    vssc_jwt_payload_cleanup_ctx(self);

    vssc_zeroize(self, sizeof(vssc_jwt_payload_t));
}

//
//  Allocate context and perform it's initialization.
//
VSSC_PUBLIC vssc_jwt_payload_t *
vssc_jwt_payload_new(void) {

    vssc_jwt_payload_t *self = (vssc_jwt_payload_t *) vssc_alloc(sizeof (vssc_jwt_payload_t));
    VSSC_ASSERT_ALLOC(self);

    vssc_jwt_payload_init(self);

    self->self_dealloc_cb = vssc_dealloc;

    return self;
}

//
//  Perform initialization of pre-allocated context.
//  Create fully defined JWT Payload.
//
VSSC_PUBLIC void
vssc_jwt_payload_init_with_members(vssc_jwt_payload_t *self, vsc_str_t app_id, vsc_str_t identity, size_t issued_at,
        size_t expires_at) {

    VSSC_ASSERT_PTR(self);

    vssc_zeroize(self, sizeof(vssc_jwt_payload_t));

    self->refcnt = 1;

    vssc_jwt_payload_init_ctx_with_members(self, app_id, identity, issued_at, expires_at);
}

//
//  Allocate class context and perform it's initialization.
//  Create fully defined JWT Payload.
//
VSSC_PUBLIC vssc_jwt_payload_t *
vssc_jwt_payload_new_with_members(vsc_str_t app_id, vsc_str_t identity, size_t issued_at, size_t expires_at) {

    vssc_jwt_payload_t *self = (vssc_jwt_payload_t *) vssc_alloc(sizeof (vssc_jwt_payload_t));
    VSSC_ASSERT_ALLOC(self);

    vssc_jwt_payload_init_with_members(self, app_id, identity, issued_at, expires_at);

    self->self_dealloc_cb = vssc_dealloc;

    return self;
}

//
//  Perform initialization of pre-allocated context.
//  Create JWT Payload defined with a JSON object.
//  Prerequisite: The JSON object SHOULD be already validated.
//
static void
vssc_jwt_payload_init_with_json_object(vssc_jwt_payload_t *self, json_object **json_obj_ref) {

    VSSC_ASSERT_PTR(self);

    vssc_zeroize(self, sizeof(vssc_jwt_payload_t));

    self->refcnt = 1;

    vssc_jwt_payload_init_ctx_with_json_object(self, json_obj_ref);
}

//
//  Allocate class context and perform it's initialization.
//  Create JWT Payload defined with a JSON object.
//  Prerequisite: The JSON object SHOULD be already validated.
//
static vssc_jwt_payload_t *
vssc_jwt_payload_new_with_json_object(json_object **json_obj_ref) {

    vssc_jwt_payload_t *self = (vssc_jwt_payload_t *) vssc_alloc(sizeof (vssc_jwt_payload_t));
    VSSC_ASSERT_ALLOC(self);

    vssc_jwt_payload_init_with_json_object(self, json_obj_ref);

    self->self_dealloc_cb = vssc_dealloc;

    return self;
}

//
//  Release all inner resources and deallocate context if needed.
//  It is safe to call this method even if the context was statically allocated.
//
VSSC_PUBLIC void
vssc_jwt_payload_delete(vssc_jwt_payload_t *self) {

    if (self == NULL) {
        return;
    }

    size_t old_counter = self->refcnt;
    VSSC_ASSERT(old_counter != 0);
    size_t new_counter = old_counter - 1;

    #if defined(VSSC_ATOMIC_COMPARE_EXCHANGE_WEAK)
    //  CAS loop
    while (!VSSC_ATOMIC_COMPARE_EXCHANGE_WEAK(&self->refcnt, &old_counter, new_counter)) {
        old_counter = self->refcnt;
        VSSC_ASSERT(old_counter != 0);
        new_counter = old_counter - 1;
    }
    #else
    self->refcnt = new_counter;
    #endif

    if (new_counter > 0) {
        return;
    }

    vssc_dealloc_fn self_dealloc_cb = self->self_dealloc_cb;

    vssc_jwt_payload_cleanup(self);

    if (self_dealloc_cb != NULL) {
        self_dealloc_cb(self);
    }
}

//
//  Delete given context and nullifies reference.
//  This is a reverse action of the function 'vssc_jwt_payload_new ()'.
//
VSSC_PUBLIC void
vssc_jwt_payload_destroy(vssc_jwt_payload_t **self_ref) {

    VSSC_ASSERT_PTR(self_ref);

    vssc_jwt_payload_t *self = *self_ref;
    *self_ref = NULL;

    vssc_jwt_payload_delete(self);
}

//
//  Copy given class context by increasing reference counter.
//
VSSC_PUBLIC vssc_jwt_payload_t *
vssc_jwt_payload_shallow_copy(vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);

    #if defined(VSSC_ATOMIC_COMPARE_EXCHANGE_WEAK)
    //  CAS loop
    size_t old_counter;
    size_t new_counter;
    do {
        old_counter = self->refcnt;
        new_counter = old_counter + 1;
    } while (!VSSC_ATOMIC_COMPARE_EXCHANGE_WEAK(&self->refcnt, &old_counter, new_counter));
    #else
    ++self->refcnt;
    #endif

    return self;
}


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


//
//  Perform context specific initialization.
//  Note, this method is called automatically when method vssc_jwt_payload_init() is called.
//  Note, that context is already zeroed.
//
static void
vssc_jwt_payload_init_ctx(vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT(0 && "The default constructor is forbidden.");
}

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vssc_jwt_payload_cleanup_ctx(vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);

    json_object_put(self->json_obj);
}

//
//  Create fully defined JWT Payload.
//
static void
vssc_jwt_payload_init_ctx_with_members(
        vssc_jwt_payload_t *self, vsc_str_t app_id, vsc_str_t identity, size_t issued_at, size_t expires_at) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT(vsc_str_is_valid(app_id));
    VSSC_ASSERT(vsc_str_is_valid(identity));

    const size_t k_json_value_prefix_app_id_len = strlen(k_json_value_prefix_app_id);
    const size_t app_id_str_len = k_json_value_prefix_app_id_len + app_id.len;

    const size_t k_json_value_prefix_identity_len = strlen(k_json_value_prefix_identity);
    const size_t identity_str_len = k_json_value_prefix_identity_len + identity.len;

    vsc_str_buffer_t *tmp_str = vsc_str_buffer_new_with_capacity(VSSC_MAX(app_id_str_len, identity_str_len));

    vsc_str_buffer_reset(tmp_str);
    vsc_str_buffer_write_str(tmp_str, vsc_str(k_json_value_prefix_app_id, k_json_value_prefix_app_id_len));
    vsc_str_buffer_write_str(tmp_str, app_id);
    vsc_str_t prefixed_app_id = vsc_str_buffer_str(tmp_str);
    json_object *app_id_obj = json_object_new_string_len(prefixed_app_id.chars, prefixed_app_id.len);
    VSSC_ASSERT_ALLOC(app_id_obj);

    vsc_str_buffer_reset(tmp_str);
    vsc_str_buffer_write_str(tmp_str, vsc_str(k_json_value_prefix_identity, k_json_value_prefix_identity_len));
    vsc_str_buffer_write_str(tmp_str, identity);
    vsc_str_t prefixed_identity = vsc_str_buffer_str(tmp_str);
    json_object *identity_obj = json_object_new_string_len(prefixed_identity.chars, prefixed_identity.len);
    VSSC_ASSERT_ALLOC(identity_obj);

    vsc_str_buffer_destroy(&tmp_str);

    json_object *issued_at_obj = json_object_new_int64((int64_t)issued_at);
    VSSC_ASSERT_ALLOC(issued_at_obj);

    json_object *expires_at_obj = json_object_new_int64((int64_t)expires_at);
    VSSC_ASSERT_ALLOC(expires_at_obj);

    json_object *root_obj = json_object_new_object();
    VSSC_ASSERT_ALLOC(root_obj);

    int result = 0;
    result = json_object_object_add_ex(root_obj, k_json_key_app_id, app_id_obj, JSON_C_OBJECT_KEY_IS_CONSTANT);
    VSSC_ASSERT_LIBRARY_JSON_C_SUCCESS(result);

    result = json_object_object_add_ex(root_obj, k_json_key_identity, identity_obj, JSON_C_OBJECT_KEY_IS_CONSTANT);
    VSSC_ASSERT_LIBRARY_JSON_C_SUCCESS(result);

    result = json_object_object_add_ex(root_obj, k_json_key_issued_at, issued_at_obj, JSON_C_OBJECT_KEY_IS_CONSTANT);
    VSSC_ASSERT_LIBRARY_JSON_C_SUCCESS(result);

    result = json_object_object_add_ex(root_obj, k_json_key_expires_at, expires_at_obj, JSON_C_OBJECT_KEY_IS_CONSTANT);
    VSSC_ASSERT_LIBRARY_JSON_C_SUCCESS(result);

    self->json_obj = root_obj;
}

//
//  Create JWT Payload defined with a JSON object.
//  Prerequisite: The JSON object SHOULD be already validated.
//
static void
vssc_jwt_payload_init_ctx_with_json_object(vssc_jwt_payload_t *self, json_object **json_obj_ref) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT_REF(json_obj_ref);

    self->json_obj = *json_obj_ref;
    *json_obj_ref = NULL;
}

//
//  Parse JWT Payload from a string representation.
//
VSSC_PUBLIC vssc_jwt_payload_t *
vssc_jwt_payload_parse(vsc_str_t payload_str, vssc_error_t *error) {

    VSSC_ASSERT(vsc_str_is_valid(payload_str));

    const size_t payload_json_str_len = vssc_base64_url_decoded_len(payload_str.len);
    vsc_buffer_t *payload_json_buff = vsc_buffer_new_with_capacity(payload_json_str_len);

    json_tokener *tokener = json_tokener_new();
    VSSC_ASSERT_ALLOC(tokener);

    json_object *json_obj = NULL;
    json_object *json_obj_curr = NULL; // SHOULD not be released.

    const vssc_status_t base64url_decode_status = vssc_base64_url_decode(payload_str, payload_json_buff);
    if (base64url_decode_status != vssc_status_SUCCESS) {
        goto fail;
    }

    vsc_data_t payload_json_data = vsc_buffer_data(payload_json_buff);
    json_obj = json_tokener_parse_ex(tokener, (const char *)payload_json_data.bytes, payload_json_data.len);
    if (NULL == json_obj) {
        goto fail;
    }

    if (!json_object_is_type(json_obj, json_type_object)) {
        goto fail;
    }

    json_obj_curr = NULL;
    if (!json_object_object_get_ex(json_obj, k_json_key_app_id, &json_obj_curr) ||
            !json_object_is_type(json_obj_curr, json_type_string)) {

        goto fail;
    }

    json_obj_curr = NULL;
    if (!json_object_object_get_ex(json_obj, k_json_key_identity, &json_obj_curr) ||
            !json_object_is_type(json_obj_curr, json_type_string)) {

        goto fail;
    }

    json_obj_curr = NULL;
    if (!json_object_object_get_ex(json_obj, k_json_key_issued_at, &json_obj_curr) ||
            !json_object_is_type(json_obj_curr, json_type_int) || json_object_get_int64(json_obj_curr) < 0 ||
            (uint64_t)json_object_get_int64(json_obj_curr) > (uint64_t)SIZE_MAX) {

        goto fail;
    }

    json_obj_curr = NULL;
    if (!json_object_object_get_ex(json_obj, k_json_key_expires_at, &json_obj_curr) ||
            !json_object_is_type(json_obj_curr, json_type_int) || json_object_get_int64(json_obj_curr) < 0 ||
            (uint64_t)json_object_get_int64(json_obj_curr) > (uint64_t)SIZE_MAX) {

        goto fail;
    }

    goto succ;

fail:
    if (json_obj) {
        json_object_put(json_obj);
        json_obj = NULL;
    }

    VSSC_ERROR_SAFE_UPDATE(error, vssc_status_PARSE_JWT_FAILED);

succ:
    vsc_buffer_destroy(&payload_json_buff);
    json_tokener_free(tokener);

    if (json_obj) {
        return vssc_jwt_payload_new_with_json_object(&json_obj);
    } else {
        return NULL;
    }
}

//
//  Return lengh for buffer that can hold JWT Payload string representation.
//
VSSC_PUBLIC size_t
vssc_jwt_payload_as_string_len(const vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);

    vsc_str_t json_str = vssc_jwt_payload_as_json_string(self);

    return vssc_base64_url_encoded_len(json_str.len);
}

//
//  Return JWT Payload string representation.
//  Representations is base64url.encode(json).
//
VSSC_PUBLIC void
vssc_jwt_payload_as_string(const vssc_jwt_payload_t *self, vsc_str_buffer_t *str_buffer) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT(vsc_str_buffer_is_valid(str_buffer));
    VSSC_ASSERT(vsc_str_buffer_unused_len(str_buffer) >= vssc_jwt_payload_as_string_len(self));

    vsc_str_t json_str = vssc_jwt_payload_as_json_string(self);

    vssc_base64_url_encode(vsc_str_as_data(json_str), str_buffer);
}

//
//  Return JWT Payload as JSON string.
//
VSSC_PRIVATE vsc_str_t
vssc_jwt_payload_as_json_string(const vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);

    size_t json_len = 0;

    const char *json_chars = json_object_to_json_string_length(self->json_obj, JSON_C_TO_STRING_PLAIN, &json_len);
    VSSC_ASSERT_ALLOC(json_chars);

    return vsc_str(json_chars, json_len);
}

//
//  Issuer application id.
//
VSSC_PUBLIC vsc_str_t
vssc_jwt_payload_app_id(const vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT_PTR(self->json_obj);

    json_object *inner_obj = NULL;

    const json_bool is_exist = json_object_object_get_ex(self->json_obj, k_json_key_app_id, &inner_obj);
    VSSC_ASSERT(is_exist);
    VSSC_ASSERT(json_object_is_type(inner_obj, json_type_string));

    vsc_str_t result = vsc_str(json_object_get_string(inner_obj), json_object_get_string_len(inner_obj));

    vsc_str_t prefix_str = vsc_str(k_json_value_prefix_app_id, strlen(k_json_value_prefix_app_id));

    return vsc_str_trim_prefix(result, prefix_str);

    return result;
}

//
//  Return identity to whom this token was issued.
//
VSSC_PUBLIC vsc_str_t
vssc_jwt_payload_identity(const vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT_PTR(self->json_obj);

    json_object *inner_obj = NULL;

    const json_bool is_exist = json_object_object_get_ex(self->json_obj, k_json_key_identity, &inner_obj);
    VSSC_ASSERT(is_exist);
    VSSC_ASSERT(json_object_is_type(inner_obj, json_type_string));

    vsc_str_t result = vsc_str(json_object_get_string(inner_obj), json_object_get_string_len(inner_obj));

    vsc_str_t prefix_str = vsc_str(k_json_value_prefix_identity, strlen(k_json_value_prefix_identity));

    return vsc_str_trim_prefix(result, prefix_str);
}

//
//  Return UNIX Timestamp in seconds with issued date.
//
VSSC_PUBLIC size_t
vssc_jwt_payload_issued_at(vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT_PTR(self->json_obj);

    json_object *inner_obj = NULL;

    const json_bool is_exist = json_object_object_get_ex(self->json_obj, k_json_key_issued_at, &inner_obj);
    VSSC_ASSERT(is_exist);
    VSSC_ASSERT(json_object_is_type(inner_obj, json_type_int));

    int64_t result = json_object_get_int64(inner_obj);
    VSSC_ASSERT(result >= 0 && (uint64_t)result <= (uint64_t)SIZE_MAX);

    return (size_t)result;
}

//
//  Return UNIX Timestamp in seconds with expiration date.
//
VSSC_PUBLIC size_t
vssc_jwt_payload_expires_at(vssc_jwt_payload_t *self) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT_PTR(self->json_obj);

    json_object *inner_obj = NULL;

    const json_bool is_exist = json_object_object_get_ex(self->json_obj, k_json_key_expires_at, &inner_obj);
    VSSC_ASSERT(is_exist);
    VSSC_ASSERT(json_object_is_type(inner_obj, json_type_int));

    int64_t result = json_object_get_int64(inner_obj);
    VSSC_ASSERT(result >= 0 && (uint64_t)result <= (uint64_t)SIZE_MAX);

    return (size_t)result;
}
