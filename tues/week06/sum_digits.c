// sum_digits.c
// by tue11-kora
// 22/10/19
// A program to find all of the digits in the input and sum them

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int input = getchar();
    int count = 0;
    int sum = 0;
    
    while (input != EOF) {
        if (isdigit(input)) {
            count++;
            sum += input - '0';
        }
        
        input = getchar();
    }
    
    printf("Input contained %d digits which summed to %d\n", count, sum);
    return EXIT_SUCCESS;
}
