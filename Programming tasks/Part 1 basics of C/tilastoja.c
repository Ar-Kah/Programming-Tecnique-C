#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

#define ARRAY_SIZE 15

int main(int argc, char **argv) {
    int i, j, x, z;
    int count = 0;
    double number1, number2;
    double minimum = INT_MAX;
    double maximum = INT_MIN;
    double uniques[ARRAY_SIZE];
    int mostAmount = 0;
    double notUnique[ARRAY_SIZE];

    for (i = 0; i < ARRAY_SIZE; i++) {
        uniques[i] = INT_MIN;
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        notUnique[i] = INT_MIN;
    }


    for (i = 1; i <= argc; i++) {
        number1 = atof(argv[i]);
        /*Compare number to max*/
        if (maximum < number1) {
            maximum = number1;
        }
        /*Compare number to min*/
        if (minimum > number1) {
            minimum = number1;
        }

        for (j = 1; j < argc; j++) {
            number2 = atof(argv[j]);
            if (number1 == number2) {
                count++;
            }

        }
        if (count > 1) {
            if (count > mostAmount) {
                for (x = 0; x < ARRAY_SIZE; x++) {
                    notUnique[x] = INT_MIN;
                }
                notUnique[0] = number1;
                mostAmount = count;
                break;
            }
            
            else if (count == mostAmount) {
                for (x = 0; x < ARRAY_SIZE; x++) {
                    
                    if (notUnique[x] == INT_MIN) {
                        notUnique[x] = number1;
                        break;
                    }
                }
            }
        }
        count = 0;
    }

    printf("Pienin: %.6f\n", minimum);
    printf("Suurin: %.6f\n", maximum);
    printf("Ainutlaatuiset:");

    for (i = 0; i < ARRAY_SIZE; i++) {
        if (uniques[i] != INT_MIN) {
            printf(" %.6f", uniques[i]);
        }
    }
    printf("\n");

    printf("Useimmiten esiintyväy: (%d kertaa):", mostAmount);
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (notUnique[i] != INT_MIN) {
            printf(" %.6f", notUnique[i]);
        }
    }
    printf("\n");

    return 0;
}