// cm2feet.c
// By Thu13-Sitar
// 3/10/19
// A program to convert centimetres to inches

#include <stdio.h>
#include <stdlib.h>

#define CM_PER_INCH 2.54
#define INCHES_PER_FOOT 12

int main(void) {
    double height_cm;
    printf("Enter your height in centimetres: ");
    scanf("%lf", &height_cm);
    
    double height_inches = height_cm / CM_PER_INCH;
    double height_feet = height_inches / INCHES_PER_FOOT;
    
    printf("Your height in feet is %.0lf\n", height_feet);
    
    return 0;
}
