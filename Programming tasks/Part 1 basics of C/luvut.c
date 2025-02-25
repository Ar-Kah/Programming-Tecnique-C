#include <stdio.h>

int main(void) {
    int isFirst = 1;
    int i = 0;
    for (i; i < 100; i++) {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {continue;}
        
        if (isFirst == 0) {
            printf(" ");
        }

        printf("%d", i);
        
        isFirst = 0;
    }
    printf("\n");

    return 0;
}