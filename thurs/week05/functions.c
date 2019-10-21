// functions.c
// by thurs13-sitar
// 17/10/19
// Messing around with functions

#include <stdio.h>

#define ARRAY_LENGTH 5
#define SCAN_SUCCESS 1

void printNumberAndDouble(int x);
int doubleNum(int x);
void printArray(int length, int nums[]);
int scanfArray(int length, int nums[]);

int main(void) {
    int numbers[ARRAY_LENGTH];
    int otherNumbers[2*ARRAY_LENGTH];
    int length = ARRAY_LENGTH;

    printf("Enter first array\n");
    int numScannedValues = scanfArray(length, numbers);
    printf("Enter second array\n");
    scanfArray(2*ARRAY_LENGTH, otherNumbers);

    printArray(numScannedValues, numbers);

    return 0;
}

void printNumberAndDouble(int x) {
    int doubledNum = doubleNum(x);

    printf("Double %d is %d\n", x, doubledNum);
}

// Double the input
int doubleNum(int x) {
    printf("Currently doubling %d\n", x);
    return 2*x;
}

// Prints an array, with commas in between each number
void printArray(int length, int nums[]) {
    int i = 0;

    while (i < length) {
        if (i < length - 1) {
            printf("%d,", nums[i]);
        } else {
            printf("%d", nums[i]);
        }
        i++;
    }
    printf("\n");
}

// Scans numbers into array until non-number or end of array
// Return number of numbers scanned in
int scanfArray(int length, int nums[]) {
    int i = 0;
    int scannedInValues = 0;
    int successfulScan = SCAN_SUCCESS;

    while (i < length && successfulScan == SCAN_SUCCESS) {
        successfulScan = scanf("%d", &nums[i]);

        if (successfulScan == SCAN_SUCCESS) {
            scannedInValues++;
        }
        i++;
    }
    return scannedInValues;
}
