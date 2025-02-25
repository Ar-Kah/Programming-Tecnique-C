#include <stdio.h>

int main(void) {
    int i, j, x, times;

    printf("   x");
    for (x = 1; x <= 15; x++) {
        printf("%4d", x);
    }
    printf("\n");

    for (i = 1; i <= 15; i++) {
        printf("%4d", i);
        for (j = 1; j <= 15; j++) {
            times = i * j;
            printf("%4d", times);
        }
        printf("\n");
    }
    return 0;
}