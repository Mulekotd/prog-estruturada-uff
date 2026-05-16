#include <stdio.h>
#include <stdlib.h>
#include "../include/linked_list.h"

int length(List *L)
{
    if (L == NULL)
        return 0;

    return 1 + length(L->next);
}

List *allocateNode()
{
    List *aux;
    aux = (List*) malloc (sizeof(List));
    aux->next = NULL;

    return aux;
}

List *deleteList(List *L)
{
    if (L == NULL)
        return NULL;

    deleteList(L->next);

    free(L);

    return NULL;
}

List *removeDuplicates(List *L)
{
    if (L == NULL || L->next == NULL)
        return L;

    // Remove duplicata consecutiva
    if (L->value == L->next->value)
    {
        List *duplicate = L->next;

        L->next = duplicate->next;

        free(duplicate);

        return removeDuplicates(L);
    }

    L->next = removeDuplicates(L->next);

    return L;
}

List *removeElement(List *L, int element)
{
    // Caso base
    if (L == NULL)
        return NULL;

    // Se o nó atual deve ser removido
    if (L->value == element)
    {
        List *temp = L->next;

        free(L);

        return removeElement(temp, element);
    }

    // Processa o restante da lista
    L->next = removeElement(L->next, element);

    return L;
}

List *insertList(List *L, int element)
{
    List *node = allocateNode();
    node->value = element;
    node->next = L;

    L = node;

    return L;
}

List *concatList(List *L1, List *L2)
{
    if (L1 == NULL)
        return L2;

    L1->next = concatList(L1->next, L2);

    return L1;
}

List *mergeList(List *L1, List *L2)
{
    // Casos base
    if (L1 == NULL)
        return L2;

    if (L2 == NULL)
        return L1;

    // Escolhe o menor elemento
    if (L1->value < L2->value)
    {
        L1->next = mergeList(L1->next, L2);
        return L1;
    }
    else
    {
        L2->next = mergeList(L1, L2->next);
        return L2;
    }
}

List *rotateList(List *L, int k)
{
    if (k <= 0)
    {
        printf("k inválido.\n");
        return L;
    }

    if (L == NULL || L->next == NULL)
        return L;

    int size = length(L);

    // Evita rotações desnecessárias
    k = k % size;

    // Se der volta completa
    if (k == 0)
        return L;

    for (int i = 0; i < k; i++)
    {
        List *prev = NULL;
        List *current = L;

        while (current->next != NULL)
        {
            prev = current;
            current = current->next;
        }

        prev->next = NULL;

        current->next = L;

        L = current;
    }

    return L;
}

void recursivePrint(List *L)
{
    if (L == NULL)
        return;

    printf("%d ", L->value);

    recursivePrint(L->next);
}

void printList(List *L)
{
    printf("L = { ");

    recursivePrint(L);

    printf("}\n");
}

void printKList(List *L, int k)
{
    if (L == NULL || k <= 0)
        return;

    List *front = L;
    List *back = L;

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
