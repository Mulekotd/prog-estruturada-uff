#include "../include/BinaryTree.h"

#include <stdio.h>
#include <stdlib.h>

void destroy(BinaryTree *node) {
    if (node == NULL)
        return;

    destroy(node->left);
    destroy(node->right);
 
    free(node);
}

void insertion(BinaryTree **node, int value) {
    if (*node == NULL) {
        *node = (BinaryTree *)malloc(sizeof(BinaryTree));

        if (*node == NULL)
            return;

        (*node)->value = value;
        (*node)->left = NULL;
        (*node)->right = NULL;

        return;
    }

    if (value < (*node)->value) { insertion(&(*node)->left, value); }
    else if (value > (*node)->value) { insertion(&(*node)->right, value); }
}

void view(BinaryTree *node, int level) {
    if (node == NULL)
        return;

    // Primeiro imprime a subárvore direita
    view(node->right, level + 1);

    // Indentação proporcional ao nível
    for (int i = 0; i < level; i++) {
        printf("    ");
    }

    // Imprime o valor do nó
    printf("%d\n", node->value);

    // Depois imprime a subárvore esquerda
    view(node->left, level + 1);
}
