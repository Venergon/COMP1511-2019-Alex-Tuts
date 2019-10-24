// sum_digits.c
// By thurs13-sitar
// 24/10/19
// A program to read digits from standard input and sum them

#include <ctype.h>
#include <stdio.h>

int main(void) {
    int character = getchar();
    int digit_count = 0;
    int digit_sum = 0;
    
    while (character != EOF) {
        if (isdigit(character)) {
            // Found another digit, increase count and sum accordingly
            digit_count++;
            digit_sum += character - '0';
        }
        
        character = getchar();
    }
    
    printf("%d digits were found with a sum of %d\n", digit_count, digit_sum);
    
    return 0;
}
