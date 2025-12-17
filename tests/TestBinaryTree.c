#include <stdio.h>

#include "../include/BinaryTree.h"

int main() {
    BinaryTree *root = NULL;

    insertion(&root, 50);
    insertion(&root, 30);
    insertion(&root, 70);
    insertion(&root, 90);
    insertion(&root, 20);
    insertion(&root, 40);
    insertion(&root, 60);
    insertion(&root, 80);
    insertion(&root, 10);
    insertion(&root, 100);
    insertion(&root, 25);

    printf("Árvore binária:\n\n");
    view(root, 0);

    destroy(root);
    root = NULL;

    return 0;
}
