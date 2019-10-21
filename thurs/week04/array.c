// array.c
// By thurs13-sitar
// 10/10/19
// Some testing with arrays

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 20

int main(void) {
    int squares[ARRAY_SIZE] = {0};
    
    int sum = 0;
    int i = 0;
    while (i < ARRAY_SIZE) {
        squares[i] = i * i;
        sum += squares[i];
        i++;
    }
    
    printf("The sum of squares from 0 to %d is %d\n", ARRAY_SIZE - 1, sum);
    
    
    
    return EXIT_SUCCESS;
}
