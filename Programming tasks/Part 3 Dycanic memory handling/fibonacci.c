#include "fibonacci.h"
#include <stdlib.h>
#include <stdio.h>

char *fib_jono_mj(unsigned int n) {
    int cap, used, m;
    unsigned int a, b, temp, i, num;
    char *string, *new_string;

    if (n == 0) {
        char *empty_str = malloc(1);
        if (!empty_str) return NULL;
        empty_str[0] = '\0';
        return empty_str;
    }

    cap = 1;
    used = 1;
    string = malloc(cap);
    if (!string) return NULL;
    string[0] = '\0';

    a = 0;
    b = 1;

    m = 1;
    while (used + m > cap) cap *= 2;
    new_string = realloc(string, cap);
    if (!new_string) {
        free(string);
        return NULL;
    }
    string = new_string;
    sprintf(string, "%u", a);
    used += m;

    for (i = 1; i < n; i++) {
        temp = a + b;
        a = b;
        b = temp;

        m = 2;
        num = a;
        while (num > 0) { 
            m++; 
            num /= 10; 
        }

        while (used + m > cap) cap *= 2;
        new_string = realloc(string, cap);
        if (!new_string) {
            free(string);
            return NULL;
        }
        string = new_string;

        sprintf(string + used - 1, ", %u", a);
        used += m;
    }

    new_string = realloc(string, used);
    if (!new_string) {
        free(string);
        return NULL;
    }
    return new_string;
}
