#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i, j, x, devided, times;
    char space = ' ';
    int count = 0;

    devided = atoi(argv[2]) * atoi(argv[4]);
    /*Claculate how many spaces we need*/
    count++;
    while(devided / 10 != 0) {
        count++;
        devided = devided / 10;
    }
    count++;

    printf("%*c", count, space);
    for (x = atoi(argv[1]); x <= atoi(argv[2]); x++) {
        printf("%*d", count, x);
    }
    printf("\n");

    for (i = atoi(argv[3]); i <= atoi(argv[4]); i++) {
        printf("%*d",count ,i);
        for (j = atoi(argv[1]); j <= atoi(argv[2]); j++) {
            times = i * j;
            
            printf("%*d", count, times);
        }
        printf("\n");
    }
    return 0;
}