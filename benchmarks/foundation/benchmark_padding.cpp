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


#include "benchmark/benchmark.h"

#include "vscf_memory.h"
#include "vscf_random_padding.h"
#include "vscf_padding_cipher.h"
#include "vscf_aes256_gcm.h"
#include "vscf_fake_random.h"
#include "vscf_padding_params.h"

#include "benchmark_data.h"

static const size_t chunk_size = 32;

void
bench_encrypt__1kb_chunked_by_32_bytes_with_aes256_gcm(benchmark::State &state) {
    vscf_aes256_gcm_t *aes256_gcm = vscf_aes256_gcm_new();

    vsc_buffer_t *out = vsc_buffer_new_with_capacity(
            vscf_aes256_gcm_encrypted_len(aes256_gcm, bench_data_padding_cipher_PLAINTEXT_1024_ZERO_BYTES.len));

    vscf_aes256_gcm_set_key(aes256_gcm, bench_data_padding_cipher_AES256_KEY);
    vscf_aes256_gcm_set_nonce(aes256_gcm, bench_data_padding_cipher_AES256_NONCE);

    for (auto _ : state) {
        vscf_aes256_gcm_start_encryption(aes256_gcm);

        for (int i = 0; i < bench_data_padding_cipher_PLAINTEXT_1024_ZERO_BYTES.len; i += chunk_size) {
            size_t current_chunk_size = chunk_size;
            if (i + current_chunk_size > bench_data_padding_cipher_PLAINTEXT_1024_ZERO_BYTES.len) {
                current_chunk_size = bench_data_padding_cipher_PLAINTEXT_1024_ZERO_BYTES.len - i;
            }

            vscf_aes256_gcm_update(aes256_gcm,
                    vsc_data_slice_beg(bench_data_padding_cipher_PLAINTEXT_1024_ZERO_BYTES, i, current_chunk_size),
                    out);
        }

        vscf_aes256_gcm_finish(aes256_gcm, out);
        vsc_buffer_reset(out);
    }
    vscf_aes256_gcm_destroy(&aes256_gcm);
    vsc_buffer_destroy(&out);
}

void
bench_decrypt__1kb_chunked_by_32_bytes_with_aes256_gcm(benchmark::State &state) {
    vscf_aes256_gcm_t *aes256_gcm = vscf_aes256_gcm_new();

    vsc_buffer_t *out = vsc_buffer_new_with_capacity(
            vscf_aes256_gcm_decrypted_len(aes256_gcm, bench_data_padding_cipher_ENCRYPTED_1024_ZERO_BYTES.len));

    vscf_aes256_gcm_set_key(aes256_gcm, bench_data_padding_cipher_AES256_KEY);
    vscf_aes256_gcm_set_nonce(aes256_gcm, bench_data_padding_cipher_AES256_NONCE);

    for (auto _ : state) {
        vscf_aes256_gcm_start_decryption(aes256_gcm);
        for (int i = 0; i < bench_data_padding_cipher_ENCRYPTED_1024_ZERO_BYTES.len; i += chunk_size) {
            size_t current_chunk_size = chunk_size;
            if (i + current_chunk_size > bench_data_padding_cipher_PLAINTEXT_1024_ZERO_BYTES.len) {
                current_chunk_size = bench_data_padding_cipher_PLAINTEXT_1024_ZERO_BYTES.len - i;
            }

            vscf_aes256_gcm_update(aes256_gcm,
                    vsc_data_slice_beg(bench_data_padding_cipher_ENCRYPTED_1024_ZERO_BYTES, i, current_chunk_size),
                    out);
        }
        vscf_aes256_gcm_finish(aes256_gcm, out);
        vsc_buffer_reset(out);
    }

    vscf_aes256_gcm_destroy(&aes256_gcm);
    vsc_buffer_destroy(&out);
}


