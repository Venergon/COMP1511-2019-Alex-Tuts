//test.c
// BY Thurs13-sitar
// 26/09/19
// A simple messing around thing

#include <stdio.h>

#define DAYS_IN_WEEK 7

int main(void) {
    int daysLeftInWeek = 4;

    if (daysLeftInWeek <= 2) {
         printf("It's the weekend!\n");
    } else if (daysLeftInWeek == 3) {
         printf("It's Friday\n");
    } else {
         printf("It's still a weekday\n");
    }
}
