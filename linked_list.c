#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int linked_list_free() {
    struct node *current = head;
    while (current != NULL) {
        struct node *next = current->next;
        free(current);
        current = next;
    }
    return 0;
}

int print_linked_list() {
    printf("[");
    struct node *current = head;
    while (current != NULL) {
        printf("%d", current->value);
        if (current->next != NULL) { printf(", "); }
        current = current->next;
    }
    printf("]\n");
    return 0;
}

int linked_list_size() {
    int out = 0;
    struct node *current = head;
    while (current != NULL) {
        current = current->next;
        out++;
    }
    return out;
}

int linked_list_insert_at_head(int value) {
    struct node *old_head = head;
    head = (struct node*) malloc(sizeof(struct node));
    head->value = value;
    head->next = old_head;
    return 0;
}

int linked_list_append(int value) {
    struct node *current = head;
    while (current->next != NULL)
        current = current->next;
    current->next = (struct node*) malloc(sizeof(struct node));
    current->next->value = value;
    current->next->next = NULL;
    return 0;
}

int linked_list_get(int index) {
    struct node *current = head;
    for (int i = 0; i < index; i++) { current = current->next; }
    return current->value;
}
