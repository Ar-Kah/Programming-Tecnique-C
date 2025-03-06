#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
    int i;
    double fp = 0.0;
    char sign;
    int signInt;
    int value = 0;
    double fraction = 0.0;

    for (i = 9; i < 32; i++) {
        if (argv[1][i] == '1') {
            fraction += 1 / (pow(2, i - 8));
        }
    }
    printf("%.15f\n", fraction + 1);

    sign = argv[1][0] == '1' ? '-' : '+';

    for (i = 1; i < 9; i++) {
        if (argv[1][i] == '1') {
            value += (int)pow(2, 7 - (i - 1));
        }
    }
    printf("%d\n", value - 127);

    printf("%c\n", sign);

    signInt = sign == '+' ? 1 : -1;

    fp = (signInt) * pow(2, value - 127) * (fraction + 1);
    printf("%.15f\n", fp);

    return 0;
}
