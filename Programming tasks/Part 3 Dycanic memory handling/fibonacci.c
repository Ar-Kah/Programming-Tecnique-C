#include "fibonacci.h"
#include <stdlib.h>

unsigned int *fib_jono(unsigned int n)
{
    int i;
    unsigned int *ptr;

    ptr = (unsigned int*)malloc(n * sizeof(unsigned int));

    for (i = 0; i < n; i++) {
        if (i == 0) {
            ptr[i] = 0;
        } else if (i == 1) {
            ptr[i] = 1;
        } else {
            ptr[i] = ptr[i-1] + ptr[i-2];
        }
    }

    return ptr;
}