void
bench_encrypt__1kb_chunked_by_32_bytes_with_pading_cipher_random_padding_and_aes256_gcm(benchmark::State &state) {
    vscf_fake_random_t *fake_random = vscf_fake_random_new();
    vscf_fake_random_setup_source_byte(fake_random, 0xAB);

    vscf_random_padding_t *padding = vscf_random_padding_new();
    vscf_random_padding_take_random(padding, vscf_fake_random_impl(fake_random));

    vscf_random_padding_configure(padding, vscf_padding_params_new_with_constraints(32, 32, 32));

    vscf_aes256_gcm_t *cipher = vscf_aes256_gcm_new();
    vscf_aes256_gcm_set_nonce(cipher, bench_data_padding_cipher_AES256_NONCE);
    vscf_aes256_gcm_set_key(cipher, bench_data_padding_cipher_AES256_KEY);

    vscf_padding_cipher_t *padding_cipher = vscf_padding_cipher_new();
    vscf_padding_cipher_take_padding(padding_cipher, vscf_random_padding_impl(padding));
    vscf_padding_cipher_take_cipher(padding_cipher, vscf_aes256_gcm_impl(cipher));


    for (auto _ : state) {
        vscf_padding_cipher_start_encryption(padding_cipher);

        const size_t out_len =
                vscf_padding_cipher_out_len(padding_cipher, bench_data_padding_cipher_ENCRYPTED_1024_ZERO_BYTES.len) +
                vscf_padding_cipher_out_len(padding_cipher, 0);
        vsc_buffer_t *out = vsc_buffer_new_with_capacity(out_len);

        vscf_padding_cipher_update(padding_cipher, bench_data_padding_cipher_ENCRYPTED_1024_ZERO_BYTES, out);
        vscf_padding_cipher_finish(padding_cipher, out);

        vsc_buffer_reset(out);
    }

    vscf_padding_cipher_destroy(&padding_cipher);
}

void
bench_decrypt__1kb_chunked_by_32_bytes_with_pading_cipher_random_padding_and_aes256_gcm(benchmark::State &state) {
    vscf_fake_random_t *fake_random = vscf_fake_random_new();
    vscf_fake_random_setup_source_byte(fake_random, 0xAB);

    vscf_random_padding_t *padding = vscf_random_padding_new();
    vscf_random_padding_take_random(padding, vscf_fake_random_impl(fake_random));

    vscf_random_padding_configure(padding, vscf_padding_params_new_with_constraints(32, 32, 32));


    vscf_aes256_gcm_t *cipher = vscf_aes256_gcm_new();
    vscf_aes256_gcm_set_nonce(cipher, bench_data_padding_cipher_AES256_NONCE);
    vscf_aes256_gcm_set_key(cipher, bench_data_padding_cipher_AES256_KEY);

    vscf_padding_cipher_t *padding_cipher = vscf_padding_cipher_new();
    vscf_padding_cipher_take_padding(padding_cipher, vscf_random_padding_impl(padding));
    vscf_padding_cipher_take_cipher(padding_cipher, vscf_aes256_gcm_impl(cipher));

    for (auto _ : state) {
        vscf_padding_cipher_start_decryption(padding_cipher);

        const size_t out_len = vscf_padding_cipher_out_len(padding_cipher,
                                       bench_data_padding_cipher_ENCRYPTED_WITH_PADDING_1024_ZERO_BYTES.len) +
                               vscf_padding_cipher_out_len(padding_cipher, 0);

        vsc_buffer_t *out = vsc_buffer_new_with_capacity(out_len);

        vscf_padding_cipher_update(
                padding_cipher, bench_data_padding_cipher_ENCRYPTED_WITH_PADDING_1024_ZERO_BYTES, out);
        vscf_padding_cipher_finish(padding_cipher, out);

        vsc_buffer_reset(out);
    }

    vscf_padding_cipher_destroy(&padding_cipher);
}

BENCHMARK(bench_encrypt__1kb_chunked_by_32_bytes_with_aes256_gcm);
BENCHMARK(bench_encrypt__1kb_chunked_by_32_bytes_with_pading_cipher_random_padding_and_aes256_gcm);
BENCHMARK(bench_decrypt__1kb_chunked_by_32_bytes_with_aes256_gcm);
BENCHMARK(bench_decrypt__1kb_chunked_by_32_bytes_with_pading_cipher_random_padding_and_aes256_gcm);