#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    double result, result2, discriminant, a, b, c;
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);
    discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf ("Ei ratkaisua\n");
    } else if (discriminant == 0) {
        result = (-b)/(2*a);
        printf("%.3f\n", result);
    } else {
        result = (-b + sqrt(discriminant)) / (2 * a);
        result2 = (-b - sqrt(discriminant)) / (2 * a);
        if (result > result2) {
            printf("%.3f %.3f\n", result2, result);
        }else {
            printf("%.3f %.3f\n", result, result2);
        }
    }
    return 0;
}