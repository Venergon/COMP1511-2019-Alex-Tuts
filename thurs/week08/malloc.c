// malloc.c
// by thu13-sitar
// 7/11/2019
// Some testing with malloc

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define LIST_SIZE 6

struct node;

struct overall {
    struct node *head;
};

struct node {
    int data;
    struct node *next;
};

struct overall *new_list(void);
struct node *new_node(int data);
void insert_at_end(struct overall *o, int data);
void free_list(struct overall *o);
void print_list(struct overall *o);

int main(void) {
    struct overall *list = new_list();
    
    int i = 0;
    while (i < LIST_SIZE) {
        insert_at_end(list, 2*i);
        i++;
    }
    
    print_list(list);
    
    free_list(list);
    
    return 0;
}

struct overall *new_list(void) {
    struct overall *new = malloc(sizeof(struct overall));
    assert(new != NULL);
    
    new->head = NULL;
    return new;
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
    
    if (o->head == NULL) {
        o->head = new;
    } else {   
        struct node *curr = o->head;
        while (curr->next != NULL) {
           curr = curr->next;
        }
        
        curr->next = new;
    }
}


void free_list(struct overall *o) {
    assert(o != NULL);
    
    struct node *curr = o->head;
    while (curr != NULL) {
        struct node *next = curr->next;
        free(curr);
        curr = next;
    }
    
    free(o);
}

void print_list(struct overall *o) {
    assert(o != NULL);
    
    struct node *curr = o->head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next; 
    }
    
    printf("X\n");
}

