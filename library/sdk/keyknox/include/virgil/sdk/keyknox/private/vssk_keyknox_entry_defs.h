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


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------


//  @description
// --------------------------------------------------------------------------
//  Class 'keyknox entry' types definition.
// --------------------------------------------------------------------------

#ifndef VSSK_KEYKNOX_ENTRY_DEFS_H_INCLUDED
#define VSSK_KEYKNOX_ENTRY_DEFS_H_INCLUDED

#include "vssk_library.h"
#include "vssk_atomic.h"

#if !VSSK_IMPORT_PROJECT_COMMON_FROM_FRAMEWORK
#   include <virgil/crypto/common/vsc_str_mutable.h>
#   include <virgil/crypto/common/vsc_buffer.h>
#endif

#if !VSSK_IMPORT_PROJECT_CORE_SDK_FROM_FRAMEWORK
#   include <virgil/sdk/core/vssc_string_list.h>
#endif

#if VSSK_IMPORT_PROJECT_COMMON_FROM_FRAMEWORK
#   include <VSCCommon/vsc_buffer.h>
#   include <VSCCommon/vsc_str_mutable.h>
#endif

#if VSSK_IMPORT_PROJECT_CORE_SDK_FROM_FRAMEWORK
#   include <VSSC/vssc_string_list.h>
#endif

// clang-format on
//  @end


#ifdef __cplusplus
extern "C" {
#endif


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Handle 'keyknox entry' context.
//
struct vssk_keyknox_entry_t {
    //
    //  Function do deallocate self context.
    //
    vssk_dealloc_fn self_dealloc_cb;
    //
    //  Reference counter.
    //
    VSSK_ATOMIC size_t refcnt;

    vsc_str_mutable_t owner;

    vsc_str_mutable_t root;

    vsc_str_mutable_t path;

    vsc_str_mutable_t key;

    const vssc_string_list_t *identities;

    vsc_buffer_t *meta;

    vsc_buffer_t *value;

    vsc_buffer_t *hash;
};


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


#ifdef __cplusplus
}
#endif


//  @footer
#endif // VSSK_KEYKNOX_ENTRY_DEFS_H_INCLUDED
//  @end