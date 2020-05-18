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
//  Class that handles JWT.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vscs_core_jwt.h"
#include "vscs_core_memory.h"
#include "vscs_core_assert.h"
#include "vscs_core_jwt_defs.h"

// clang-format on
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Perform context specific initialization.
//  Note, this method is called automatically when method vscs_core_jwt_init() is called.
//  Note, that context is already zeroed.
//
static void
vscs_core_jwt_init_ctx(vscs_core_jwt_t *self);

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vscs_core_jwt_cleanup_ctx(vscs_core_jwt_t *self);

//
//  Build JWT from it's parts.
//
static void
vscs_core_jwt_init_ctx_with_members_disown(vscs_core_jwt_t *self, vscs_core_jwt_header_t **header_ref,
        vscs_core_jwt_payload_t **payload_ref, vscs_core_jwt_payload_t **signature_ref);

//
//  Return size of 'vscs_core_jwt_t'.
//
VSCS_CORE_PUBLIC size_t
vscs_core_jwt_ctx_size(void) {

    return sizeof(vscs_core_jwt_t);
}

//
//  Perform initialization of pre-allocated context.
//
VSCS_CORE_PUBLIC void
vscs_core_jwt_init(vscs_core_jwt_t *self) {

    VSCS_CORE_ASSERT_PTR(self);

    vscs_core_zeroize(self, sizeof(vscs_core_jwt_t));

    self->refcnt = 1;

    vscs_core_jwt_init_ctx(self);
}

//
//  Release all inner resources including class dependencies.
//
VSCS_CORE_PUBLIC void
vscs_core_jwt_cleanup(vscs_core_jwt_t *self) {

    if (self == NULL) {
        return;
    }

    vscs_core_jwt_cleanup_ctx(self);

    vscs_core_zeroize(self, sizeof(vscs_core_jwt_t));
}

//
//  Allocate context and perform it's initialization.
//
VSCS_CORE_PUBLIC vscs_core_jwt_t *
vscs_core_jwt_new(void) {

    vscs_core_jwt_t *self = (vscs_core_jwt_t *) vscs_core_alloc(sizeof (vscs_core_jwt_t));
    VSCS_CORE_ASSERT_ALLOC(self);

    vscs_core_jwt_init(self);

    self->self_dealloc_cb = vscs_core_dealloc;

    return self;
}

//
//  Perform initialization of pre-allocated context.
//  Build JWT from it's parts.
//
VSCS_CORE_PRIVATE void
vscs_core_jwt_init_with_members_disown(vscs_core_jwt_t *self, vscs_core_jwt_header_t **header_ref,
        vscs_core_jwt_payload_t **payload_ref, vscs_core_jwt_payload_t **signature_ref) {

    VSCS_CORE_ASSERT_PTR(self);

    vscs_core_zeroize(self, sizeof(vscs_core_jwt_t));

    self->refcnt = 1;

    vscs_core_jwt_init_ctx_with_members_disown(self, header_ref, payload_ref, signature_ref);
}

//
//  Allocate class context and perform it's initialization.
//  Build JWT from it's parts.
//
VSCS_CORE_PRIVATE vscs_core_jwt_t *
vscs_core_jwt_new_with_members_disown(vscs_core_jwt_header_t **header_ref, vscs_core_jwt_payload_t **payload_ref,
        vscs_core_jwt_payload_t **signature_ref) {

    vscs_core_jwt_t *self = (vscs_core_jwt_t *) vscs_core_alloc(sizeof (vscs_core_jwt_t));
    VSCS_CORE_ASSERT_ALLOC(self);

    vscs_core_jwt_init_with_members_disown(self, header_ref, payload_ref, signature_ref);

    self->self_dealloc_cb = vscs_core_dealloc;

    return self;
}

//
//  Release all inner resources and deallocate context if needed.
//  It is safe to call this method even if the context was statically allocated.
//
VSCS_CORE_PUBLIC void
vscs_core_jwt_delete(vscs_core_jwt_t *self) {

    if (self == NULL) {
        return;
    }

    size_t old_counter = self->refcnt;
    VSCS_CORE_ASSERT(old_counter != 0);
    size_t new_counter = old_counter - 1;

    #if defined(VSCS_CORE_ATOMIC_COMPARE_EXCHANGE_WEAK)
    //  CAS loop
    while (!VSCS_CORE_ATOMIC_COMPARE_EXCHANGE_WEAK(&self->refcnt, &old_counter, new_counter)) {
        old_counter = self->refcnt;
        VSCS_CORE_ASSERT(old_counter != 0);
        new_counter = old_counter - 1;
    }
    #else
    self->refcnt = new_counter;
    #endif

    if (new_counter > 0) {
        return;
    }

    vscs_core_dealloc_fn self_dealloc_cb = self->self_dealloc_cb;

    vscs_core_jwt_cleanup(self);

    if (self_dealloc_cb != NULL) {
        self_dealloc_cb(self);
    }
}

//
//  Delete given context and nullifies reference.
//  This is a reverse action of the function 'vscs_core_jwt_new ()'.
//
VSCS_CORE_PUBLIC void
vscs_core_jwt_destroy(vscs_core_jwt_t **self_ref) {

    VSCS_CORE_ASSERT_PTR(self_ref);

    vscs_core_jwt_t *self = *self_ref;
    *self_ref = NULL;

    vscs_core_jwt_delete(self);
}

//
//  Copy given class context by increasing reference counter.
//
VSCS_CORE_PUBLIC vscs_core_jwt_t *
vscs_core_jwt_shallow_copy(vscs_core_jwt_t *self) {

    VSCS_CORE_ASSERT_PTR(self);

    #if defined(VSCS_CORE_ATOMIC_COMPARE_EXCHANGE_WEAK)
    //  CAS loop
    size_t old_counter;
    size_t new_counter;
    do {
        old_counter = self->refcnt;
        new_counter = old_counter + 1;
    } while (!VSCS_CORE_ATOMIC_COMPARE_EXCHANGE_WEAK(&self->refcnt, &old_counter, new_counter));
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
//  Note, this method is called automatically when method vscs_core_jwt_init() is called.
//  Note, that context is already zeroed.
//
static void
vscs_core_jwt_init_ctx(vscs_core_jwt_t *self) {

    VSCS_CORE_ASSERT_PTR(self);
}

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vscs_core_jwt_cleanup_ctx(vscs_core_jwt_t *self) {

    VSCS_CORE_ASSERT_PTR(self);

    vscs_core_jwt_header_destroy(&self->header);
    vscs_core_jwt_payload_destroy(&self->payload);
    vscs_core_jwt_payload_destroy(&self->signature);
}

//
//  Build JWT from it's parts.
//
static void
vscs_core_jwt_init_ctx_with_members_disown(vscs_core_jwt_t *self, vscs_core_jwt_header_t **header_ref,
        vscs_core_jwt_payload_t **payload_ref, vscs_core_jwt_payload_t **signature_ref) {

    //   TODO: Perform initialization.
}

//
//  Return length for JWT string representation buffer.
//
VSCS_CORE_PUBLIC void
vscs_core_jwt_as_string_len(const vscs_core_jwt_t *self) {

    //  TODO: This is STUB. Implement me.
}

//
//  Return JWT string representation.
//
VSCS_CORE_PUBLIC void
vscs_core_jwt_as_string(const vscs_core_jwt_t *self, vsc_str_buffer_t *str_buffer) {

    //  TODO: This is STUB. Implement me.
}