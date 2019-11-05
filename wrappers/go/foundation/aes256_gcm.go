package foundation

// #cgo CFLAGS: -I${SRCDIR}/../binaries/include/
// #cgo LDFLAGS: -L${SRCDIR}/../binaries/lib -lmbedcrypto -led25519 -lprotobuf-nanopb -lvsc_common -lvsc_foundation -lvsc_foundation_pb
// #include <virgil/crypto/foundation/vscf_foundation_public.h>
import "C"


/*
* Implementation of the symmetric cipher AES-256 bit in a GCM mode.
* Note, this implementation contains dynamic memory allocations,
* this should be improved in the future releases.
*/
type Aes256Gcm struct {
    IAlg
    IEncrypt
    IDecrypt
    ICipherInfo
    ICipher
    ICipherAuthInfo
    IAuthEncrypt
    IAuthDecrypt
    ICipherAuth
    cCtx *C.vscf_aes256_gcm_t /*ct10*/
}

/* Handle underlying C context. */
func (this Aes256Gcm) ctx () *C.vscf_impl_t {
    return (*C.vscf_impl_t)(this.cCtx)
}

func NewAes256Gcm () *Aes256Gcm {
    ctx := C.vscf_aes256_gcm_new()
    return &Aes256Gcm {
        cCtx: ctx,
    }
}

/* Acquire C context.
* Note. This method is used in generated code only, and SHOULD NOT be used in another way.
*/
func newAes256GcmWithCtx (ctx *C.vscf_aes256_gcm_t /*ct10*/) *Aes256Gcm {
    return &Aes256Gcm {
        cCtx: ctx,
    }
}

/* Acquire retained C context.
* Note. This method is used in generated code only, and SHOULD NOT be used in another way.
*/
func newAes256GcmCopy (ctx *C.vscf_aes256_gcm_t /*ct10*/) *Aes256Gcm {
    return &Aes256Gcm {
        cCtx: C.vscf_aes256_gcm_shallow_copy(ctx),
    }
}

/// Release underlying C context.
func (this Aes256Gcm) clear () {
    C.vscf_aes256_gcm_delete(this.cCtx)
}

/*
* Provide algorithm identificator.
*/
func (this Aes256Gcm) AlgId () AlgId {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_alg_id(this.cCtx)

    return AlgId(proxyResult) /* r8 */
}

/*
* Produce object with algorithm information and configuration parameters.
*/
func (this Aes256Gcm) ProduceAlgInfo () (IAlgInfo, error) {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_produce_alg_info(this.cCtx)

    return FoundationImplementationWrapIAlgInfo(proxyResult) /* r4 */
}

/*
* Restore algorithm configuration from the given object.
*/
func (this Aes256Gcm) RestoreAlgInfo (algInfo IAlgInfo) error {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_restore_alg_info(this.cCtx, (*C.vscf_impl_t)(algInfo.ctx()))

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return err
    }

    return nil
}

/*
* Encrypt given data.
*/
func (this Aes256Gcm) Encrypt (data []byte) ([]byte, error) {
    outBuf, outBufErr := bufferNewBuffer(int(this.EncryptedLen(uint32(len(data))) /* lg2 */))
    if outBufErr != nil {
        return nil, outBufErr
    }
    defer outBuf.clear()
    dataData := helperWrapData (data)

    proxyResult := /*pr4*/C.vscf_aes256_gcm_encrypt(this.cCtx, dataData, outBuf.ctx)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, err
    }

    return outBuf.getData() /* r7 */, nil
}

/*
* Calculate required buffer length to hold the encrypted data.
*/
func (this Aes256Gcm) EncryptedLen (dataLen uint32) uint32 {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_encrypted_len(this.cCtx, (C.size_t)(dataLen)/*pa10*/)

    return uint32(proxyResult) /* r9 */
}

/*
* Precise length calculation of encrypted data.
*/
func (this Aes256Gcm) PreciseEncryptedLen (dataLen uint32) uint32 {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_precise_encrypted_len(this.cCtx, (C.size_t)(dataLen)/*pa10*/)

    return uint32(proxyResult) /* r9 */
}

/*
* Decrypt given data.
*/
func (this Aes256Gcm) Decrypt (data []byte) ([]byte, error) {
    outBuf, outBufErr := bufferNewBuffer(int(this.DecryptedLen(uint32(len(data))) /* lg2 */))
    if outBufErr != nil {
        return nil, outBufErr
    }
    defer outBuf.clear()
    dataData := helperWrapData (data)

    proxyResult := /*pr4*/C.vscf_aes256_gcm_decrypt(this.cCtx, dataData, outBuf.ctx)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, err
    }

    return outBuf.getData() /* r7 */, nil
}

