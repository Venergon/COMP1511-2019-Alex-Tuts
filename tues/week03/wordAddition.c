// wordAddition.c
// A program to read in two numbers and print out their sum as words
// By Alex Rowell z5116848
// Made Tuesday 1st October 2019

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1, num2;

    // Get the numbers from the user
    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;

    if (num1 < -10 || num1 > 10) {
        // We are only printing the words for numbers between
        // -10 and 10, instead print the number as digits
        printf("%d", num1);
    } else if (num1 == -10) {
        printf("negative ten");
    } else if (num1 == -9) {
        printf("negative nine");
    } else if (num1 == -8) {
        printf("negative eight");
    } else if (num1 == -7) {
        printf("negative seven");
    } else if (num1 == -6) {
        printf("negative six");
    } else if (num1 == -5) {
        printf("negative five");
    } else if (num1 == -4) {
        printf("negative four");
    } else if (num1 == -3) {
        printf("negative three");
    } else if (num1 == -2) {
        printf("negative two");
    } else if (num1 == -1) {
        printf("negative one");
    } else if (num1 == 0) {
        printf("zero");
    } else if (num1 == 10) {
        printf("ten");
    } else if (num1 == 9) {
        printf("nine");
    } else if (num1 == 8) {
        printf("eight");
    } else if (num1 == 7) {
        printf("seven");
    } else if (num1 == 6) {
        printf("six");
    } else if (num1 == 5) {
        printf("five");
    } else if (num1 == 4) {
        printf("four");
    } else if (num1 == 3) {
        printf("three");
    } else if (num1 == 2) {
        printf("two");
    } else { // num1 == 1
        printf("one");
    }


    // The plus is common so we can print that regardless
    printf(" + ");

    if (num2 < -10 || num2 > 10) {
        // We are only printing the words for numbers between
        // -10 and 10, instead print the number as digits
        printf("%d", num2);
    } else if (num2 == -10) {
        printf("negative ten");
    } else if (num2 == -9) {
        printf("negative nine");
    } else if (num2 == -8) {
        printf("negative eight");
    } else if (num2 == -7) {
        printf("negative seven");
    } else if (num2 == -6) {
        printf("negative six");
    } else if (num2 == -5) {
        printf("negative five");
    } else if (num2 == -4) {
        printf("negative four");
    } else if (num2 == -3) {
        printf("negative three");
    } else if (num2 == -2) {
        printf("negative two");
    } else if (num2 == -1) {
        printf("negative one");
    } else if (num2 == 0) {
        printf("zero");
    } else if (num2 == 10) {
        printf("ten");
    } else if (num2 == 9) {
        printf("nine");
    } else if (num2 == 8) {
        printf("eight");
    } else if (num2 == 7) {
        printf("seven");
    } else if (num2 == 6) {
        printf("six");
    } else if (num2 == 5) {
        printf("five");
    } else if (num2 == 4) {
        printf("four");
    } else if (num2 == 3) {
        printf("three");
    } else if (num2 == 2) {
        printf("two");
    } else { // num2 == 1
        printf("one");
    }

    // The equals is also common
    printf(" = ");

    if (sum < -10 || sum > 10) {
        // We are only printing the words for numbers between
        // -10 and 10, instead print the sum as digits
        printf("%d", sum);
    } else if (sum == -10) {
        printf("negative ten");
    } else if (sum == -9) {
        printf("negative nine");
    } else if (sum == -8) {
        printf("negative eight");
    } else if (sum == -7) {
        printf("negative seven");
    } else if (sum == -6) {
        printf("negative six");
    } else if (sum == -5) {
        printf("negative five");
    } else if (sum == -4) {
        printf("negative four");
    } else if (sum == -3) {
        printf("negative three");
    } else if (sum == -2) {
        printf("negative two");
    } else if (sum == -1) {
        printf("negative one");
    } else if (sum == 0) {
        printf("zero");
    } else if (sum == 10) {
        printf("ten");
    } else if (sum == 9) {
        printf("nine");
    } else if (sum == 8) {
        printf("eight");
    } else if (sum == 7) {
        printf("seven");
    } else if (sum == 6) {
        printf("six");
    } else if (sum == 5) {
        printf("five");
    } else if (sum == 4) {
        printf("four");
    } else if (sum == 3) {
        printf("three");
    } else if (sum == 2) {
        printf("two");
    } else { // sum == 1
        printf("one");
    }

    // Add a newline at the end so that there is a newline before exiting
    printf("\n");

    return 0;
}
