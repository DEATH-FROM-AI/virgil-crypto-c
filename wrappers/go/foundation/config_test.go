package foundation

const TEST_DATA = "2saYMwjfh6ZKmpzS8Gn71+Wl/DnURsjGIWcAAshaHnH32RDhpZSem6l5HhvLG0TZ5F7b1cDzB9Bk4XomxINviHozt3KZ3DmBKZitQAIU9/6/qCnJzuxbHgOteIFsE65WfOEmrVbK8sRZuVvp2MYbG/5FoCb6hTlHTgQHv5xafd0b8J/aAzGKm2r4Ug9kUQSwc1PgnzSazXh5z4Z1RYyMGPel/yv6ZfUWs5gDKRJAImuvzGL64fUCmxz9Fifua2G5t9DTpErTUIcuZgtuIqU9UoogJIxbkftxtGrBxzBMWveCIdsUNlqiT/ileOAofwiPn9V91Wybhk8gXSwIOV2B5YeZhNmzhZXK1JZKVIpvSIrNPuDJ11NdSCSJ0hpKSwuZdQZAIu6Mm3apgVFJBcEQNbc/Xh3PtTDx6asDqDktmywDj7E6xCUZZP9Z0A0pvsbzRSE9+X7y0V57sy8r8MKlVWlPGu5JJ4zLh+6BSthX6pshdvrNgLv/g0p3PgLsA47S5QWIb0L80sSQqePKyxvdWjsPepVlXaIOqgD2Db/9VHE4z51SquX/U5Lh5w4NeyEpRgBOvDKqgJVTY7HgjgL3zybzBwkxDWJjp7lx9X5gzKI4tEoV4LO3PuEl6h6TJ9BA+sDsCLhnrs0NkjyZURcju84R2a7cVn8GVTpW45wTom7/e+w41mdyTqUIEUyOgZ/GBbC4HYaUBXWShpyuih0VdQhYgn5WgDoKd4lpdpGe1MOiGiTVsr1q4eH84ajTus4j6YXYU7d2FmMsb+gDiWHtoKwmiXAqbShXbUSxwQE+dwv7T2Eaq4Vl+ZKzQe/617947FZHZylSbdLI8f6IMeVIxZxGx3eYTxQMHDB6cjugrmd0UCZ/4co3z2RPTHKVOAKfrXwGaxqhtuZgbp5a+a/SpRVfdnb2TjkWG7YqkfK4VXYS1MDvfwMnr5cIUwCyaicJ5wkNywKqzEmodaHEI94wGDZaH/ZJH5avIJrgcDsIs+/Ft483DwaJ9CxNOLWUZXTphLTSLbDuMy39P51lO0vl1s5jvnwgxjvCqnOo/8fw9/fvnASjHcDc9lSp1cGth6aS5mGwUKgwUxuKMHZk0/Py02tuTHSwCHQa77eXcWL50CsyMzXaEOoDkhoE9drg8yS7ccH4+LwG15q9sACufWoO66Bqy/I2P7NvCGB49KwVV7B/GECHRTSRk0/88N31KVT6XaHfhek/cDjp77ISCfwQE5acKqqJibzyW3dHhBZSd1Rce0XIbqmFKbZxhpJc9posuulG/3SPt9Q9UwbvAF+Tb9a7HK/+oG6PSh7GMiB/p/B263skKkKbmHGGA6UnFT0sxGmUAUU+uE7loa2sYQo+4Q=="
const TEST_SHORT_DATA = "NjhmODgyYWItN2U2NS00NTk4LThkZWYtYTljNDYwMzVlZWFh"

