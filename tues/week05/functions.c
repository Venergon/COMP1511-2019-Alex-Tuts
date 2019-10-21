// functions.c
// By tue11-kora
// 15/10/19
// Some space to mess around with functions

#include <stdio.h>

// f(x) = 2x
//int timesTwo(int x);
void print(int num);
int giveMeThree(void);

int main(void) {
    int num = 40;
    int doubledNum = timesTwo(num);
    
    int quadroupledNum = timesTwo(doubledNum);
    
    printf("%d times 2 is %d\n", num, doubledNum);
    
    return 0;
}


int timesTwo(int x) {
    return 2*x;
}

void print(int num) {
    printf("%d\n", num);
}

int giveMeThree(void) {
    return 3;
}
