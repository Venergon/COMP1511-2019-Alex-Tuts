// leap_year.c
// A program to determine whether a year is a leap year
// By Thurs13-sitar
// 26/09/19

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
    int year = 0;
    printf("Enter year: ");
    scanf("%d", &year);

    int isLeapYear = FALSE;

    if (year % 4 != 0) {
        // Not divisible by 4, common year
        isLeapYear = FALSE;
    } else if (year % 100 != 0) {
        // Divisible by 4 but not 100, leap year
        isLeapYear = TRUE;
    } else if (year % 400 != 0) {
        // Divisible by 100 but not 400, common year
        isLeapYear = FALSE;
    } else {
        // Divisible by 400, leap year
        isLeapYear = TRUE;
    }

    if (isLeapYear == TRUE) {
        printf("Leap year!\n");
    } else {
        printf("Not a leap year :(\n");
    }

    return EXIT_SUCCESS;
}
