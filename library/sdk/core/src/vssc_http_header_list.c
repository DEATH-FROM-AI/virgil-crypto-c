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
//  Handles a list of "http header" class objects.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vssc_http_header_list.h"
#include "vssc_memory.h"
#include "vssc_assert.h"
#include "vssc_http_header_list_defs.h"

// clang-format on
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Perform context specific initialization.
//  Note, this method is called automatically when method vssc_http_header_list_init() is called.
//  Note, that context is already zeroed.
//
static void
vssc_http_header_list_init_ctx(vssc_http_header_list_t *self);

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vssc_http_header_list_cleanup_ctx(vssc_http_header_list_t *self);

//
//  Return size of 'vssc_http_header_list_t'.
//
VSSC_PUBLIC size_t
vssc_http_header_list_ctx_size(void) {

    return sizeof(vssc_http_header_list_t);
}

//
//  Perform initialization of pre-allocated context.
//
VSSC_PUBLIC void
vssc_http_header_list_init(vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    vssc_zeroize(self, sizeof(vssc_http_header_list_t));

    self->refcnt = 1;

    vssc_http_header_list_init_ctx(self);
}

//
//  Release all inner resources including class dependencies.
//
VSSC_PUBLIC void
vssc_http_header_list_cleanup(vssc_http_header_list_t *self) {

    if (self == NULL) {
        return;
    }

    vssc_http_header_list_cleanup_ctx(self);

    vssc_zeroize(self, sizeof(vssc_http_header_list_t));
}

//
//  Allocate context and perform it's initialization.
//
VSSC_PUBLIC vssc_http_header_list_t *
vssc_http_header_list_new(void) {

    vssc_http_header_list_t *self = (vssc_http_header_list_t *) vssc_alloc(sizeof (vssc_http_header_list_t));
    VSSC_ASSERT_ALLOC(self);

    vssc_http_header_list_init(self);

    self->self_dealloc_cb = vssc_dealloc;

    return self;
}

//
//  Release all inner resources and deallocate context if needed.
//  It is safe to call this method even if the context was statically allocated.
//
VSSC_PUBLIC void
vssc_http_header_list_delete(vssc_http_header_list_t *self) {

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

    vssc_http_header_list_cleanup(self);

    if (self_dealloc_cb != NULL) {
        self_dealloc_cb(self);
    }
}

//
//  Delete given context and nullifies reference.
//  This is a reverse action of the function 'vssc_http_header_list_new ()'.
//
VSSC_PUBLIC void
vssc_http_header_list_destroy(vssc_http_header_list_t **self_ref) {

    VSSC_ASSERT_PTR(self_ref);

    vssc_http_header_list_t *self = *self_ref;
    *self_ref = NULL;

    vssc_http_header_list_delete(self);
}

//
//  Copy given class context by increasing reference counter.
//
VSSC_PUBLIC vssc_http_header_list_t *
vssc_http_header_list_shallow_copy(vssc_http_header_list_t *self) {

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
//  Note, this method is called automatically when method vssc_http_header_list_init() is called.
//  Note, that context is already zeroed.
//
static void
vssc_http_header_list_init_ctx(vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);
}

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vssc_http_header_list_cleanup_ctx(vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    vssc_http_header_destroy(&self->item);
    vssc_http_header_list_destroy(&self->next);
}

//
//  Add new item to the list.
//  Note, ownership is transfered.
//
VSSC_PRIVATE void
vssc_http_header_list_add(vssc_http_header_list_t *self, vssc_http_header_t **http_header_ref) {

    VSSC_ASSERT_PTR(self);
    VSSC_ASSERT_PTR(http_header_ref);
    VSSC_ASSERT_PTR(*http_header_ref);

    if (NULL == self->item) {
        self->item = *http_header_ref;
        *http_header_ref = NULL;
    } else {
        if (NULL == self->next) {
            self->next = vssc_http_header_list_new();
            self->next->prev = self;
        }
        vssc_http_header_list_add(self->next, http_header_ref);
    }
}

//
//  Remove current node.
//
VSSC_PRIVATE void
vssc_http_header_list_remove_self(vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    vssc_http_header_destroy(&self->item);
    if (self->next) {
        vssc_http_header_list_t *next = self->next;
        self->item = next->item;
        self->next = next->next;
        next->next = NULL; //  prevent chain destruction
        next->item = NULL;
        next->prev = NULL;
        vssc_http_header_list_destroy(&next);
    }
}

//
//  Return true if given list has item.
//
VSSC_PUBLIC bool
vssc_http_header_list_has_item(const vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    return self->item != NULL;
}

//
//  Return list item.
//
VSSC_PUBLIC const vssc_http_header_t *
vssc_http_header_list_item(const vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    return self->item;
}

//
//  Return true if list has next item.
//
VSSC_PUBLIC bool
vssc_http_header_list_has_next(const vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    return self->next != NULL;
}

//
//  Return next list node if exists, or NULL otherwise.
//
VSSC_PUBLIC const vssc_http_header_list_t *
vssc_http_header_list_next(const vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    return self->next;
}

//
//  Return true if list has previous item.
//
VSSC_PUBLIC bool
vssc_http_header_list_has_prev(const vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    return self->prev != NULL;
}

//
//  Return previous list node if exists, or NULL otherwise.
//
VSSC_PUBLIC const vssc_http_header_list_t *
vssc_http_header_list_prev(const vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    return self->prev;
}

//
//  Remove all items.
//
VSSC_PUBLIC void
vssc_http_header_list_clear(vssc_http_header_list_t *self) {

    VSSC_ASSERT_PTR(self);

    vssc_http_header_destroy(&self->item);
    vssc_http_header_list_destroy(&self->next);
}