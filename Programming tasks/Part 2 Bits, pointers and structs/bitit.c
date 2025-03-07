#include "bitit.h"
#include <stdio.h>

void kaannaScharBitit(signed char *x) {
    signed char result;
    int i, bit;
    int numBits = sizeof(signed char) * 8;
    printf("%d\n", *x);

    for (i = numBits -1; i >= 0; i--) {
        bit = (*x >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    for (i = 0; i < numBits; i++) {
        result <<= 1;
        result |= (*x & 1);
        *x >>= 1;
    }
    *x = result;
    printf("%c", *x);
}

void kaannaShortBitit(short *x) {

}
void kaannaIntBitit(int *x) {

}
void kaannaLongBitit(long *x) {

}