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

package foundation

import (
    b64 "encoding/base64"
    "github.com/stretchr/testify/assert"
    "testing"
)

func TestNewSha256(t *testing.T) {
    sha := NewSha256()

    assert.NotNil(t, sha)
}

func TestSha256_AlgId(t *testing.T) {
    sha := NewSha256()
    algId := sha.AlgId()

    assert.NotNil(t, algId)
    assert.Equal(t, ALG_ID_SHA256, algId)
}

func TestSha256_GetDigestLen(t *testing.T) {
    sha := NewSha256()

    assert.Equal(t, TEST_SHA256_DIGEST_LEN, sha.GetDigestLen())
}

func TestSha256_Hash(t *testing.T) {
    data, _ := b64.StdEncoding.DecodeString(TEST_DATA)
    expectedHash, _ := b64.StdEncoding.DecodeString(TEST_SHA256_HASH)

    sha := NewSha256()
    hash := sha.Hash(data)

    assert.NotNil(t, hash)
    assert.Equal(t, len(expectedHash), len(hash))
    assert.Equal(t, expectedHash, hash)
}

func TestSha256_Hash_Stream(t *testing.T) {
    data, _ := b64.StdEncoding.DecodeString(TEST_DATA)
    expectedHash, _ := b64.StdEncoding.DecodeString(TEST_SHA256_HASH)

    sha := NewSha256()
    sha.Start()
    blockLen := int(sha.GetBlockLen())
    startIndex := 0
    for ;startIndex < len(data);  {
        endIndex := startIndex + blockLen
        block := data[startIndex : endIndex]
        sha.Update(block)

        startIndex += endIndex
    }

    hash := sha.Finish()

    assert.NotNil(t, hash)
    assert.Equal(t, len(expectedHash), len(hash))
    assert.Equal(t, expectedHash, hash)
}

func TestSha256_ProduceAlgInfo(t *testing.T) {
    sha := NewSha256()
    algInfo, err := sha.ProduceAlgInfo()
    assert.Nil(t, err)
    assert.NotNil(t, algInfo)
    assert.Equal(t, ALG_ID_SHA256, algInfo.AlgId())
}
