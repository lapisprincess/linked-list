#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


struct node {
    int value;
    struct node *next;
};

Node* make_node(int value) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}


struct list {
    Node * head;
};

List* make_list() {
    List *list = malloc(sizeof(List));
    list->head = NULL;
    return list;
}

void destroy(List *list) {
    struct node *current = list->head;
    struct node *next = current->next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    free(list);
}

void display(List *list) {
    printf("[");
    struct node *current = list->head;
    while (current != NULL) {
        printf("%d", current->value);
        if (current->next != NULL) { printf(", "); }
        current = current->next;
    }
    printf("]\n");
}

void append(List *list, int value) {
    if (list->head == NULL)
        list->head = make_node(value);
    Node *current = list->head;
    while (current->next != NULL)
        current = current->next;
    current->next = make_node(value);
}

int size(List *list) {
    int out = 0;
    struct node *current = list->head;
    while (current != NULL) {
        current = current->next;
        out++;
    }
    return out;
}

int get(List *list, int index) {
    struct node *current = list->head;
    for (int i = 0; i < index; i++) { current = current->next; }
    return current->value;
}
