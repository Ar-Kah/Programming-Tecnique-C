#include <stdio.h>
#include <stdlib.h>
#include "vaihto.h"

void vaihda(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void jarjesta(int *a, int *b, int *c)
{
    if (*a > *b) {
        if (*b > *c) {
            vaihda(a, c);
        }
        else {
            vaihda(a, b);
            if (*b > *c) {
                vaihda(b, c);
            }
        }
    }
    else if (*b > *c) {
        vaihda(b, c);
        if (*a > *b) {
            vaihda(a, b);
        }
    }
}
