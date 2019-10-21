// scanf_array.c
// By tue11-kora
// 15/10/19
// A program to scan an array

#include <stdio.h>

#define ARRAY_SIZE 5

void print_array(int n, int nums[n]);
void scanf_array(int n, int nums[n]);
void set_num_to_six(int number);

int main(void) {
    int nums[ARRAY_SIZE];
    int number = 5;
    
    scanf_array(ARRAY_SIZE, nums);
    set_num_to_six(number);
    
    print_array(ARRAY_SIZE, nums);
    printf("number is %d\n", number);
    
    return 0;
}

void print_array(int n, int nums[n]) {
    printf("[");
    
    int i = 0;
    while (i < n) {
        printf("%d", nums[i]);
        
        if (i != n-1) {
            printf(", ");
        }
        
        i++;
    }
    
    printf("]\n");
}

void scanf_array(int n, int nums[n]) {
    int i = 0;
    
    while (i < n) {
        scanf("%d", &nums[i]);
        i++;
    }
}

void set_num_to_six(int number) {
    number = 6;
}
