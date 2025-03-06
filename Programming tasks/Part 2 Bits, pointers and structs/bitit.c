#include "bitit.h"
#include <stdio.h>

void scharBitit(signed char x) {
    int bit, i;
    int zeroes = 0;
    int ones = 0;
    printf("%d\n", x);
    for (i = sizeof(signed char) * 8 - 1; i >= 0; i--) {
        bit = (x >> i) & 1;
        printf("%d", bit);
        bit == 1 ? ones++ : zeroes++;
    }
    printf("\n");
    printf("%d\n", zeroes);
    printf("%d\n", ones);
}

void shortBitit(short int x) {
    int bit, i;
    int zeroes = 0;
    int ones = 0;
    printf("%d\n", x);

    for (i = sizeof(short int) * 8 - 1; i >= 0; i--) {
        bit = (x >> i) & 1;
        printf("%d", bit);
        bit == 1 ? ones++ : zeroes++;
    }
    printf("\n");
    printf("%d\n", zeroes);
    printf("%d\n", ones);
}

void intBitit(int x) {
    int bit, i;
    int zeroes = 0;
    int ones = 0;
    printf("%d\n", x);

    for (i = sizeof(int) * 8 - 1; i >= 0; i--) {
        bit = (x >> i) & 1;
        printf("%d", bit);
        bit == 1 ? ones++ : zeroes++;
    }
    printf("\n");
    printf("%d\n", zeroes);
    printf("%d\n", ones);
}

void longBitit(long int x) {
    int bit, i;
    int zeroes = 0;
    int ones = 0;
    printf("%ld\n", x);

    for (i = sizeof(long int) * 8 - 1; i >= 0; i--) {
        bit = (x >> i) & 1;
        printf("%d", bit);
        bit == 1 ? ones++ : zeroes++;
    }
    printf("\n");
    printf("%d\n", zeroes);
    printf("%d\n", ones);
}
