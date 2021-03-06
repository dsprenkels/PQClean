#ifndef PQCLEAN_DILITHIUMIII_CLEAN_API_H
#define PQCLEAN_DILITHIUMIII_CLEAN_API_H

#include <stddef.h>
#include <stdint.h>

#define MODE 2

#define PQCLEAN_DILITHIUMIII_CLEAN_CRYPTO_PUBLICKEYBYTES 1472U
#define PQCLEAN_DILITHIUMIII_CLEAN_CRYPTO_SECRETKEYBYTES 3504U
#define PQCLEAN_DILITHIUMIII_CLEAN_CRYPTO_BYTES          2701U

#define PQCLEAN_DILITHIUMIII_CLEAN_CRYPTO_ALGNAME "Dilithium-III"

int PQCLEAN_DILITHIUMIII_CLEAN_crypto_sign_keypair(uint8_t *pk,
        uint8_t *sk);

int PQCLEAN_DILITHIUMIII_CLEAN_crypto_sign(uint8_t *sm,
        size_t *smlen,
        const uint8_t *msg,
        size_t len,
        const uint8_t *sk);

int PQCLEAN_DILITHIUMIII_CLEAN_crypto_sign_open(uint8_t *m,
        size_t *mlen,
        const uint8_t *sm,
        size_t smlen,
        const uint8_t *pk);

#endif
