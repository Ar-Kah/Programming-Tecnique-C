#include "bitit.h"
#include <stdio.h>

void kaannaScharBitit(signed char *x) {
    signed char original = *x;
    signed char result = 0;
    int numBits = 8;
    int i;

    for (i = 0; i < numBits; i++) {
        result = (result << 1) | (original & 1);
        original >>= 1;
    }

    *x = result;
}



void kaannaShortBitit(short *x) {
    unsigned short original = (unsigned short)(*x);
    unsigned short result = 0;
    int numBits = 16;
    int i;

    for (i = 0; i < numBits; i++) {
        result = (result << 1) | (original & 1);
        original >>= 1;
    }

    *x = (short)result;
}
void kaannaIntBitit(int *x) {
    int original = *x;
    int result = 0;
    int numBits = 32;
    int i;

    for (i = 0; i < numBits; i++) {
        result = (result << 1) | (original & 1);
        original >>= 1;
    }

    *x = result;
}
void kaannaLongBitit(long *x) {
    long original = *x;
    long result = 0;
    int numBits = 64;
    int i;

    for (i = 0; i < numBits; i++) {
        result = (result << 1) | (original & 1);
        original >>= 1;
    }

    *x = result;
}