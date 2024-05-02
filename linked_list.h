#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};
struct node *head = NULL;

int linked_list_free();
int linked_list_size();
int print_linked_list();

int linked_list_append(int val);
int linked_list_insert_at_head(int val);
