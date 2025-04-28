#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<time.h>
#include "gotokoe.h"

int max2D(int **t2d, int kork, int lev)
{
    int i, j, max;
    i = 0;
    j = 0;
    max = INT_MIN;

outer_loop:
    if (i == kork) goto end;

    j = 0;

inner_loop:
    if (j == lev) goto increment_i;

    if (t2d[i][j] > max) goto swap;

    j++;
    goto inner_loop;

increment_i:
    i++;
    goto outer_loop;

swap:
    max = t2d[i][j];
    j++;
    goto inner_loop;

end: return max;
}