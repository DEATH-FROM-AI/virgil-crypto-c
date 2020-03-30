package ratchet

// #include <virgil/crypto/ratchet/vscr_ratchet_public.h>
import "C"
import unsafe "unsafe"
import "runtime"
import foundation "virgil/foundation"


/*
* Class for ratchet session between 2 participants
*/
type RatchetSession struct {
    cCtx *C.vscr_ratchet_session_t /*ct2*/
}

/* Handle underlying C context. */
func (obj *RatchetSession) Ctx() uintptr {
    return uintptr(unsafe.Pointer(obj.cCtx))
}

func NewRatchetSession() *RatchetSession {
    ctx := C.vscr_ratchet_session_new()
    obj := &RatchetSession {
        cCtx: ctx,
    }
    runtime.SetFinalizer(obj, (*RatchetSession).Delete)
    return obj
}

/* Acquire C context.
* Note. This method is used in generated code only, and SHOULD NOT be used in another way.
*/
func newRatchetSessionWithCtx(ctx *C.vscr_ratchet_session_t /*ct2*/) *RatchetSession {
    obj := &RatchetSession {
        cCtx: ctx,
    }
    runtime.SetFinalizer(obj, (*RatchetSession).Delete)
    return obj
}

/* Acquire retained C context.
* Note. This method is used in generated code only, and SHOULD NOT be used in another way.
*/
func newRatchetSessionCopy(ctx *C.vscr_ratchet_session_t /*ct2*/) *RatchetSession {
    obj := &RatchetSession {
        cCtx: C.vscr_ratchet_session_shallow_copy(ctx),
    }
    runtime.SetFinalizer(obj, (*RatchetSession).Delete)
    return obj
}

/*
* Release underlying C context.
*/
func (obj *RatchetSession) Delete() {
    if obj == nil {
        return
    }
    runtime.SetFinalizer(obj, nil)
    obj.delete()
}

/*
* Release underlying C context.
*/
func (obj *RatchetSession) delete() {
    C.vscr_ratchet_session_delete(obj.cCtx)
}

/*
* Random used to generate keys
*/
func (obj *RatchetSession) SetRng(rng foundation.Random) {
    C.vscr_ratchet_session_release_rng(obj.cCtx)
    C.vscr_ratchet_session_use_rng(obj.cCtx, (*C.vscf_impl_t)(unsafe.Pointer(rng.Ctx())))

    runtime.KeepAlive(rng)
    runtime.KeepAlive(obj)
}

/*
* Setups default dependencies:
* - RNG: CTR DRBG
*/
func (obj *RatchetSession) SetupDefaults() error {
    proxyResult := /*pr4*/C.vscr_ratchet_session_setup_defaults(obj.cCtx)

    err := RatchetErrorHandleStatus(proxyResult)
    if err != nil {
        return err
    }

    runtime.KeepAlive(obj)

    return nil
}

/*
* Initiates session
*/
func (obj *RatchetSession) Initiate(senderIdentityPrivateKey PrivateKey, receiverIdentityPublicKey PublicKey, receiverLongTermPublicKey PublicKey, receiverOneTimePublicKey PublicKey, enablePostQuantum bool) error {
    proxyResult := /*pr4*/C.vscr_ratchet_session_initiate(obj.cCtx, (*C.vscf_impl_t)(unsafe.Pointer(senderIdentityPrivateKey.Ctx())), (*C.vscf_impl_t)(unsafe.Pointer(receiverIdentityPublicKey.Ctx())), (*C.vscf_impl_t)(unsafe.Pointer(receiverLongTermPublicKey.Ctx())), (*C.vscf_impl_t)(unsafe.Pointer(receiverOneTimePublicKey.Ctx())), (C.bool)(enablePostQuantum)/*pa10*/)

    err := RatchetErrorHandleStatus(proxyResult)
    if err != nil {
        return err
    }

    runtime.KeepAlive(obj)

    runtime.KeepAlive(senderIdentityPrivateKey)

    runtime.KeepAlive(receiverIdentityPublicKey)

    runtime.KeepAlive(receiverLongTermPublicKey)

    runtime.KeepAlive(receiverOneTimePublicKey)

    return nil
}

