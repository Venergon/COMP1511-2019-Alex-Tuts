// range.c
// By Thu13-Sitar
// 3/10/19
// A program to count up from one number to another

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int start;
    printf("Enter start: ");
    scanf("%d", &start);

    int end;
    printf("Enter finish: ");
    scanf("%d", &end);
    
    int i = start;
    while (i <= end) {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}
