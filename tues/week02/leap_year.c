// leap_year.c
// By tues11-kora
// 24/09/19
// A program to work out if a year is a leap year

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
    int year;
    int is_leap_year = FALSE;
    printf("Enter year: ");
    scanf("%d", &year);

    // if (year is not divisible by 4) then (it is a common year)
    // else if (year is not divisible by 100) then (it is a leap year)
    // else if (year is not divisible by 400) then (it is a common year)
    // else (it is a leap year) 
    if (year % 4 != 0) {
        // Year is not divisible by 4 therefore not a leap year
        is_leap_year = FALSE;
    } else if (year % 100 != 0) {
        // Year divisible by 4 but not 100, therefore leap year
        is_leap_year = TRUE;
    } else if (year % 400 != 0) {
        // Year divisible by 100 but not 400 so is not a leap year
        is_leap_year = FALSE;
    } else {
        // Year divisible by 400 so leap year
        is_leap_year = TRUE;
    }

    if (is_leap_year == TRUE) {
        printf("Leap year!\n");
    } else {
        printf("Not a leap year :(\n");
    }

    return EXIT_SUCCESS;
}
