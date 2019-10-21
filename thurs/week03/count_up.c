// count_up.c
// By Thu13-Sitar
// 3/10/19
// A program to count up to a given number

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int end;
    printf("Enter finish: ");
    scanf("%d", &end);
    
    int i = 1;
    while (i <= end) {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}
