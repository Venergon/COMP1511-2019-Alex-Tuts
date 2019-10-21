// range.c
// By tues11-kora
// 1/10/19
// A program to count from one number to another

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Get the start
    printf("Enter start: ");
    int start;
    scanf("%d", &start);
    
    // Get the end point
    printf("Enter finish: ");
    int finish;
    scanf("%d", &finish);
    
    // Get the divisor
    printf("Enter divisor: ");
    int divisor;
    scanf("%d", &divisor);
    
    int i = start;
    // Count up to the finish
    while (i <= finish) {
        if (i % divisor == 0) {
            printf("%d\n", i);
        }
        i = i + 1;
    }
    
    return 0;
}
