#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char **argv) {
    int i, j;
    int count = 0;
    int correct[6];
    
    for (i = 0; i < 6; i++) {
        correct[i] = INT_MIN;
    }

    /*
    check for correct input
    must consisto of 7 lottory numbers and
    7 guessed numbers
    */
    if (argc != 15) {
        printf("Invalid input!");
        return 1;
    }

    printf("Voittorivi:");
    for (i = 1; i < 8; i++) {
        printf(" %s", argv[i]);
    }
    printf("\n");

    printf("Lottorivi:");
    for (j = 8; j < 15; j++) {
        printf(" %s", argv[j]);
    }
    printf("\n");

    for (i = 8; i < 15; i++) {
        for (j = 1; j < 8; j++) {
            if (atoi(argv[i]) == atoi(argv[j])) {
                correct[count] = atoi(argv[i]);
                count++;
                continue;
            }
        }
    }

    if (count == 0) {
        printf("Ei yhtään oikein!\n");
    } else {
        printf("%d oikein:", count);
        for (i = 0; i < 6; i++) {
            if (correct[i] == INT_MIN) {continue;}
            printf(" %d", correct[i]);
        }
        printf("\n");
    }

    return 0;
}