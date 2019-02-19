#   @license
#   -------------------------------------------------------------------------
#   Copyright (C) 2015-2019 Virgil Security, Inc.
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

option(VSCF_LIBRARY "Enable build of the 'foundation' library" ON)
option(VSCF_MULTI_THREAD "Enable multi-threading safety for foundation library." ON)
option(VSCF_DEFAULTS "Enable interface 'defaults'." ON)
option(VSCF_HASH "Enable interface 'hash'." ON)
option(VSCF_ALG "Enable interface 'alg'." ON)
option(VSCF_SHA256_IOTELIC "Enable implementation 'sha256_iotelic'." ON)
option(VSCF_ERROR_CTX "Enable class 'error ctx'." ON)
mark_as_advanced(
        VSCF_LIBRARY
        VSCF_MULTI_THREAD
        VSCF_DEFAULTS
        VSCF_HASH
        VSCF_ALG
        VSCF_SHA256_IOTELIC
        VSCF_ERROR_CTX
        )
