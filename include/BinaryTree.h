#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct BinaryTree {
    int value;
    struct BinaryTree *left;
    struct BinaryTree *right;
} BinaryTree;

void insertion(BinaryTree **node, int value);
void destroy(BinaryTree *node);
void view(BinaryTree *node, int level);

#endif
