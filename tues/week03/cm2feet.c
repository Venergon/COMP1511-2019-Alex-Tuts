// cm2feet.c
// By tues11-kora
// 1/10/19
// A program to convert centimetres to feet

#include <stdio.h>
#include <stdlib.h>

#define CM_PER_INCH 2.54
#define INCHES_PER_FOOT 12

int main(void) {
    // Get height in cm
    printf("Enter your height in centimetres: ");
    
    double cm;
    scanf("%lf", &cm);
    
    // Convert to feet through inches
    double inches = cm / CM_PER_INCH;
    double feet = inches / INCHES_PER_FOOT;

    printf("Your height in feet is %lf\n", feet);
    
    return 0;
}
