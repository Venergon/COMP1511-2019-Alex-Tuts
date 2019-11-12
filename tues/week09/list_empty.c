// implements functions in list.h
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

// ======= W10 Tut Problems ========
struct node *list_append(struct node *list1, struct node *list2) {
    // replace this!
    struct node *final_list = NULL;
    if (list1 == NULL) {
        final_list = list2;
    } else {
        
        struct node *curr = list1;
        struct node *prev = NULL;
        while (curr != NULL) {
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = list2;
        
        final_list = list1;
    }
    return final_list;
}

// returns a copy of the linked list
struct node *copy(struct node *head) {
    // replace this!
    if (head == NULL) {
        return NULL;
    }
    
    // List is not empty, so copy head
    struct node *new_head = create_node(head->data);
    struct node *new_tail = new_head;
    
    struct node *curr = head->next;
    
    while (curr != NULL) {
        struct node *new_node = create_node(curr->data);
        new_tail->next = new_node;
        new_tail = new_node;
        curr = curr->next;
    }
    
    
    return new_head;
}

// returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *head1, struct node *head2) {
    // replace this!
    struct node *curr1 = head1;
    struct node *curr2 = head2;
    
    int identical = 1;
    
    while (curr1 != NULL && curr2 != NULL && identical == 1) {
        if (curr1->data != curr2->data) {
            // They're different at this point
            identical = 0;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    if (curr1 != NULL || curr2 != NULL) {
        // One list has finished but the other hasn't
        // Therefore not identical
        identical = 0;
    }
    
    return identical;
}

int identical_recursive(struct node *head1, struct node *head2) {
    if (head1 == NULL && head2 == NULL) {
        return 1;
    } else if (head1 == NULL || head2 == NULL) {
        // one of them is null, but not both
        return 0;
    } else if (head1->data != head2->data) {
        return 0;
    } else {
        return identical_recursive(head1->next, head2->next);
    }
}

// returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head) {
    struct node *curr = head;
    struct node *prev = NULL;
    
    int is_in_order = 1;
    
    while (curr != NULL && is_in_order == 1) {
        if (prev != NULL) {
            if (prev->data >= curr->data) {
                is_in_order = 0;
            } 
        }
        
        prev = curr;
        curr = curr->next;
    }
    return is_in_order;   // replace this
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2) {
    struct node *new_head = NULL;
    struct node *new_tail = NULL;
    
    struct node *curr1 = set1;
    struct node *curr2 = set2;
    
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->data == curr2->data) {
            // Found something in both, add to set
            struct node *new = create_node(curr1->data);
            if (new_tail == NULL) {
                // This is the first node in the list
                new_head = new;
                new_tail = new;
            } else {
                new_tail->next = new;
                new_tail = new;
            }
            
            curr1 = curr1->next;
            curr2 = curr2->next;
        } else if (curr1->data < curr2->data) {
            curr1 = curr1->next;
        } else { // curr1->data > curr2->data
            curr2 = curr2->next;
        }
    }
    
    return new_head;
}

// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2) {
    return NULL;    // replace this
}

// =================================

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}
