#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
    int i, precision;
    double number;

    if (argc < 3) {
        printf("Usage: %s <precision> <numbers>...\n", argv[0]);
        return 1;
    }

    precision = atoi(argv[1]);
    if (precision < 0) {
        printf("Precision must be non-negative.\n");
        return 1;
    }

    for (i = 2; i < argc; i++) {
        number = atof(argv[i]);
        printf("sqrt(%.*f) = %.*f\n", precision, number, precision, sqrt(number));
    }

    return 0;
}
