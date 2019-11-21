#include <stdlib.h>

#include "queue.h"

struct queue {
    struct node *head;
    struct node *tail;
};

struct node {
    int data;
    struct node *next;
};

static struct node *new_node(int data);
static void destroy_list(struct node *list);

Queue new_queue(void) {
    struct queue *q = malloc(sizeof(struct queue));
    
    q->head = NULL;
    q->tail = NULL;
    
    return q;
}

void enqueue(Queue q, int data) {
    struct node *new = new_node(data);
    
    if (q->tail == NULL) {
        q->head = new;
    } else {
        q->tail->next = new;
    }

    q->tail = new;
}

int dequeue(Queue q) {
    assert(q != NULL);
    assert(q->head != NULL);
    
    struct node *old_head = q->head;
    q->head = old_head->next;
    
    if (q->head == NULL) {
        // Nothing in the list
        q->tail = NULL;
    }

    int to_return = old_head->data;
    
    free(old_head);    
    return to_return;
}

void destroy_queue(Queue q) {
    destroy_list(q->head);
    
    free(q);
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
