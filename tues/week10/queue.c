#include "queue.h"

struct node {
    int data;
    struct node *next;
}

struct queue {
    struct node *head;
    struct node *tail;
};

static void new_node(int num);
static void free_list(struct node *list);

Queue new_queue(void) {
    Queue new = malloc(sizeof(struct queue));
    assert(new != NULL);
    
    new->head = NULL;
    new->tail = NULL;
    
    return new;
}

void enqueue(Queue q, int num) {
    assert(q != NULL);
    
    struct node *new = new_node(num);
    
    if (q->head == NULL) {
        q->head = new;
        q->tail = new;
    } else {
        q->tail->next = new;
        q->tail = new;
    }
    
}

int dequeue(Queue q) {
    assert(q != NULL);
    assert(q->head != NULL);
    
    struct node *head = q->head;
    int data = head->data;
    q->head = head->next;
    
    free(head);
    
    return data;
    
}

void destroy_queue(Queue q) {
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
