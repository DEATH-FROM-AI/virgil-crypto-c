/// Copyright (C) 2015-2019 Virgil Security, Inc.
///
/// All rights reserved.
///
/// Redistribution and use in source and binary forms, with or without
/// modification, are permitted provided that the following conditions are
/// met:
///
///     (1) Redistributions of source code must retain the above copyright
///     notice, this list of conditions and the following disclaimer.
///
///     (2) Redistributions in binary form must reproduce the above copyright
///     notice, this list of conditions and the following disclaimer in
///     the documentation and/or other materials provided with the
///     distribution.
///
///     (3) Neither the name of the copyright holder nor the names of its
///     contributors may be used to endorse or promote products derived from
///     this software without specific prior written permission.
///
/// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
/// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
/// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
/// DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
/// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
/// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
/// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
/// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
/// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
/// IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
/// POSSIBILITY OF SUCH DAMAGE.
///
/// Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>


import Foundation
import VSCFoundation
import VirgilCryptoCommon

/// Handle KDF algorithms that are configured with salt and iteration count.
@objc(VSCFSaltedKdfAlgInfo) public class SaltedKdfAlgInfo: NSObject, AlgInfo {

    /// Handle underlying C context.
    @objc public let c_ctx: OpaquePointer

    /// Create underlying C context.
    public override init() {
        self.c_ctx = vscf_salted_kdf_alg_info_new()
        super.init()
    }

    /// Acquire C context.
    /// Note. This method is used in generated code only, and SHOULD NOT be used in another way.
    public init(take c_ctx: OpaquePointer) {
        self.c_ctx = c_ctx
        super.init()
    }

    /// Acquire retained C context.
    /// Note. This method is used in generated code only, and SHOULD NOT be used in another way.
    public init(use c_ctx: OpaquePointer) {
        self.c_ctx = vscf_salted_kdf_alg_info_shallow_copy(c_ctx)
        super.init()
    }

    /// Create algorithm info with identificator, HASH algorithm info,
    /// salt and iteration count.
    public init(algId: AlgId, hashAlgInfo: AlgInfo, salt: Data, iterationCount: Int) {
        let proxyResult = salt.withUnsafeBytes({ (saltPointer: UnsafePointer<byte>) -> OpaquePointer? in
            return vscf_salted_kdf_alg_info_new_with_members(vscf_alg_id_t(rawValue: UInt32(algId.rawValue)), &hashAlgInfo.c_ctx, vsc_data(saltPointer, salt.count), iterationCount)
        })

        self.c_ctx = proxyResult!
    }

    /// Release underlying C context.
    deinit {
        vscf_salted_kdf_alg_info_delete(self.c_ctx)
    }

    /// Return hash algorithm information.
    @objc public func hashAlgInfo() -> AlgInfo {
        let proxyResult = vscf_salted_kdf_alg_info_hash_alg_info(self.c_ctx)

        return AlgInfoProxy.init(c_ctx: proxyResult!)
    }

    /// Return KDF salt.
    @objc public func salt() -> Data {
        let proxyResult = vscf_salted_kdf_alg_info_salt(self.c_ctx)

        return Data.init(bytes: proxyResult.bytes, count: proxyResult.len)
    }

    /// Return KDF iteration count.
    /// Note, can be 0 if KDF does not need the iteration count.
    @objc public func iterationCount() -> Int {
        let proxyResult = vscf_salted_kdf_alg_info_iteration_count(self.c_ctx)

        return proxyResult
    }

    /// Provide algorithm identificator.
    @objc public func algId() -> AlgId {
        let proxyResult = vscf_salted_kdf_alg_info_alg_id(self.c_ctx)

        return AlgId.init(fromC: proxyResult)
    }
}
