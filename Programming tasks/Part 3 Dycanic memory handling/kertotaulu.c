#include "kertotaulu.h"
#define NULL ((void *)0)

/* Constructor function */
Kertotaulu *luoKertotaulu(uint a, uint b, uint c, uint d) {
    uint i, j, rows, cols;
    Kertotaulu *kt;
    if (a > b || c > d) return NULL;

    kt = (Kertotaulu *)malloc(sizeof(Kertotaulu));
    if (!kt) return NULL;

    kt->a = a;
    kt->b = b;
    kt->c = c;
    kt->d = d;

    rows = d - c + 2;
    cols = b - a + 2;
    kt->kertotaulu = (uint **)malloc(rows * sizeof(uint *));
    if (!kt->kertotaulu) {
        free(kt);
        return NULL;
    }

    for (i = 0; i < rows; i++) {
        kt->kertotaulu[i] = (uint *)malloc(cols * sizeof(uint));
        if (!kt->kertotaulu[i]) {
            for (j = 0; j < i; j++) {
                free(kt->kertotaulu[j]);
            }
            free(kt->kertotaulu);
            free(kt);
            return NULL;
        }
    }

    kt->kertotaulu[0][0] = 0;

    for (j = 1; j < cols; j++) {
        kt->kertotaulu[0][j] = a + j - 1;
    }

    for (i = 1; i < rows; i++) {
        kt->kertotaulu[i][0] = c + i - 1;
    }

    for (i = 1; i < rows; i++) {
        for (j = 1; j < cols; j++) {
            kt->kertotaulu[i][j] = kt->kertotaulu[i][0] * kt->kertotaulu[0][j];
        }
    }

    return kt;
}

void tuhoaKertotaulu(Kertotaulu *kt) {
    uint i;
    if (!kt) return;

    for (i = 0; i < (kt->d - kt->c + 2); i++) {
        free(kt->kertotaulu[i]);
    }

    free(kt->kertotaulu);
    free(kt);
}