/*
* Calculate required buffer length to hold the decrypted data.
*/
func (this Aes256Gcm) DecryptedLen (dataLen uint32) uint32 {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_decrypted_len(this.cCtx, (C.size_t)(dataLen)/*pa10*/)

    return uint32(proxyResult) /* r9 */
}

/*
* Cipher nfonce length or IV length in bytes, or 0 if nonce is not required.
*/
func (this Aes256Gcm) GetNonceLen () uint32 {
    return 12
}

/*
* Cipher key length in bytes.
*/
func (this Aes256Gcm) GetKeyLen () uint32 {
    return 32
}

/*
* Cipher key length in bits.
*/
func (this Aes256Gcm) GetKeyBitlen () uint32 {
    return 256
}

/*
* Cipher block length in bytes.
*/
func (this Aes256Gcm) GetBlockLen () uint32 {
    return 16
}

/*
* Setup IV or nonce.
*/
func (this Aes256Gcm) SetNonce (nonce []byte) {
    nonceData := helperWrapData (nonce)

    C.vscf_aes256_gcm_set_nonce(this.cCtx, nonceData)

    return
}

/*
* Set cipher encryption / decryption key.
*/
func (this Aes256Gcm) SetKey (key []byte) {
    keyData := helperWrapData (key)

    C.vscf_aes256_gcm_set_key(this.cCtx, keyData)

    return
}

/*
* Start sequential encryption.
*/
func (this Aes256Gcm) StartEncryption () {
    C.vscf_aes256_gcm_start_encryption(this.cCtx)

    return
}

/*
* Start sequential decryption.
*/
func (this Aes256Gcm) StartDecryption () {
    C.vscf_aes256_gcm_start_decryption(this.cCtx)

    return
}

/*
* Process encryption or decryption of the given data chunk.
*/
func (this Aes256Gcm) Update (data []byte) []byte {
    outBuf, outBufErr := bufferNewBuffer(int(this.OutLen(uint32(len(data))) /* lg2 */))
    if outBufErr != nil {
        return nil
    }
    defer outBuf.clear()
    dataData := helperWrapData (data)

    C.vscf_aes256_gcm_update(this.cCtx, dataData, outBuf.ctx)

    return outBuf.getData() /* r7 */
}

/*
* Return buffer length required to hold an output of the methods
* "update" or "finish" in an current mode.
* Pass zero length to define buffer length of the method "finish".
*/
func (this Aes256Gcm) OutLen (dataLen uint32) uint32 {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_out_len(this.cCtx, (C.size_t)(dataLen)/*pa10*/)

    return uint32(proxyResult) /* r9 */
}

/*
* Return buffer length required to hold an output of the methods
* "update" or "finish" in an encryption mode.
* Pass zero length to define buffer length of the method "finish".
*/
func (this Aes256Gcm) EncryptedOutLen (dataLen uint32) uint32 {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_encrypted_out_len(this.cCtx, (C.size_t)(dataLen)/*pa10*/)

    return uint32(proxyResult) /* r9 */
}

/*
* Return buffer length required to hold an output of the methods
* "update" or "finish" in an decryption mode.
* Pass zero length to define buffer length of the method "finish".
*/
func (this Aes256Gcm) DecryptedOutLen (dataLen uint32) uint32 {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_decrypted_out_len(this.cCtx, (C.size_t)(dataLen)/*pa10*/)

    return uint32(proxyResult) /* r9 */
}

/*
* Accomplish encryption or decryption process.
*/
func (this Aes256Gcm) Finish () ([]byte, error) {
    outBuf, outBufErr := bufferNewBuffer(int(this.OutLen(0) /* lg2 */))
    if outBufErr != nil {
        return nil, outBufErr
    }
    defer outBuf.clear()


    proxyResult := /*pr4*/C.vscf_aes256_gcm_finish(this.cCtx, outBuf.ctx)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, err
    }

    return outBuf.getData() /* r7 */, nil
}

/*
* Defines authentication tag length in bytes.
*/
func (this Aes256Gcm) GetAuthTagLen () uint32 {
    return 16
}