const TEST_AES256_CBC_KEY = "YD3rEBXKcb4rc67whX13gR81LAc7YQjXLZgQowkU3/Q="
const TEST_AES256_CBC_IV = "AAECAwQFBgcICQoLDA0ODw=="
const TEST_AES256_CBC_ENCRYPTED_DATA = "B+LvBFKsqAzMA+0tIFelJ1GvZmuleX8loz5zRKXCrp+XoxyAG7yMGi2l/gDWWDCjYRUOK0UBhFz1WGa3oBbKhRd83w0IGdyc82QC0UjnvVCXbF+TeRPhnXG1J/2OX/uyFkT50m8IY27sgwIan+s+SFfMR5TIaXbtsx8ftrW7pWsQvxkzWZ15+1yVAfaZic4q/rCr5lGOSaE98gL3fBafO8rTt6ar6AiK2rfi9eaelu5WRKApCnhGflD8pWrCyNJJ1Zw4qfX6fxmwXMeYlSNLRMLwWbadkwb/Rf0Q+rwP5hAbsuz+rfZZJOQyKqL8uGItAGUpsYhVcNEXRk8KfMXglQ2WjFXZKfI1HA7Nv7DpkerRXmntWG8n0LRUNb5A0BR2HQxkek43igWF3pirPDblVflmmVdmU5IyxOrkzTP8L3uJIIw/xqHk7POpDgRAhdJj59q5QYipWt0BFSMhUVd3kjITc2cCpPVnv4VrAWV2gnDUSWK9tO/UQSR4VZigV+E8PFH5IiCYZ5EJ3OTIYYwKkszRDiRl5Bx8AjS8CbsRYBr8whrJ9lTjYHtDO9dxk/T1Xev99qkxx6XXqPUnw/3T/t99DedZEwclET76220cH+hK5eThetw7ycog5jZvIArPIVg4acn0JuirN+IXIjm8RmTnf9fIuciYTTZl2VKqQSxIpwQvXXs3Exvk2Tns+IEix/KKq7PUoSygzWd6jo4Qqk+2DjcW/YKShlRbKmzp2Aty6/ioqcFJZCu3MdiQKEkyqAxFA/0bt/v9AXqvva9w1ba7jiWzMiizY2Qvu3DkmYj0bOsd9XU3oUSIHo5SlqST+ZEpzXKOMYvPobLOkq3V8bbJwVuOMVrsHH37BcSmUBx+yuhqZHMiD22jXc/Anf0rALyiMTOIcj5BhkmISoT8WAYvXrUUIXFyiFV7HBYuZVUZkdF1NC6kagICMjU5cMYeY5xFB/gVH7cfE5pDZzpgmVx4FUHJ+NCDeO/C08cUID1OdxzYhrDdWPdLhq1YiKTTsoBrRQ8AvFLNyxlTOqwykRpusCvA2wHIOsnGrRGSqNsmF0zA/5avW4wuGRsogLt9ZLI2uXhrcpMLpREolPbVDV+VjrOTLkMxAG9fE5FMOFvyaOJOyKAZdq0FTwzrr8DUrp7Dlro/CvWrHDF0SMBTeOiTEjK0LVsHlNtFrikYO7kEVc1t1s7cY1L1Edfl5yep+hbj3HQDDRggsL/STOjoe3w0seVX8CZBKlApSEOBY8noKHVjHWVHBj8/75ud/Xe7XlRZOs/Qv0vNN/FtZvqz1b8OsIiCNIktcq/Q6gYhsXyRdRyFGJKaVjVfGQYzwh8iNfNkkgK5ph3dPtX7BJUV39M9/jbKuqzlO99qRAX9iU0="
const TEST_AES256_CBC_NONCE_LEN = 16
const TEST_AES256_CBC_KEY_LEN = 32
const TEST_AES256_CBC_KEY_BIT_LEN = 256
const TEST_AES256_CBC_BLOCK_LEN = 16

