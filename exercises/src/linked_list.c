#include <stdio.h>
#include <stdlib.h>
#include "../include/linked_list.h"

list *allocate_node()
{
    list *aux;
    aux = (list*) malloc (sizeof(list));
    aux->next = NULL;

    return aux;
}

list *insert_list(list *L, int element)
{
    list *node = allocate_node();
    node->value = element;
    node->next = L;

    L = node;

    return L;
}

list *delete_list(list *L)
{
    if (L == NULL)
        return NULL;

    delete_list(L->next);

    free(L);

    return NULL;
}

list *remove_list_by_pos(list *L, int pos)
{
    if (L == NULL || pos < 0)
    {
        printf("Posição inválida!\n");
        return L;
    }

    // Caso base: remove nó atual
    if (pos == 0)
    {
        list *temp = L->next;
        free(L);
        return temp;
    }

    L->next = remove_list_by_pos(L->next, pos - 1);

    return L;
}

list *remove_duplicates(list *L)
{
    if (L == NULL || L->next == NULL)
        return L;

    // Remove duplicata consecutiva
    if (L->value == L->next->value)
    {
        list *duplicate = L->next;

        L->next = duplicate->next;

        free(duplicate);

        return remove_duplicates(L);
    }

    L->next = remove_duplicates(L->next);

    return L;
}

list *concat_list(list *L1, list *L2)
{
    if (L1 == NULL)
        return L2;

    L1->next = concat_list(L1->next, L2);

    return L1;
}

void print_k_list(list *L, int k)
{
    if (L == NULL || k <= 0)
        return;

    list *front = L;
    list *back = L;

    // Avança front k posições
    for (int i = 0; i < k; i++)
    {
        if (front == NULL)
        {
            printf("Valor de K inválido!\n");
            return;
        }

        front = front->next;
    }

    // Move os dois juntos
    while (front != NULL)
    {
        front = front->next;
        back = back->next;
    }

    printf("%d últimos elementos = ", k);

    // Back agora aponta para os últimos k elementos
    while (back != NULL)
    {
        printf("%d ", back->value);
        back = back->next;
    }

    printf("\n");
}

void print_list_recursive(list *L)
{
    if (L == NULL)
        return;

    printf("%d ", L->value);

    print_list_recursive(L->next);
}

void print_list(list *L)
{
    printf("L = { ");

    print_list_recursive(L);

    printf("}\n");
}
