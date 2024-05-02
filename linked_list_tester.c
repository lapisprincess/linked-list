#include <stdio.h>
#include "linked_list.c"

int main(int argc, char *argv[]) {
    printf("%d\n", linked_list_size());
    linked_list_insert_at_head(5);
    printf("%d\n", linked_list_size());
    print_linked_list();
    linked_list_append(10);
    linked_list_insert_at_head(15);
    print_linked_list();
    printf("%d\n", linked_list_get(0));

    linked_list_free();
}
