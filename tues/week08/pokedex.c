// Assignment 2 19T3 COMP1511: Pokedex
// pokedex.c
//
// This program was written by YOUR-NAME-HERE (z5555555)
// on INSERT-DATE-HERE
//
// Version 2.0.0: Release

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Note you are not allowed to use <string.h> in this assignment
// There are some techniques we would like you to learn to code
// that the string library trivialises.

// ----------------------------------------------
// Add any extra #includes your code needs here.
// ----------------------------------------------

#include "pokedex.h"


// ----------------------------------------------
// Add your own #defines here.
// ----------------------------------------------


// Note you are not permitted to use arrays in struct pokedex,
// you must use a linked list.
//
// The only exception is that char arrays are permitted for
// search_pokemon and functions it may call, as well as the string
// returned by pokemon_name (from pokemon.h).
//
// You will need to add fields to struct pokedex.
// You may change or delete the head field.
struct pokedex {
    struct pokenode *head;
};


// You don't have to use the provided struct pokenode, you are free to
// make your own struct instead.
//
// If you use the provided struct pokenode, you will need to add fields
// to it to store other information.
struct pokenode {
    Pokemon pokemon;
    struct pokenode *next;
};


// ----------------------------------------------
// Add your own structs here.
// ----------------------------------------------




// ----------------------------------------------
// Add prototypes for your own functions here.
// ----------------------------------------------

// Creates a new pokenode struct and returns a pointer to it.
static struct pokenode *new_pokenode(Pokemon pokemon);



// You need to implement the following functions in their stages.
// In other words, replace the lines calling fprintf & exit with your code.
// You can find descriptions of what each function should do in pokedex.h


// Creates a new Pokedex, and returns a pointer to it.
// Note: you will need to modify this function.
Pokedex new_pokedex(void) {
    // Malloc memory for a new Pokedex, and check that the memory
    // allocation succeeded.
    Pokedex pokedex = malloc(sizeof(struct pokedex));
    assert(pokedex != NULL);

    // Set the head of the linked list to be NULL.
    // (i.e. set the Pokedex to be empty)
    pokedex->head = NULL;

    // TODO: Add your own code here.

    return pokedex;
}

// Create a new pokenode struct and returns a pointer to it.
//
// This function should allocate memory for a pokenode, set its pokemon
// pointer to point to the specified pokemon, and return a pointer to
// the allocated memory.
static struct pokenode *new_pokenode(Pokemon pokemon) {

    printf("The new_pokenode function has not been implemented yet!\n");

    return NULL;
}

//////////////////////////////////////////////////////////////////////
//                         Stage 1 Functions                        //
//////////////////////////////////////////////////////////////////////

// Add a new Pokemon to the Pokedex.
void add_pokemon(Pokedex pokedex, Pokemon pokemon) {

    // Note: you should use the new_pokenode function here, and add
    // the newly-created pokenode to the end of the linked list of
    // pokenodes in the Pokedex.

    fprintf(stderr, "exiting because you have not implemented the add_pokemon function\n");
    exit(1);
}

// Print out the details of the currently selected Pokemon.
void detail_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the detail_pokemon function\n");
    exit(1);
}

// Return the currently selected Pokemon.
Pokemon get_current_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the get_current_pokemon function\n");
    exit(1);
}

// Sets the currently selected Pokemon to be 'found'.
void find_current_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the find_current_pokemon function\n");
    exit(1);
}

// Print out all of the Pokemon in the Pokedex.
void print_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the print_pokemon function\n");
    exit(1);
}

//////////////////////////////////////////////////////////////////////
//                         Stage 2 Functions                        //
//////////////////////////////////////////////////////////////////////

// Change the currently selected Pokemon to be the next Pokemon in the Pokedex.
void next_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the next_pokemon function\n");
    exit(1);
}

// Change the currently selected Pokemon to be the previous Pokemon in the Pokedex.
void prev_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the prev_pokemon function\n");
    exit(1);
}

// Change the currently selected Pokemon to be the Pokemon with the ID `id`.
void change_current_pokemon(Pokedex pokedex, int id) {
    fprintf(stderr, "exiting because you have not implemented the change_current_pokemon function\n");
    exit(1);
}

// Remove the currently selected Pokemon from the Pokedex.
void remove_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the remove_pokemon function\n");
    exit(1);
}

// Destroy the given Pokedex and free all associated memory.
void destroy_pokedex(Pokedex pokedex) {
    // Note: there is no fprintf or exit(1) in this function, as the
    // Stage 1 autotests call destroy_pokedex but don't check whether
    // the memory has been freed (so this function should do nothing in
    // Stage 1, rather than exit).
}

//////////////////////////////////////////////////////////////////////
//                         Stage 3 Functions                        //
//////////////////////////////////////////////////////////////////////

// Print out all of the different types of Pokemon in the Pokedex.
void show_types(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the show_types function\n");
    exit(1);
}

// Set the first not-yet-found Pokemon of each type to be found.
void go_exploring(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the go_exploring function\n");
    exit(1);
}

// Return the total number of Pokemon in the Pokedex.
int count_total_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the count_total_pokemon function\n");
    exit(1);
}

// Return the number of Pokemon in the Pokedex that have been found.
int count_found_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the count_found_pokemon function\n");
    exit(1);
}

//////////////////////////////////////////////////////////////////////
//                         Stage 4 Functions                        //
//////////////////////////////////////////////////////////////////////

// Add the information that the Pokemon with the ID `from_id` can
// evolve into the Pokemon with the ID `to_id`.
void add_pokemon_evolution(Pokedex pokedex, int from_id, int to_id) {
    fprintf(stderr, "exiting because you have not implemented the add_pokemon_evolution function\n");
    exit(1);
}

// Show the evolutions of the currently selected Pokemon.
void show_evolutions(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the show_evolutions function\n");
    exit(1);
}

// Return the pokemon_id of the Pokemon that the currently selected
// Pokemon evolves into.
int get_next_evolution(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the get_next_evolution function\n");
    exit(1);
}

//////////////////////////////////////////////////////////////////////
//                         Stage 5 Functions                        //
//////////////////////////////////////////////////////////////////////

// Create a new Pokedex which contains only the Pokemon of a specified
// type from the original Pokedex.
Pokedex get_pokemon_of_type(Pokedex pokedex, pokemon_type type) {
    fprintf(stderr, "exiting because you have not implemented the get_pokemon_of_type function\n");
    exit(1);
}

// Create a new Pokedex which contains only the Pokemon that have
// previously been 'found' from the original Pokedex.
Pokedex get_found_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the get_found_pokemon function\n");
    exit(1);
}

// Create a new Pokedex containing only the Pokemon from the original
// Pokedex which have the given string appearing in its name.
Pokedex search_pokemon(Pokedex pokedex, char *text) {
    fprintf(stderr, "exiting because you have not implemented the search_pokemon function\n");
    exit(1);
}

// Add definitions for your own functions here.
// Make them static to limit their scope to this file.
