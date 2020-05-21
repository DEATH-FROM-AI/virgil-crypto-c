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
//  Light version of the class "str  buffer".
//
//  Note, this class might be used to store copied strings within objects.
//  Note, this class' ownership can not be retained.
//  Note, this class can not be used as part of any public interface.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vsc_str_mutable.h"
#include "vsc_memory.h"
#include "vsc_assert.h"

// clang-format on
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Return size of 'vsc_str_mutable_t'.
//
VSC_PUBLIC size_t
vsc_str_mutable_ctx_size(void) {

    return sizeof(vsc_str_mutable_t);
}


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


//
//  Create a mutable string by copying a given string.
//
VSC_PUBLIC vsc_str_mutable_t
vsc_str_mutable_from_str(vsc_str_t str) {

    VSC_ASSERT(vsc_str_is_valid(str));

    if (0 == str.len) {
        return (vsc_str_mutable_t){NULL, 0};
    }

    char *chars_copy = vsc_alloc(str.len);
    VSC_ASSERT_ALLOC(chars_copy);

    memcpy(chars_copy, str.chars, str.len);

    return (vsc_str_mutable_t){chars_copy, str.len};
}

//
//  Returns immutable str.
//
VSC_PUBLIC vsc_str_t
vsc_str_mutable_as_str(vsc_str_mutable_t self) {

    if (NULL == self.chars) {
        return vsc_str_empty();
    }

    return vsc_str(self.chars, self.len);
}

//
//  Init underlying structure.
//
VSC_PUBLIC void
vsc_str_mutable_init(vsc_str_mutable_t *self) {

    VSC_ASSERT_PTR(self);

    vsc_erase(self, sizeof(vsc_str_mutable_t));
}

//
//  Deallocate underlying string.
//
VSC_PUBLIC void
vsc_str_mutable_release(vsc_str_mutable_t *self) {

    if (NULL == self || NULL == self->chars) {
        return;
    }

    vsc_dealloc(self->chars);
    vsc_erase(self, sizeof(vsc_str_mutable_t));
}
