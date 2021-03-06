#ifndef BLAKE2_AVX2_BLAKE2BIP_H
#define BLAKE2_AVX2_BLAKE2BIP_H

#include <stddef.h>

typedef uint32_t u32;
typedef unsigned char uchar;

void blake2bip_final(const blake2b_state *midstate, uchar *hashout, u32 blockidx);

#endif