const TEST_AES256_GCM_KEY = "+4CU3S7ds9gAS7eRNAI8or5N6bZoqeRgir3yEw6L7Lg="
const TEST_AES256_GCM_NONCE = "SRoU4TtZHPLznalr"
const TEST_AES256_GCM_ENCRYPTED_DATA = "s+LtklAfiw+hkJ0PyUXWHw7VBsGI1PDN2Md5gFk0QNaiA1ouoQuU3kEBEzbXGDUGK0/WE8hkXCO3OwOKAndxWe1ZWw7czcivtoAZQmey/epTq7O5K7NVYWmZ+Yso7pATQ+x2V+3BDPPpXWFkq5reeV+38/Pn0wwwvJwqXYs3Vbr5oCin9rCI45wTo23b/L8XRjXiRBC5JyzOwKrlB9axTMt/q/9Nlkr8K3HEv5Nk6ZYFUyHAjIRUyrBVAeQsWguP6pAay4NIM2KebQVChtAS6uLC5XGpwNVMSHpkgNLtkKwHHlqEuEFZAlA+NDPs1gTXOYXxHbEUKuCjzhUSIKEZA3rDd+aQsgI3Ap046ryLVJp2QB7u88G+P5Owqaehx8meCm1ANzLRlSSTklKswQIRcKYJd2egtr9io6MNb3+q+uHu2DRdc6iMdxRB1/FUM+OteF3t1BiugF0TtaRSjZD1Ezsn9ZmTVoRiWsfu2aTpo11Cr2oK6qfppyO9XCAGWIkWBphd6Tl+dTQQSL5gC9jIc7qohdTcpm6I9XwHLoU0JD6vhMs5WoZZ15xO6KQzgc/WkUkmpvpDQdrk8MVkZH5m0m9/YSWBfvqeMjyTGrMzCs5oHWiPJepREbHxfxLQW/zAiBrSzjW/XSsuJ+IRA7J+L+12tVMq68JEwKKgVUA0yuehrssszHuV83XtaeEzOpYt7pCtLeKDJUDAH+ihQEldcxdTuz82sR8womLzhIgY8z+vUgBoBeQz5LWMo9jTac6ccuHJyj6wfmOMF+ptZwfCgT0JmnKN/imSZz0w9b+wxxnBv8Aq67zm4A9OVDwrAC8YuNiZ4n7HBJYxTRj9wm1biTTAekrGNEcUyHHjCW5W6zqU3HlUg4nj+MvpPBwELLrsKGm8UuR+3qGvSHRmhxaXT9A6UPU4Ocv5Ytbax/bpfqSsFkkczuBvDbDGf4iFnFjF5JKmr1EEP6dD8seat6bxLYI6siBYVPK7Ik75FEixKSgvxkrkFj5to64ZrAndtmphUmcW8hZybiTqxrz+rRRFnDCHMvNpu4oE2Nc2Z3n8/uzzsisTHTAyYfHMelXOuWA//HP7mrxyTMSgp+J4mLrl5ri3Bidw/Pw7d9ngPRo9reVBNCS7NwG3vbOLqKfEyIOVqv/mkSFq8xp0eRLvnA4uV2TZOBTJ435q+AssSgGm1ZIRPTh2DBbQOang5fSzpQ0vJFPaPlsbmJ5W00aV6JNQsQdJb6/4dabN9aMHxbxCQNM3UhQY2gcnUI2BBfpvQXG1NHM030XqIqug+chncnzlZpGkarBhlTovFa47YDZsSTPBsEfS6/6gNWXDVnznFhF8fkQ+tRhwU8kSKzw15QbkQmrCMiGYvMMIx8oM/WLl4rM="
const TEST_AES256_GCM_AUTH_DATA = "nYxnNFRnl8WBubHQ1PBbJ/4FOb0BZV0tGooUic34BCKHU9dycr9t7RnUemq9YoHqlZHUvMG+IiMF/faJxfqkwRMxz/v0IhVGm4H2G0BBXYHMNxYeXAJYpnZCubisYn1uOfQ+SF4f9SKsdCoH3vo1aa61mZDLRMTz2VL4EZ/xER0="
const TEST_AES256_GCM_AUTH_OUT = "s+LtklAfiw+hkJ0PyUXWHw7VBsGI1PDN2Md5gFk0QNaiA1ouoQuU3kEBEzbXGDUGK0/WE8hkXCO3OwOKAndxWe1ZWw7czcivtoAZQmey/epTq7O5K7NVYWmZ+Yso7pATQ+x2V+3BDPPpXWFkq5reeV+38/Pn0wwwvJwqXYs3Vbr5oCin9rCI45wTo23b/L8XRjXiRBC5JyzOwKrlB9axTMt/q/9Nlkr8K3HEv5Nk6ZYFUyHAjIRUyrBVAeQsWguP6pAay4NIM2KebQVChtAS6uLC5XGpwNVMSHpkgNLtkKwHHlqEuEFZAlA+NDPs1gTXOYXxHbEUKuCjzhUSIKEZA3rDd+aQsgI3Ap046ryLVJp2QB7u88G+P5Owqaehx8meCm1ANzLRlSSTklKswQIRcKYJd2egtr9io6MNb3+q+uHu2DRdc6iMdxRB1/FUM+OteF3t1BiugF0TtaRSjZD1Ezsn9ZmTVoRiWsfu2aTpo11Cr2oK6qfppyO9XCAGWIkWBphd6Tl+dTQQSL5gC9jIc7qohdTcpm6I9XwHLoU0JD6vhMs5WoZZ15xO6KQzgc/WkUkmpvpDQdrk8MVkZH5m0m9/YSWBfvqeMjyTGrMzCs5oHWiPJepREbHxfxLQW/zAiBrSzjW/XSsuJ+IRA7J+L+12tVMq68JEwKKgVUA0yuehrssszHuV83XtaeEzOpYt7pCtLeKDJUDAH+ihQEldcxdTuz82sR8womLzhIgY8z+vUgBoBeQz5LWMo9jTac6ccuHJyj6wfmOMF+ptZwfCgT0JmnKN/imSZz0w9b+wxxnBv8Aq67zm4A9OVDwrAC8YuNiZ4n7HBJYxTRj9wm1biTTAekrGNEcUyHHjCW5W6zqU3HlUg4nj+MvpPBwELLrsKGm8UuR+3qGvSHRmhxaXT9A6UPU4Ocv5Ytbax/bpfqSsFkkczuBvDbDGf4iFnFjF5JKmr1EEP6dD8seat6bxLYI6siBYVPK7Ik75FEixKSgvxkrkFj5to64ZrAndtmphUmcW8hZybiTqxrz+rRRFnDCHMvNpu4oE2Nc2Z3n8/uzzsisTHTAyYfHMelXOuWA//HP7mrxyTMSgp+J4mLrl5ri3Bidw/Pw7d9ngPRo9reVBNCS7NwG3vbOLqKfEyIOVqv/mkSFq8xp0eRLvnA4uV2TZOBTJ435q+AssSgGm1ZIRPTh2DBbQOang5fSzpQ0vJFPaPlsbmJ5W00aV6JNQsQdJb6/4dabN9aMHxbxCQNM3UhQY2gcnUI2BBfpvQXG1NHM030XqIqug+chncnzlZpGkarBhlTovFa47YDZsSTPBsEfS6/6gNWXDVnznFhF8fkQ+tRhwU8kSKzw15QbkQg=="
const TEST_AES256_GCM_AUTH_TAG = "ZeJtcVEH8xR9DGxecK/RHQ=="
const TEST_AES256_GCM_AUTH_TAG_LEN = 16
const TEST_AES256_GCM_NONCE_LEN = 12
const TEST_AES256_GCM_KEY_LEN = 32
const TEST_AES256_GCM_KEY_BIT_LEN = 256
const TEST_AES256_GCM_BLOCK_LEN = 16

