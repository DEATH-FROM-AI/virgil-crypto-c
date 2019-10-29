package foundation

import "C"

/*
* Provide interface for data encryption.
*/
type IAuthDecrypt interface {

    context

    /*
    * Decrypt given data.
    * If 'tag' is not given, then it will be taken from the 'enc'.
    */
    AuthDecrypt (data []byte, authData []byte, tag []byte) ([]byte, error)

    /*
    * Calculate required buffer length to hold the authenticated decrypted data.
    */
    AuthDecryptedLen (dataLen uint32) uint32
}