/*
* Encrypt given data.
* If 'tag' is not given, then it will written to the 'enc'.
*/
func (this Aes256Gcm) AuthEncrypt (data []byte, authData []byte) ([]byte, []byte, error) {
    outBuf, outBufErr := bufferNewBuffer(int(this.AuthEncryptedLen(uint32(len(data))) /* lg2 */))
    if outBufErr != nil {
        return nil, nil, outBufErr
    }
    defer outBuf.clear()

    tagBuf, tagBufErr := bufferNewBuffer(int(this.GetAuthTagLen() /* lg3 */))
    if tagBufErr != nil {
        return nil, nil, tagBufErr
    }
    defer tagBuf.clear()
    dataData := helperWrapData (data)
    authDataData := helperWrapData (authData)

    proxyResult := /*pr4*/C.vscf_aes256_gcm_auth_encrypt(this.cCtx, dataData, authDataData, outBuf.ctx, tagBuf.ctx)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, nil, err
    }

    return outBuf.getData() /* r7 */, tagBuf.getData() /* r7 */, nil
}

/*
* Calculate required buffer length to hold the authenticated encrypted data.
*/
func (this Aes256Gcm) AuthEncryptedLen (dataLen uint32) uint32 {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_auth_encrypted_len(this.cCtx, (C.size_t)(dataLen)/*pa10*/)

    return uint32(proxyResult) /* r9 */
}

/*
* Decrypt given data.
* If 'tag' is not given, then it will be taken from the 'enc'.
*/
func (this Aes256Gcm) AuthDecrypt (data []byte, authData []byte, tag []byte) ([]byte, error) {
    outBuf, outBufErr := bufferNewBuffer(int(this.AuthDecryptedLen(uint32(len(data))) /* lg2 */))
    if outBufErr != nil {
        return nil, outBufErr
    }
    defer outBuf.clear()
    dataData := helperWrapData (data)
    authDataData := helperWrapData (authData)
    tagData := helperWrapData (tag)

    proxyResult := /*pr4*/C.vscf_aes256_gcm_auth_decrypt(this.cCtx, dataData, authDataData, tagData, outBuf.ctx)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, err
    }

    return outBuf.getData() /* r7 */, nil
}

/*
* Calculate required buffer length to hold the authenticated decrypted data.
*/
func (this Aes256Gcm) AuthDecryptedLen (dataLen uint32) uint32 {
    proxyResult := /*pr4*/C.vscf_aes256_gcm_auth_decrypted_len(this.cCtx, (C.size_t)(dataLen)/*pa10*/)

    return uint32(proxyResult) /* r9 */
}

/*
* Set additional data for for AEAD ciphers.
*/
func (this Aes256Gcm) SetAuthData (authData []byte) {
    authDataData := helperWrapData (authData)

    C.vscf_aes256_gcm_set_auth_data(this.cCtx, authDataData)

    return
}

/*
* Accomplish an authenticated encryption and place tag separately.
*
* Note, if authentication tag should be added to an encrypted data,
* method "finish" can be used.
*/
func (this Aes256Gcm) FinishAuthEncryption () ([]byte, []byte, error) {
    outBuf, outBufErr := bufferNewBuffer(int(this.OutLen(0) /* lg2 */))
    if outBufErr != nil {
        return nil, nil, outBufErr
    }
    defer outBuf.clear()

    tagBuf, tagBufErr := bufferNewBuffer(int(this.GetAuthTagLen() /* lg3 */))
    if tagBufErr != nil {
        return nil, nil, tagBufErr
    }
    defer tagBuf.clear()


    proxyResult := /*pr4*/C.vscf_aes256_gcm_finish_auth_encryption(this.cCtx, outBuf.ctx, tagBuf.ctx)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, nil, err
    }

    return outBuf.getData() /* r7 */, tagBuf.getData() /* r7 */, nil
}

/*
* Accomplish an authenticated decryption with explicitly given tag.
*
* Note, if authentication tag is a part of an encrypted data then,
* method "finish" can be used for simplicity.
*/
func (this Aes256Gcm) FinishAuthDecryption (tag []byte) ([]byte, error) {
    outBuf, outBufErr := bufferNewBuffer(int(this.OutLen(0) /* lg2 */))
    if outBufErr != nil {
        return nil, outBufErr
    }
    defer outBuf.clear()
    tagData := helperWrapData (tag)

    proxyResult := /*pr4*/C.vscf_aes256_gcm_finish_auth_decryption(this.cCtx, tagData, outBuf.ctx)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, err
    }

    return outBuf.getData() /* r7 */, nil
}
