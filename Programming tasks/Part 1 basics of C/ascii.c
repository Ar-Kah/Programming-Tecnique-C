#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int first = atoi(argv[1]);
    int second = atoi(argv[2]);

    if (argc != 3) {
        printf("Invalid input!");
        return 1;
    }


    for (first; first <= second; first++) {
        printf("%d: %c\n", first, first);
    }

    return 0;
}