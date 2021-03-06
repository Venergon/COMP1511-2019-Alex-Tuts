// pet_struct.c
// By tues11-kora
// 29/10/19
// A program with multiple functions and other things to do with a pet struct

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LENGTH 20
#define TYPE_LENGTH 20

struct pet {
    char name[NAME_LENGTH];
    char type[TYPE_LENGTH];
    int age;
    int weight; // grams
};

void create_pet(struct pet *new_pet, char *name, char *type, int age, int weight);
void age_pet(struct pet *to_age);
void print_pet(struct pet *to_print);

int main(void) {
    struct pet my_pet;
    
    create_pet(&my_pet, "Fluffy", "axolotl", 7, 300);

    print_pet(&my_pet);
    
    age_pet(&my_pet);
    
    print_pet(&my_pet);
    
    //struct pet neighbours_pet = {"Fido", "Dog", 8, 200};
    


    return EXIT_SUCCESS;
}

void create_pet(struct pet *new_pet, char *name, char *type, int age, int weight) {
    if (age < 0) {
        printf("ERROR: Pets cannot have age < 0\n");
    } else {
        strcpy(new_pet->name, name);
        strcpy(new_pet->type, type);
        new_pet->age = age;
        new_pet->weight = weight;
    }
}

void age_pet(struct pet *to_age) {
    int old_age = to_age->age;
    int new_age = old_age + 1;
    int old_weight = to_age->weight;
    int new_weight = old_weight * new_age / old_age;

    to_age->weight = new_weight;
    to_age->age = new_age;
}

void print_pet(struct pet *to_print) {
    printf("%s is a %d year old %s that weighs %d grams\n", to_print->name, to_print->age, to_print->type, to_print->weight);
}
