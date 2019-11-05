// pet_struct.c
// By thurs13-sitar
// 29/10/19
// A program with multiple functions and other things to do with a pet struct

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SIZE 20
#define MAX_TYPE_SIZE 20

// name, type of pet, age, weight
struct pet {
    char name[MAX_NAME_SIZE];
    char type[MAX_NAME_SIZE];
    int age;
    int weight; // grams
};

void setup_pet(struct pet *new_pet, char *name, char *type, int age, int weight);
void age_pet(struct pet *my_pet);
void print_pet(struct pet *my_pet);

int main(void) {
    // Fluffy, Cat, 7, 200g
    struct pet fluffy;
    setup_pet(&fluffy, "Fluffy", "Cat", 7, 200);

    struct pet fido;
    setup_pet(&fido, "Fido", "Dog", 10, 300);
    
    print_pet(&fido);
    print_pet(&fluffy);
    
    age_pet(&fluffy);
    
    print_pet(&fluffy);
    
    return EXIT_SUCCESS;
}

void setup_pet(struct pet *new_pet, char *name, char *type, int age, int weight) {
    if (age < 0) {
        printf("Can't have negative age!\n");
    } else {
        strcpy(new_pet->name, name);
        strcpy(new_pet->type, type);
        new_pet->age = age;
        new_pet->weight = weight;
    }
}

void print_pet(struct pet *my_pet) {
    printf("%s is a %d year old %s that weighs %dg\n", my_pet->name, my_pet->age, my_pet->type, my_pet->weight);
}

void age_pet(struct pet *my_pet) {
    int old_age = my_pet->age;
    int new_age = old_age + 1;
    int old_weight = my_pet->weight;
    int new_weight = old_weight + old_weight/old_age;
    my_pet->age = new_age;
    my_pet->weight = new_weight;
}
