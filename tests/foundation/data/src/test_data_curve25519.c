#include "test_data_curve25519.h"

const byte test_curve25519_RANDOM_BYTES[] = {
    0x70, 0xDC, 0x80, 0x72, 0x96, 0x4D, 0x5C, 0xF6,
    0xF7, 0x32, 0xD4, 0xF3, 0x34, 0xFE, 0x14, 0xE8,
    0x28, 0x9A, 0xA4, 0xE6, 0x34, 0xFA, 0x7C, 0xF2,
    0x0D, 0x94, 0xFD, 0x6F, 0x82, 0x51, 0x22, 0xEF,
};

const vsc_data_t test_curve25519_RANDOM = {
    test_curve25519_RANDOM_BYTES, sizeof(test_curve25519_RANDOM_BYTES)
};

const byte test_curve25519_PRIVATE_KEY_BYTES[] = {
    0x04, 0x20, 0x70, 0xDC, 0x80, 0x72, 0x96, 0x4D,
    0x5C, 0xF6, 0xF7, 0x32, 0xD4, 0xF3, 0x34, 0xFE,
    0x14, 0xE8, 0x28, 0x9A, 0xA4, 0xE6, 0x34, 0xFA,
    0x7C, 0xF2, 0x0D, 0x94, 0xFD, 0x6F, 0x82, 0x51,
    0x22, 0xEF
};

const vsc_data_t test_curve25519_PRIVATE_KEY = {
    test_curve25519_PRIVATE_KEY_BYTES, sizeof(test_curve25519_PRIVATE_KEY_BYTES)
};

const byte test_curve25519_PUBLIC_KEY_BYTES[] = {
    0x2C, 0x25, 0x84, 0x8E, 0xD9, 0x73, 0xAB, 0xA2,
    0xFC, 0x3B, 0xFB, 0x9E, 0x75, 0xE6, 0x79, 0x02,
    0xDB, 0xC1, 0x47, 0xDA, 0x69, 0x24, 0xD7, 0x47,
    0xBE, 0x7F, 0xE8, 0x97, 0xC1, 0x5A, 0x63, 0x69,
};

const vsc_data_t test_curve25519_PUBLIC_KEY = {
    test_curve25519_PUBLIC_KEY_BYTES, sizeof(test_curve25519_PUBLIC_KEY_BYTES)
};

const byte test_curve25519_MESSAGE_BYTES[] = {
    0x32, 0x37, 0x64, 0x32, 0x30, 0x39, 0x34, 0x30,
    0x65, 0x66, 0x30, 0x36, 0x30, 0x34, 0x64, 0x32,
    0x32, 0x39, 0x63, 0x32, 0x34, 0x65, 0x35, 0x61,
    0x35, 0x65, 0x62, 0x32, 0x30, 0x62, 0x31, 0x36
};

const vsc_data_t test_curve25519_MESSAGE = {
    test_curve25519_MESSAGE_BYTES, sizeof(test_curve25519_MESSAGE_BYTES)
};

