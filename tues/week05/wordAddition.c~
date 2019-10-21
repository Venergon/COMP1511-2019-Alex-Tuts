// wordAddition.c
// A program to read in two numbers and print out their num as words
// By Alex Rowell z5116848
// Made Tuesday 1st October 2019

#include <stdio.h>
#include <stdlib.h>

void printNumInWords(int num);

int main(void) {
    int num1, num2;

    // Get the numbers from the user
    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;

    printNumInWords(num1);


    // The plus is common so we can print that regardless
    printf(" + ");
    
    printNumInWords(num2);

    // The equals is also common
    printf(" = ");

    printNumInWords(sum);

    // Add a newline at the end so that there is a newline before exiting
    printf("\n");

    return 0;
}

void printNumInWords(int num) {
    if (num < -10 || num > 10) {
        // We are only printing the words for numbers between
        // -10 and 10, instead print the num as digits
        printf("%d", num);
    } else if (num == -10) {
        printf("negative ten");
    } else if (num == -9) {
        printf("negative nine");
    } else if (num == -8) {
        printf("negative eight");
    } else if (num == -7) {
        printf("negative seven");
    } else if (num == -6) {
        printf("negative six");
    } else if (num == -5) {
        printf("negative five");
    } else if (num == -4) {
        printf("negative four");
    } else if (num == -3) {
        printf("negative three");
    } else if (num == -2) {
        printf("negative two");
    } else if (num == -1) {
        printf("negative one");
    } else if (num == 0) {
        printf("zero");
    } else if (num == 10) {
        printf("ten");
    } else if (num == 9) {
        printf("nine");
    } else if (num == 8) {
        printf("eight");
    } else if (num == 7) {
        printf("seven");
    } else if (num == 6) {
        printf("six");
    } else if (num == 5) {
        printf("five");
    } else if (num == 4) {
        printf("four");
    } else if (num == 3) {
        printf("three");
    } else if (num == 2) {
        printf("two");
    } else { // num == 1
        printf("one");
    }
}