const TEST_ED25519_PRIVATE_KEY = "MC4CAQAwBQYDK2VwBCIEIH6c1lnY9jjHQK+C5v3EPYhZ5eh45oMDAaNZYlktuU3+"
const TEST_ED25519_PUBLIC_KEY = "MCowBQYDK2VwAyEAKl3xa1+EKi6Va3cNLXxmq4xO01PviLUx5mamNwXFgMQ="
const TEST_ED25519_SIGNATURE = "xVuPkRQL0jTT9XaZdPMw65dXE5MZ4XokhJ3wDNlNci6kr5Wktoh0cMwPedzlA6/ECMwNzt7WwQScyq9zt1yBBg=="
const TEST_ED25519_WRONG_SIGNATURE = "ziuGneVnQ9isQQIl6nSkOlrqNH0QUaeAWISeXAuepMCpBsY4ORYwR6ZtVGaIs8U63n4FLuiz3Q31Uzfdv15gAg=="
const TEST_ED25519_ENCRYPTED_DATA = "MIHfAgEAMCowBQYDK2VwAyEAYi11g/Jg5Or+CCcdiLHzYEbR6EREgqYeyaT5sDN6fs4wGAYHKIGMcQIFAjANBglghkgBZQMEAgIFADBBMA0GCWCGSAFlAwQCAgUABDD51HF4hJVBaSVcxeFc36508R3WcF6lX+HemJFkR9TodnZleEMVzEm5G6NFL7eZrtYwUTAdBglghkgBZQMEASoEEI0T7pQDmzUiQI1H6bKXvO0EMMXE0/cWzoUqVUZ6+qbT9brt57Zr90+L3n5HV0qEMSnqkhEGwtjQnBw92xkEtJVOtA=="
const TEST_ED25519_KEY_LEN = 32
const TEST_ED25519_KEY_BIT_LEN = 256
const TEST_ED25519_SIGNATURE_LEN = 64

