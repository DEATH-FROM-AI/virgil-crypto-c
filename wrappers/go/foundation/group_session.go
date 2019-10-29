package foundation

// #cgo CFLAGS: -I${SRCDIR}/../binaries/include/
// #cgo LDFLAGS: -L${SRCDIR}/../binaries/lib -lmbedcrypto -led25519 -lprotobuf-nanopb -lvsc_common -lvsc_foundation -lvsc_foundation_pb
// #include <virgil/crypto/foundation/vscf_foundation_public.h>
import "C"
import unsafe "unsafe"

/*
* Group chat encryption session.
*/
type GroupSession struct {
    cCtx *C.vscf_group_session_t /*ct2*/
}

/* Handle underlying C context. */
func (this GroupSession) ctx () *C.vscf_impl_t {
    return (*C.vscf_impl_t)(this.cCtx)
}

func NewGroupSession () *GroupSession {
    ctx := C.vscf_group_session_new()
    return &GroupSession {
        cCtx: ctx,
    }
}

/* Acquire C context.
* Note. This method is used in generated code only, and SHOULD NOT be used in another way.
*/
func newGroupSessionWithCtx (ctx *C.vscf_group_session_t /*ct2*/) *GroupSession {
    return &GroupSession {
        cCtx: ctx,
    }
}

/* Acquire retained C context.
* Note. This method is used in generated code only, and SHOULD NOT be used in another way.
*/
func newGroupSessionCopy (ctx *C.vscf_group_session_t /*ct2*/) *GroupSession {
    return &GroupSession {
        cCtx: C.vscf_group_session_shallow_copy(ctx),
    }
}

/// Release underlying C context.
func (this GroupSession) close () {
    C.vscf_group_session_delete(this.cCtx)
}

/*
* Sender id len
*/
func GroupSessionGetSenderIdLen () uint32 {
    return 32
}

/*
* Max plain text len
*/
func GroupSessionGetMaxPlainTextLen () uint32 {
    return 30000
}

/*
* Max epochs count
*/
func GroupSessionGetMaxEpochsCount () uint32 {
    return 50
}

/*
* Salt size
*/
func GroupSessionGetSaltSize () uint32 {
    return 32
}

/*
* Random
*/
func (this GroupSession) SetRng (rng IRandom) {
    C.vscf_group_session_release_rng(this.cCtx)
    C.vscf_group_session_use_rng(this.cCtx, (*C.vscf_impl_t)(rng.ctx()))
}

/*
* Returns current epoch.
*/
func (this GroupSession) GetCurrentEpoch () uint32 {
    proxyResult := /*pr4*/C.vscf_group_session_get_current_epoch(this.cCtx)

    return uint32(proxyResult) /* r9 */
}

/*
* Setups default dependencies:
* - RNG: CTR DRBG
*/
func (this GroupSession) SetupDefaults () error {
    proxyResult := /*pr4*/C.vscf_group_session_setup_defaults(this.cCtx)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return err
    }

    return nil
}

/*
* Returns session id.
*/
func (this GroupSession) GetSessionId () []byte {
    proxyResult := /*pr4*/C.vscf_group_session_get_session_id(this.cCtx)

    return helperDataToBytes(proxyResult) /* r1 */
}

/*
* Adds epoch. New epoch should be generated for member removal or proactive to rotate encryption key.
* Epoch message should be encrypted and signed by trusted group chat member (admin).
*/
func (this GroupSession) AddEpoch (message *GroupSessionMessage) error {
    proxyResult := /*pr4*/C.vscf_group_session_add_epoch(this.cCtx, (*C.vscf_group_session_message_t)(message.ctx()))

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return err
    }

    return nil
}

/*
* Encrypts data
*/
func (this GroupSession) Encrypt (plainText []byte, privateKey IPrivateKey) (*GroupSessionMessage, error) {
    var error C.vscf_error_t
    C.vscf_error_reset(&error)
    plainTextData := C.vsc_data((*C.uint8_t)(&plainText[0]), C.size_t(len(plainText)))

    proxyResult := /*pr4*/C.vscf_group_session_encrypt(this.cCtx, plainTextData, (*C.vscf_impl_t)(privateKey.ctx()), &error)

    err := FoundationErrorHandleStatus(error.status)
    if err != nil {
        return nil, err
    }

    return newGroupSessionMessageWithCtx(proxyResult) /* r6 */, nil
}

/*
* Calculates size of buffer sufficient to store decrypted message
*/
func (this GroupSession) DecryptLen (message *GroupSessionMessage) uint32 {
    proxyResult := /*pr4*/C.vscf_group_session_decrypt_len(this.cCtx, (*C.vscf_group_session_message_t)(message.ctx()))

    return uint32(proxyResult) /* r9 */
}

/*
* Decrypts message
*/
func (this GroupSession) Decrypt (message *GroupSessionMessage, publicKey IPublicKey) ([]byte, error) {
    plainTextCount := C.ulong(this.DecryptLen(message) /* lg2 */)
    plainTextMemory := make([]byte, int(C.vsc_buffer_ctx_size() + plainTextCount))
    plainTextBuf := (*C.vsc_buffer_t)(unsafe.Pointer(&plainTextMemory[0]))
    plainTextData := plainTextMemory[int(C.vsc_buffer_ctx_size()):]
    C.vsc_buffer_init(plainTextBuf)
    C.vsc_buffer_use(plainTextBuf, (*C.byte)(unsafe.Pointer(&plainTextData[0])), plainTextCount)
    defer C.vsc_buffer_delete(plainTextBuf)


    proxyResult := /*pr4*/C.vscf_group_session_decrypt(this.cCtx, (*C.vscf_group_session_message_t)(message.ctx()), (*C.vscf_impl_t)(publicKey.ctx()), plainTextBuf)

    err := FoundationErrorHandleStatus(proxyResult)
    if err != nil {
        return nil, err
    }

    return plainTextData[0:C.vsc_buffer_len(plainTextBuf)] /* r7 */, nil
}

/*
* Creates ticket with new key for removing participants or proactive to rotate encryption key.
*/
func (this GroupSession) CreateGroupTicket () (*GroupSessionTicket, error) {
    var error C.vscf_error_t
    C.vscf_error_reset(&error)

    proxyResult := /*pr4*/C.vscf_group_session_create_group_ticket(this.cCtx, &error)

    err := FoundationErrorHandleStatus(error.status)
    if err != nil {
        return nil, err
    }

    return newGroupSessionTicketWithCtx(proxyResult) /* r6 */, nil
}
