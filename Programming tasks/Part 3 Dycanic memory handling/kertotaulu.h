#ifndef KERTOTAULU_H
#define KERTOTAULU_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef unsigned int uint;

typedef struct {
    uint a;
    uint b;
    uint c;
    uint d;
    uint **kertotaulu;
} Kertotaulu;

/* Function declarations */
Kertotaulu *luoKertotaulu(uint a, uint b, uint c, uint d);
void tuhoaKertotaulu(Kertotaulu *kt);

#endif
