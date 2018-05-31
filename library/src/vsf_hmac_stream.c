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


//  @description
// --------------------------------------------------------------------------
//  Provides interface to the hmac (messege digest) algorithms.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vsf_hmac_stream.h"
#include "vsf_assert.h"
#include "vsf_hmac_stream_api.h"
//  @end


//  @generated
// --------------------------------------------------------------------------
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Reset HMAC.
//
VSF_PUBLIC void
vsf_hmac_stream_reset (vsf_impl_t* impl) {

    const vsf_hmac_stream_api_t *hmac_stream_api = vsf_hmac_stream_api (impl);
    VSF_ASSERT_PTR (hmac_stream_api);

    VSF_ASSERT_PTR (hmac_stream_api->reset_cb);
    hmac_stream_api->reset_cb (impl);
}

//
//  Start a new HMAC.
//
VSF_PUBLIC void
vsf_hmac_stream_start (vsf_impl_t* impl, const byte* key, size_t key_len) {

    const vsf_hmac_stream_api_t *hmac_stream_api = vsf_hmac_stream_api (impl);
    VSF_ASSERT_PTR (hmac_stream_api);

    VSF_ASSERT_PTR (hmac_stream_api->start_cb);
    hmac_stream_api->start_cb (impl, key, key_len);
}

//
//  Add given data to the HMAC.
//
VSF_PUBLIC void
vsf_hmac_stream_update (vsf_impl_t* impl, const byte* data, size_t data_len) {

    const vsf_hmac_stream_api_t *hmac_stream_api = vsf_hmac_stream_api (impl);
    VSF_ASSERT_PTR (hmac_stream_api);

    VSF_ASSERT_PTR (hmac_stream_api->update_cb);
    hmac_stream_api->update_cb (impl, data, data_len);
}

//
//  Accompilsh HMAC and return it's result (a message digest).
//
VSF_PUBLIC void
vsf_hmac_stream_finish (vsf_impl_t* impl, byte* hmac, size_t hmac_len) {

    const vsf_hmac_stream_api_t *hmac_stream_api = vsf_hmac_stream_api (impl);
    VSF_ASSERT_PTR (hmac_stream_api);

    VSF_ASSERT_PTR (hmac_stream_api->finish_cb);
    hmac_stream_api->finish_cb (impl, hmac, hmac_len);
}

//
//  Return hmac stream API, or NULL if it is not implemented.
//
VSF_PUBLIC const vsf_hmac_stream_api_t*
vsf_hmac_stream_api (vsf_impl_t* impl) {

    VSF_ASSERT_PTR (impl);

    const vsf_api_t *api = vsf_impl_api (impl, vsf_api_tag_HMAC_STREAM);
    return (const vsf_hmac_stream_api_t *) api;
}

//
//  Check if given object implements interface 'hmac stream'.
//
VSF_PUBLIC bool
vsf_hmac_stream_is_implemented (vsf_impl_t* impl) {

    VSF_ASSERT_PTR (impl);

    return vsf_impl_api (impl, vsf_api_tag_HMAC_STREAM) != NULL;
}


// --------------------------------------------------------------------------
//  Generated section end.
// --------------------------------------------------------------------------
//  @end
