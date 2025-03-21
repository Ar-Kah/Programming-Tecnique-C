#include "muunna.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void muunnaTaulu(unsigned int s, double *array, double (*trans)(double))
{
    int i;
    for (i = 0; i < s; i++) {
        array[i] = trans(array[i]);
    }
}
