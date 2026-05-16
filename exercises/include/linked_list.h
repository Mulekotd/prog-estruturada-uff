#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node
{
    int value;
    struct Node *next;
};

typedef struct Node List;

int length(List *L);

List *allocateNode(void);
List *deleteList(List *L);
List *removeDuplicates(List *L);
List *removeElement(List *L, int element);
List *insertList(List *L, int element);
List *concatList(List *L1, List *L2);
List *mergeList(List *L1, List *L2);
List *rotateList(List *L, int k);

void recursivePrint(List *L);
void printList(List *L);
void printKList(List *L, int k);

#endif
