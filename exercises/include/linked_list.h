#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node
{
    int value;
    struct Node *next;
};

typedef struct Node List;

int length(List *L);

List *allocate_node(void);
List *delete_list(List *L);
List *remove_duplicates(List *L);
List *remove_element(List *L, int element);
List *insert_list(List *L, int element);
List *concat_list(List *L1, List *L2);
List *merge_list(List *L1, List *L2);
List *rotate_list(List *L, int k);

void recursive_print(List *L);
void print_list(List *L);
void print_k_list(List *L, int k);

#endif
