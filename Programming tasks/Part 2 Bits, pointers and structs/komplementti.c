#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 
  

int main(int argc, char **argv) {
    int i, length, number;
    number = 0;
    length = strlen(argv[1]);
    for (i = 1; i < length; i++) {

        if (argv[1][length - i] == '1') {
            number += (int)pow(2, i -1);
        }
    }

    if (argv[1][0] == '1') {
        number -= (int)pow(2, length - 1);
    }

    printf("%d\n", number);

    return 0;
}
