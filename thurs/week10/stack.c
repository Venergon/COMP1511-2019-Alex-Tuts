#include <stdlib.h>

#include "stack.h"

struct stack {
    struct node *top;
};

struct node {
    int data;
    struct node *next;
};

static struct node *new_node(int data);
static void destroy_list(struct node *list);

Stack new_stack(void) {
    struct stack *s = malloc(sizeof(struct stack));
    
    s->top = NULL;
    s->tail = NULL;
    
    return s;
}

void push(Stack s, int data) {
    struct node *new = new_node(data);
    
    new->next = s->top;
    s->top = new;
}

int pop(Stack s) {
    assert(s != NULL);
    assert(s->top != NULL);
    
    struct node *old_top = s->top;
    s->top = old_top->next;

    int to_return = old_top->data;
    
    free(old_top);    
    return to_return;
}

void destroy_stack(Stack s) {
    destroy_list(s->top);
    
    free(s);
}

static struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    
    new->data = data;
    new->next = NULL;
    
    return new;
}

static void destroy_list(struct node *list) {
    if (list == NULL) {
        return;
    } else {
        destroy_list(list->next);
        free(list);
    }
}



"QWERTYUIOPASDFGHJHKLZXCVBNM"

"RTOI"
"DE"
