// read_numbers.c
// By thurs13-sitar
// 10/10/19
// A program to echo numbers until a non-number is entered

#include <stdio.h>
#include <stdlib.h>

#define NUM_EXPECTED_INPUTS 2

int main(void) {
    int num1;
    int num2;
    
    // Read in two numbers in a row
    int result = scanf("%d %d", &num1, &num2);
    while (result == NUM_EXPECTED_INPUTS) {
        // Swap the two numbers
        printf("%d %d\n", num2, num1);
        result = scanf("%d %d", &num1, &num2);
    }
    
    return EXIT_SUCCESS;
}
