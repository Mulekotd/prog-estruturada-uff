#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct BinaryTree {
    int value;
    struct BinaryTree *left;
    struct BinaryTree *right;
} BinaryTree;

void insertion(BinaryTree **node, int value);
void view(BinaryTree *node, int level);
void destroy_tree(BinaryTree *node);

#endif
