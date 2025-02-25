#include <stdio.h>
#include <stdlib.h>

#define BOOL int
#define TRUE 1
#define False 0

int main(int argc, char **argv) {

    int isfirst = 1;
    int first = atoi(argv[1]);
    int max = atoi(argv[2]);
    int devided;
    int i, j;
    BOOL isDevidable;

    if (argc < 3) {
        printf("Invalid input!");
        return 1;
    }

    for (i = first; i <= max; i++) {
        for (j = 3; j < argc; j++) {
            devided = atoi(argv[j]);
            if (i % devided == 0) {
                break;
            }
        }

        if (!isfirst) {
            printf(" ");
        }

        printf("%d", i);
        isfirst = 0;
    }

    return 0;
}