#include "stack.h"

struct node {
    int data;
    struct node *next;
}

struct stack {
    struct node *head;
};

static void new_node(int num);
static void free_list(struct node *list);

Stack new_stack(void) {
    Stack new = malloc(sizeof(struct stack));
    assert(new != NULL);
    
    new->head = NULL;
    
    return new;
}

void push(Stack q, int num) {
    assert(q != NULL);
    
    struct node *new = new_node(num);
    
    new->next = q->head;
    q->head = new;
}

int pop(Stack q) {
    assert(q != NULL);
    assert(q->head != NULL);
    
    struct node *head = q->head;
    int data = head->data;
    q->head = head->next;
    
    free(head);
    
    return data;
    
}

void destroy_stack(Stack q) {
    assert(q != NULL);
    
    free_list(q->head);
    /*
    struct node *curr = q->head;
    while (curr != NULL) {
        struct node *next = curr->next;
        free(curr);
        curr = next;
    }
    */
    
    free(q);
}

static void new_node(int num) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    
    new->data = num;
    new->next = NULL;
    
    return new;
}

static void free_list(struct node *list) {
    if (list != NULL) {
        free_list(list->next);
        free(list);
    }
}
