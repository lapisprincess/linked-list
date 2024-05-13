#ifndef LINKED_LIST_HEADER
#define LINKED_LIST_HEADER

#include <stdlib.h>

typedef struct node Node;
typedef struct list List;

Node* make_node(int value);
List* make_list();
void destroy(List *list);
void display(List *list);
void append(List *list, int val);

int size(List *list);
int get(List *list, int index);

#endif
