// rectangle_width.c
// By Thurs13-sitar
// 26/09/19
// A program to calculate the width of a rectangle

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int length = 0;
    int area = 0;
    double width = 0;

    printf("Please enter rectangle length: ");
    scanf("%d", &length);
    printf("Please enter rectangle area: ");
    scanf("%d", &area);

    width = (double) area / length;
    printf("A rectangle with length %d and area %d has width = %lf\n", length, area, width);
    return EXIT_SUCCESS;
}
