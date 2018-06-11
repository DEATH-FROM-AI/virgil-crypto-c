//  @license
// --------------------------------------------------------------------------
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
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------


//  @description
// --------------------------------------------------------------------------
//  Encapsulates fixed byte array with variable effective data length.
// --------------------------------------------------------------------------

#ifndef VSC_BUFFER_H_INCLUDED
#define VSC_BUFFER_H_INCLUDED

#include "vsc_library.h"
#include "vsc_error.h"
#include "vsc_data.h"
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
//  Handle 'buffer' context.
//
typedef struct vsc_buffer_t vsc_buffer_t;

//
//  Perform initialization of pre-allocated context.
//
VSC_PUBLIC vsc_error_t
vsc_buffer_init(vsc_buffer_t* buffer_ctx);

//
//  Release all inner resources.
//
VSC_PUBLIC void
vsc_buffer_cleanup(vsc_buffer_t* buffer_ctx);

//
//  Allocate context and perform it's initialization.
//
VSC_PUBLIC vsc_buffer_t*
vsc_buffer_new(void);

//
//  Release all inner resorces and deallocate context if needed.
//  It is safe to call this method even if context was allocated by the caller.
//
VSC_PUBLIC void
vsc_buffer_delete(vsc_buffer_t* buffer_ctx);

//
//  Delete given context and nullifies reference.
//  This is a reverse action of the function 'vsc_buffer_new ()'.
//
VSC_PUBLIC void
vsc_buffer_destroy(vsc_buffer_t** buffer_ctx_ref);

//
//  Allocates inner buffer with a given capacity.
//  Precondition: buffer is initialized.
//  Precondition: buffer does not hold any bytes.
//
VSC_PUBLIC vsc_error_t
vsc_buffer_alloc(vsc_buffer_t* buffer_ctx, size_t capacity);

//
//  Use given data as output buffer.
//  Client side is responsible for data deallocation.
//  Precondition: buffer is initialized.
//  Precondition: buffer does not hold any bytes.
//
VSC_PUBLIC void
vsc_buffer_use(vsc_buffer_t* buffer_ctx, byte* bytes, size_t bytes_len);

//
//  Use given data as output buffer.
//  Buffer is responsible for data deallocation.
//  Precondition: buffer is initialized.
//  Precondition: buffer does not hold any bytes.
//
VSC_PUBLIC void
vsc_buffer_take(vsc_buffer_t* buffer_ctx, byte* bytes, size_t bytes_len, vsc_dealloc_fn dealloc_cb);

//
//  Returns underlying buffer bytes.
//
VSC_PUBLIC const byte*
vsc_buffer_bytes(vsc_buffer_t* buffer_ctx);

//
//  Returns underlying buffer bytes as object.
//
VSC_PUBLIC vsc_data_t
vsc_buffer_data(vsc_buffer_t* buffer_ctx);

//
//  Returns buffer capacity.
//
VSC_PUBLIC size_t
vsc_buffer_capacity(vsc_buffer_t* buffer_ctx);

//
//  Returns buffer length - length of bytes actually used.
//
VSC_PUBLIC size_t
vsc_buffer_len(vsc_buffer_t* buffer_ctx);


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


#ifdef __cplusplus
}
#endif


//  @footer
#endif // VSC_BUFFER_H_INCLUDED
//  @end