const TEST_RSA_PRIVATE_KEY = "MIIEvAIBADANBgkqhkiG9w0BAQEFAASCBKYwggSiAgEAAoIBAQCufWmFCqTg9a/51pluKgoQtlBTWZAi3A4/OAgWPBE3lRmot9rTRW2NNjFftNIb0pTNjaOYxafQFJXoGrWjgXbJOrPS0C9K667N58SAO17gDNuEUBmfxPAZKRZPTJhkfG44WYxElQfJeq5VRioThWOASxR6TOjQhLKndUnK0ajZMHlUyewiRIeWs44PrP9rmAcJz5dKEiC3hWQ2yYGFVwZA+g72A2XDpfqq+fZb8mYljy2dOEsUA+Wa8FsfP2H5QRV2Z8inIYd4uKOJap3DfesDNP+KueVx6fKvp/S3CHi7H39Lph1aPkpm397mMGM/mflsjfHdFoImPuQ+l3p99myLAgMBAAECggEAK1sGCQSoCy2A2Dc2UGUpsxVZyBwM8Fx1PcgSWlP6gzEM+xsTyEMMAXZhtkIbosYkKx7yc1dJZy52QQHB+CqG9WEcpVkNJzSAbrET5jjaThljwfCVLVmlvtqyrGl/xBgW2vGFJNVS5gERqCaS9d7C5nHBWNIbVxRhv7Io77hAmBZGRx8Cp8qVwyZPj02H2qDLe4glXyKEqdMOF3eMUF+tjBB2ujQ3QmzFlOH1oEbNf0g/qMSN23ddxkh5MfJrGTPHn0EK3Wa4oJO3r74MIC5dbthi22GzJZsh+2QkPlhNiA1v3xC6SM/1ar4YH3gZcN+vKolbUfkpBYallAfgrz8vwQKBgQDUs/GA7NMo/Z8qwivAdjkFvog1gUenVnwAt2FBZ4eFf/yJV6rNW+wQ0K+SBzsYHwVPYxMvG8ges7Hi+LDiPTWkRNusmggIzt6PngWfaymTcM+mLFuaObtMukCLVGcOp1PVOEJiVo9gkKgddtEFD0SdpH2GBDVZXCJ0F47sv+RgcwKBgQDSAitVqJBIr+fCvCnJrXwWSsgXR0CCnhntrTlHmdFL32T8HNJw733sFytZy07jyDF4VuEnSdZjhVyJN4qVb3hH9PrQjVuNxEH1LYVhek95gpVdleLQKrByasZPH6aSob2UX3g1nRWhakEEcdJOI1yW65XU36nWXpXBSxsX2V01iQKBgApqOTQP5JMIQCfu1AebglVGrBK6ntCRyoaadBeowxkFWE89TK67hoaYQVCMLBeVRURK3KCc4qKmN9qeRML/LkY53OvJqwULZBhyK2JP8/w1NOW1HFMj6ojqQcjQvC8agF9bXtzD0kdvLdwrejaeNcTmTgMm55nVihZXJPdwufUDAoGAAMThQ78KSDncr2ng/UwVWD+N3Af2xIOvtJ8dxpVZnt2CkSnJ24AFBghPsFR+RXdGNxqaWHp8voCOhjId3844sorDIGBkJXDCjRNNmb3I7Lj9swoJepmta73YXBHRmlfdSd3PouKgYabx9gI0svSOMj9KnSz0gkR2Z+7OepfhL4ECgYBSYEE9SZB/ouBKF0N6u+kHZNmTSAf4YCBaaAfmmI/OyDdVL52BRKgW3Xw64oKiWY60/IlOP+l3yZDs5zpZ/hSouS3FUPdrbTbas9qe0uYcrxaJolsPrbKv+uvnnIqxo6TsNv7tQ0DADf+x01iguNORJAac1UIH8R9th4XP5Og0zg=="
const TEST_RSA_PUBLIC_KEY = "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEArn1phQqk4PWv+daZbioKELZQU1mQItwOPzgIFjwRN5UZqLfa00VtjTYxX7TSG9KUzY2jmMWn0BSV6Bq1o4F2yTqz0tAvSuuuzefEgDte4AzbhFAZn8TwGSkWT0yYZHxuOFmMRJUHyXquVUYqE4VjgEsUekzo0ISyp3VJytGo2TB5VMnsIkSHlrOOD6z/a5gHCc+XShIgt4VkNsmBhVcGQPoO9gNlw6X6qvn2W/JmJY8tnThLFAPlmvBbHz9h+UEVdmfIpyGHeLijiWqdw33rAzT/irnlcenyr6f0twh4ux9/S6YdWj5KZt/e5jBjP5n5bI3x3RaCJj7kPpd6ffZsiwIDAQAB"
const TEST_RSA_SIGNATURE = "ayADYfhWwGhlVvSlIovH152d4QV53XtCLfdhyeVgTA9kzWtO8DPwQ9cLYIrTt06WScjj0ZlA570kA0J5fank1CN2z8bProJFQomKcFfpEiV/fk5jpPzW7R4O1GYy7RSJLHMJnWFpjqeWXAZO5+F9TiDTheJu9zym+oq244VN+Ag/fjIr9FjkydkHeaV6rJsknJE6EyW3LH5eorCB3T26sQKJbo5Qe4CW4zKdO9A2lLVRlHDoeZxNhtQ8Fi4d9UmDEaFT6Pc1ekKNqEN9SQgGcxR4iC2I7pNPRPwo9Bckxvj02IaLZlJQkBub4NEVwzgWr33lgKyPdNbLGHeSm4Yljw=="
const TEST_RSA_WRONG_SIGNATURE = "vFJ0BY6eqG608mPz8hDYzHgDO/WM5OADztUXAu/8Apc/IddwwWnOzcVSeUpxVgeGkRbkaqT5kvxPMZY4LzQpw7z5lqNr+U6/Gk33NvoueASCmcZP23P1t3Hk/7C2HlfGGwHmexmXMxeudvnrxGqMkdj3euJFWusphIg5lnn5qVoCC20lBcZOmf/chRAldp9WMkrszfGEudnOsEhVCDeDJNZcgObCsJ7jPuQB6WZsOmpuksTbMqVFq3mIdM31rjNaaR4t4cGuW881csQGffkXEGPb5Q7HpNcitGyaBHAvcJbFVy8V6LGDtMEkc7ML5NQhwzQ9Tj+AYaf8PjqRM2qaaw=="
const TEST_RSA_ENCRYPTED_DATA = "KsbYNjf2oKm5lCUtqkzGefhfQqgPKmcBMjdJle3AO1NxuMwwQDKVMTti8OWq/CpnM5FXkhKSAjzBp8rxc4IXSBNkkvc/+jfXT5X1Tm6M03I82B2MMi5Y7/x8p2DRg+KusSf6OHQFCI2MQLZyj/BqQHUA0REIe7at3SeBcyahzVmQcHcliLGkH3SBJ0+loLw7kUDH3BRnvjfgwfAbrLzL5T7GMrbWoH9Ne6K+qJ8n8Y0a1z8qWPxfx+fH5WW/eOKL8WiSVqzc4Sbi71DyynWUmsspEdUD1Phz1qDgmP05yUDLTsYaXUytCfr8VZbin1sNdZsTf6mzooxZfQty3/qW8Q=="
const TEST_RSA_KEY_LEN = 256
const TEST_RSA_KEY_BIT_LEN = 2048

