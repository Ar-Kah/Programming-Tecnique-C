#include "mjonot.h"
#include <stdlib.h>
#include <string.h>

char **kopioi_mjt(char **strs, size_t n)
{
    int i;
    char **copies;
    copies = (char**)malloc(n * sizeof(char*));

    for (i = 0; i < n; i++) {

        size_t len = strlen(strs[i]) + 1;
        copies[i] = (char*)malloc(len * sizeof(char));

        strcpy(copies[i], strs[i]);
    }

    return copies;
}
