// secret_function.c
// By tues11-kora
// 22/10/19
// A program with a secret function

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100

int secret_function(char *word);

int main(void) {
    char *word = "Hello world\n";
    
    int result = secret_function(word);
    printf("Result is %d\n", result);
    return 0;
}


int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }

    return result;
}
