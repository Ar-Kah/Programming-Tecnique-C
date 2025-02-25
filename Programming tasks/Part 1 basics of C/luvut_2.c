#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    int isfirst = 1;
    int first = atoi(argv[1]);
    int max = atoi(argv[2]);
    int devided;
    int i, j;
    int isDevidable = 0;

    for (i = first; i <= max; i++) {
        for (j = 3; j < argc; j++) {
            devided = atoi(argv[j]);
            if (devided == 0) {continue;}
            
            if (i % devided == 0) {
                isDevidable = 1;
                break;
            }
            isDevidable = 0;
        }

        if (!isfirst && !isDevidable) {
            printf(" ");
        }
        if (!isDevidable) {
            printf("%d", i);
            isfirst = 0;
        }
    }
    if (isfirst) {
        return 0;
    }
    printf("\n");
    return 0;
}