/*
* Responds to session initiation
*/
func (obj *RatchetSession) Respond(senderIdentityPublicKey PublicKey, senderIdentityKeyId []byte, receiverIdentityPrivateKey PrivateKey, receiverIdentityKeyId []byte, receiverLongTermPrivateKey PrivateKey, receiverLongTermKeyId []byte, receiverOneTimePrivateKey PrivateKey, receiverOneTimeKeyId []byte, message *RatchetMessage, enablePostQuantum bool) error {
    senderIdentityKeyIdData := helperWrapData (senderIdentityKeyId)
    receiverIdentityKeyIdData := helperWrapData (receiverIdentityKeyId)
    receiverLongTermKeyIdData := helperWrapData (receiverLongTermKeyId)
    receiverOneTimeKeyIdData := helperWrapData (receiverOneTimeKeyId)

    proxyResult := /*pr4*/C.vscr_ratchet_session_respond(obj.cCtx, (*C.vscf_impl_t)(unsafe.Pointer(senderIdentityPublicKey.Ctx())), senderIdentityKeyIdData, (*C.vscf_impl_t)(unsafe.Pointer(receiverIdentityPrivateKey.Ctx())), receiverIdentityKeyIdData, (*C.vscf_impl_t)(unsafe.Pointer(receiverLongTermPrivateKey.Ctx())), receiverLongTermKeyIdData, (*C.vscf_impl_t)(unsafe.Pointer(receiverOneTimePrivateKey.Ctx())), receiverOneTimeKeyIdData, (*C.vscr_ratchet_message_t)(unsafe.Pointer(message.Ctx())), (C.bool)(enablePostQuantum)/*pa10*/)

    err := RatchetErrorHandleStatus(proxyResult)
    if err != nil {
        return err
    }

    runtime.KeepAlive(obj)

    runtime.KeepAlive(senderIdentityPublicKey)

    runtime.KeepAlive(receiverIdentityPrivateKey)

    runtime.KeepAlive(receiverLongTermPrivateKey)

    runtime.KeepAlive(receiverOneTimePrivateKey)

    runtime.KeepAlive(message)

    return nil
}

/*
* Returns flag that indicates is this session was initiated or responded
*/
func (obj *RatchetSession) IsInitiator() bool {
    proxyResult := /*pr4*/C.vscr_ratchet_session_is_initiator(obj.cCtx)

    runtime.KeepAlive(obj)

    return bool(proxyResult) /* r9 */
}

/*
* Returns true if at least 1 response was successfully decrypted, false - otherwise
*/
func (obj *RatchetSession) ReceivedFirstResponse() bool {
    proxyResult := /*pr4*/C.vscr_ratchet_session_received_first_response(obj.cCtx)

    runtime.KeepAlive(obj)

    return bool(proxyResult) /* r9 */
}

/*
* Returns true if receiver had one time public key
*/
func (obj *RatchetSession) ReceiverHasOneTimePublicKey() bool {
    proxyResult := /*pr4*/C.vscr_ratchet_session_receiver_has_one_time_public_key(obj.cCtx)

    runtime.KeepAlive(obj)

    return bool(proxyResult) /* r9 */
}

/*
* Encrypts data
*/
func (obj *RatchetSession) Encrypt(plainText []byte) (*RatchetMessage, error) {
    var error C.vscr_error_t
    C.vscr_error_reset(&error)
    plainTextData := helperWrapData (plainText)

    proxyResult := /*pr4*/C.vscr_ratchet_session_encrypt(obj.cCtx, plainTextData, &error)

    err := RatchetErrorHandleStatus(error.status)
    if err != nil {
        return nil, err
    }

    runtime.KeepAlive(obj)

    return newRatchetMessageWithCtx(proxyResult) /* r6 */, nil
}

/*
* Calculates size of buffer sufficient to store decrypted message
*/
func (obj *RatchetSession) DecryptLen(message *RatchetMessage) uint {
    proxyResult := /*pr4*/C.vscr_ratchet_session_decrypt_len(obj.cCtx, (*C.vscr_ratchet_message_t)(unsafe.Pointer(message.Ctx())))

    runtime.KeepAlive(obj)

    runtime.KeepAlive(message)

    return uint(proxyResult) /* r9 */
}

/*
* Decrypts message
*/
func (obj *RatchetSession) Decrypt(message *RatchetMessage) ([]byte, error) {
    plainTextBuf, plainTextBufErr := newBuffer(int(obj.DecryptLen(message) /* lg2 */))
    if plainTextBufErr != nil {
        return nil, plainTextBufErr
    }
    defer plainTextBuf.delete()


    proxyResult := /*pr4*/C.vscr_ratchet_session_decrypt(obj.cCtx, (*C.vscr_ratchet_message_t)(unsafe.Pointer(message.Ctx())), plainTextBuf.ctx)

    err := RatchetErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, err
    }

    runtime.KeepAlive(obj)

    runtime.KeepAlive(message)

    return plainTextBuf.getData() /* r7 */, nil
}

/*
* Serializes session to buffer
*/
func (obj *RatchetSession) Serialize() []byte {
    proxyResult := /*pr4*/C.vscr_ratchet_session_serialize(obj.cCtx)

    defer C.vsc_buffer_delete(proxyResult)

    runtime.KeepAlive(obj)

    return C.GoBytes(unsafe.Pointer(C.vsc_buffer_bytes(proxyResult)), C.int(C.vsc_buffer_len(proxyResult))) /* r2 */
}

/*
* Deserializes session from buffer.
* NOTE: Deserialized session needs dependencies to be set. Check setup defaults
*/
func RatchetSessionDeserialize(input []byte) (*RatchetSession, error) {
    var error C.vscr_error_t
    C.vscr_error_reset(&error)
    inputData := helperWrapData (input)

    proxyResult := /*pr4*/C.vscr_ratchet_session_deserialize(inputData, &error)

    err := RatchetErrorHandleStatus(error.status)
    if err != nil {
        return nil, err
    }

    return newRatchetSessionWithCtx(proxyResult) /* r6 */, nil
}
