// malloc.c
// by tue11-kora
// 5/11/2019
// Some testing with malloc

#include <stdio.h>
#include <stdlib.h>

struct node;

struct overall {
    struct node *start;
};

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);
void insert_at_end(struct overall *o, int data);
void free_list(struct overall *o);

int main(void) {
    struct overall *o = malloc(sizeof(struct overall));
    insert_at_end(o, 5);
    insert_at_end(o, 3);

    free_list(o);
}

struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);

    new->data = data;
    new->next = NULL;

    return new;
}

void insert_at_end(struct overall *o, int data) {
    assert(o != NULL);
    struct node *new = new_node(data);
    assert(new != NULL);

    if (o->start == NULL) {
        // Insert at start
        o->start = new;
    } else {
        struct node *prev = NULL;
        struct node *curr = o->start;
        while (curr != NULL) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = new;
    }
}


void free_list(struct overall *o) {
    assert(o != NULL);
    struct node *head = o->start;

    struct node *curr = head;

    while (curr != NULL) {
        struct node *prev = curr;
        curr = curr->next;

        free(prev);
    }
    free(o);
}