const TEST_SHA224_DIGEST_LEN = 28
const TEST_SHA224_BLOCK_LEN = 64
const TEST_SHA224_HASH = "FkwKT7zIFzDpO+YCq/XzYDG7GgIoPON95mlwYQ=="

const TEST_SHA256_DIGEST_LEN = 32
const TEST_SHA256_BLOCK_LEN = 64
const TEST_SHA256_HASH = "ZagJz3SkarIx8ZwKfUSycc8qzChJk1Ehblx3tJpLdKA="

const TEST_SHA384_DIGEST_LEN = 48
const TEST_SHA384_BLOCK_LEN = 128
const TEST_SHA384_HASH = "x2wOiOkl3R9M4rCTSzI8B3Fu+r5tCDCfIXeioHj8gXohihi9+s4LOR89cPcNfAeU"

const TEST_SHA512_DIGEST_LEN = 64
const TEST_SHA512_BLOCK_LEN = 128
const TEST_SHA512_HASH = "dwQYglm3VdtcqhlYW/szvTdYwu1KbdHqllyL7G20u8aZeVNtHWmfp1Vd+AcKVymfIFFLQRrG7lSHF3HfePQDLg=="

const TEST_ASN1_ASN1_ENCODED_INT_2_BYTES = ""

const TEST_KEY_PROVIDER_WRONG_KEY = "MIIB4QIBADCCAT8GCSqGSIb3DQEHA6CCATAwggEsAgECMYH+MIH7AgECoAoECEMoiy2L/B1oMAUGAytlcASB4jCB3wIBADAqMAUGAytlcAMhANuNm+oTawFCyBg+WSFkyT39KKcF4H+c+Cs6xz7QeQBwMBgGByiBjHECBQIwDQYJYIZIAWUDBAICBQAwQTANBglghkgBZQMEAgIFAAQw5NBsLcLbYdRkxTqKKWCLd8bkChN2b3ouj066qZoJ7ShIq62/J6bY7ks7YeEZKCcHMFEwHQYJYIZIAWUDBAEqBBDudjPh7qatkDijeQNw0uxyBDBJjFXVI+GPVhGxf2Ov5LnUQoSJhVkE5rQ1a5WybdmAJas9QDBovqh/5hVe+DciyaAwJgYJKoZIhvcNAQcBMBkGCWCGSAFlAwQBLgQMou3RXvIrIh3WD4GXoIGYMYGVMCMMFVZJUkdJTC1EQVRBLVNJR05FUi1JRKIKBAhDKIsti/wdaDBuDBVWSVJHSUwtREFUQS1TSUdOQVRVUkWiVQRTMFEwDQYJYIZIAWUDBAIDBQAEQJzSCzxISGQwdUtGCwpRoWm4fef9qPL3C8txkgxg0Iwik2mHpbaAz/CrqSWJDM3WQ5gMBRXDTD55mo9XiGt+1QkLeIgVeOr4UFPJEeEdUXpeKDpyK0EDWerKoxwQ/SYrPmYifwMeQcAgYK2DiNrN05kNTfC04EfwNIisWKWdAdU9"
