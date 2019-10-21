// count_up.c
// By tues11-kora
// 1/10/19
// A program to count up to a given number

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Get the end point
    printf("Enter finish: ");
    int finish;
    scanf("%d", &finish);
    
    int i = 1;
    // Count up to the finish
    while (i <= finish) {
        printf("%d\n", i);
        i = i + 1;
    }
    
    return 0;
}
