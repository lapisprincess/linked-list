#include <time.h>
#include <stdio.h>
#include "linked_list.c"

int main(int argc, char *argv[]) {
    List *list = make_list();
    display(list);

    srand(time(NULL));
    append(list, rand()%20);
    append(list, rand()%20);
    append(list, rand()%20);
    append(list, rand()%20);
    display(list);

    int i = 2;
    printf("Value at index %d: %d\n", i, get(list, i));
    printf("List size: %d\n", size(list));

    destroy(list);
}
