// rectangle_area.c
// By tues11-kora
// 24/09/19
// A program to calculate the area of a rectangle

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int length = 0;
    int width = 0;
    int area = 0;
    printf("Please enter rectangle length: ");
    scanf("%d", &length);
    printf("Please enter rectangle width: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area = %d\n", area);

    return EXIT_SUCCESS;
}