const byte test_curve25519_ENCRYPTED_MESSAGE_BYTES[] = {
    0x30, 0x81, 0xDF, 0x02, 0x01, 0x00, 0x30, 0x2A,
    0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x6E, 0x03,
    0x21, 0x00, 0x4E, 0xE1, 0xB8, 0xF9, 0xC5, 0x14,
    0x2F, 0x5B, 0xF8, 0x70, 0xF4, 0xF7, 0xDB, 0x39,
    0x9C, 0xC1, 0x54, 0x3D, 0xCA, 0x3D, 0x93, 0x03,
    0x95, 0x7F, 0xCE, 0x92, 0x50, 0xCA, 0x0D, 0x41,
    0x71, 0x5B, 0x30, 0x18, 0x06, 0x07, 0x28, 0x81,
    0x8C, 0x71, 0x02, 0x05, 0x02, 0x30, 0x0D, 0x06,
    0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04,
    0x02, 0x02, 0x05, 0x00, 0x30, 0x41, 0x30, 0x0D,
    0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03,
    0x04, 0x02, 0x02, 0x05, 0x00, 0x04, 0x30, 0x1D,
    0xD7, 0x3A, 0xA0, 0xAD, 0xA0, 0x87, 0xD6, 0x55,
    0xB3, 0x87, 0x25, 0x69, 0x98, 0x57, 0xB8, 0xC1,
    0xE9, 0xFE, 0xA6, 0xDA, 0x9E, 0x1F, 0xE4, 0x2C,
    0x4B, 0x34, 0x0C, 0xBB, 0xF1, 0x55, 0x58, 0x4F,
    0x64, 0x6F, 0x22, 0x18, 0xC6, 0xC0, 0x95, 0x4B,
    0x43, 0x03, 0x97, 0x5E, 0x78, 0x60, 0x6E, 0x30,
    0x51, 0x30, 0x1D, 0x06, 0x09, 0x60, 0x86, 0x48,
    0x01, 0x65, 0x03, 0x04, 0x01, 0x2A, 0x04, 0x10,
    0x84, 0xE7, 0x90, 0x22, 0xE0, 0x2C, 0x7C, 0x31,
    0x51, 0xCD, 0x5B, 0xD2, 0x24, 0x78, 0xE5, 0x9E,
    0x04, 0x30, 0xFE, 0x63, 0x5F, 0xF4, 0x42, 0x01,
    0xF0, 0x3D, 0x15, 0xD2, 0xCE, 0x7B, 0x6C, 0x09,
    0x3E, 0xEA, 0xB8, 0x91, 0x33, 0x5B, 0x66, 0x42,
    0x9A, 0xC7, 0x76, 0xDB, 0x32, 0x50, 0xCE, 0x66,
    0xFE, 0x63, 0x1E, 0x65, 0xB0, 0xBF, 0x0B, 0xEB,
    0xA5, 0x9A, 0x59, 0x5C, 0xFB, 0xCA, 0x21, 0xFB,
    0x53, 0xAE
};

const vsc_data_t test_curve25519_ENCRYPTED_MESSAGE = {
    test_curve25519_ENCRYPTED_MESSAGE_BYTES, sizeof(test_curve25519_ENCRYPTED_MESSAGE_BYTES)
};

const byte test_curve25519_PUBLIC_KEY_PKCS8_DER_BYTES[] = {
    0x30, 0x2A, 0x30, 0x05, 0x06, 0x03, 0x2B, 0x65,
    0x6E, 0x03, 0x21, 0x00, 0x2C, 0x25, 0x84, 0x8E,
    0xD9, 0x73, 0xAB, 0xA2, 0xFC, 0x3B, 0xFB, 0x9E,
    0x75, 0xE6, 0x79, 0x02, 0xDB, 0xC1, 0x47, 0xDA,
    0x69, 0x24, 0xD7, 0x47, 0xBE, 0x7F, 0xE8, 0x97,
    0xC1, 0x5A, 0x63, 0x69
};

const vsc_data_t test_curve25519_PUBLIC_KEY_PKCS8_DER = {
    test_curve25519_PUBLIC_KEY_PKCS8_DER_BYTES, sizeof(test_curve25519_PUBLIC_KEY_PKCS8_DER_BYTES)
};

const byte test_curve25519_PRIVATE_KEY_PKCS8_DER_BYTES[] = {
    0x30, 0x2E, 0x02, 0x01, 0x00, 0x30, 0x05, 0x06,
    0x03, 0x2B, 0x65, 0x6E, 0x04, 0x22, 0x04, 0x20,
    0x70, 0xDC, 0x80, 0x72, 0x96, 0x4D, 0x5C, 0xF6,
    0xF7, 0x32, 0xD4, 0xF3, 0x34, 0xFE, 0x14, 0xE8,
    0x28, 0x9A, 0xA4, 0xE6, 0x34, 0xFA, 0x7C, 0xF2,
    0x0D, 0x94, 0xFD, 0x6F, 0x82, 0x51, 0x22, 0xEF,
};

const vsc_data_t test_curve25519_PRIVATE_KEY_PKCS8_DER = {
    test_curve25519_PRIVATE_KEY_PKCS8_DER_BYTES, sizeof(test_curve25519_PRIVATE_KEY_PKCS8_DER_BYTES)
};