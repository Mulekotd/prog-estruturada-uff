#include <stdio.h>
#include <stdlib.h>
#include "include/linked_list.h"

void question_1()
{
    printf("Concatenando listas.\n");

    List *L1 = NULL;
    L1 = insertList(L1, 8);
    L1 = insertList(L1, 6);
    L1 = insertList(L1, 9);
    L1 = insertList(L1, 2);
    printList(L1);

    List *L2 = NULL;
    L2 = insertList(L2, 7);
    L2 = insertList(L2, 4);
    L2 = insertList(L2, 10);
    printList(L2);

    List *L3 = concatList(L1, L2);
    printList(L3);

    L3 = deleteList(L3);
}

void question_2()
{
    printf("\nImprimindo k elementos da listas.\n");

    List *L = NULL;
    L = insertList(L, 34);
    L = insertList(L, 3);
    L = insertList(L, 15);
    L = insertList(L, 25);
    L = insertList(L, 65);
    L = insertList(L, 7);
    L = insertList(L, 98);

    printList(L);

    printKList(L, 3);
    printKList(L, 1);
    printKList(L, 7);
    printKList(L, 9);

    L = deleteList(L);
}

void question_3()
{
    printf("\nRemove elementos duplicados da listas.\n");

    List *L = NULL;
    L = insertList(L, 33);
    L = insertList(L, 33);
    L = insertList(L, 33);
    L = insertList(L, 33);
    L = insertList(L, 28);
    L = insertList(L, 28);
    L = insertList(L, 18);
    L = insertList(L, 2);
    L = insertList(L, 2);
    L = insertList(L, 2);

    printList(L);

    L = removeDuplicates(L);

    printList(L);

    L = deleteList(L);
}

void question_4()
{
    printf("\nRemover um elemento da List.\n");

    List *L = NULL;
    L = insertList(L, 4);
    L = insertList(L, 4);
    L = insertList(L, 3);
    L = insertList(L, 4);
    L = insertList(L, 4);
    L = insertList(L, 5);
    L = insertList(L, 7);
    L = insertList(L, 4);
    printList(L);
    
    L = removeElement(L, 4);
    printList(L);
    
    L = deleteList(L);
}

void question_5()
{
    printf("\nMesclagem entre duas listas encadeadas.\n");

    List *L1 = NULL;
    L1 = insertList(L1, 28);
    L1 = insertList(L1, 15);
    L1 = insertList(L1, 10);
    L1 = insertList(L1, 8);
    L1 = insertList(L1, 2);
    printList(L1);

    List *L2 = NULL;
    L2 = insertList(L2, 14);
    L2 = insertList(L2, 12);
    L2 = insertList(L2, 7);

    printList(L2);
    List *L3 = mergeList(L1, L2);

    printList(L3);
    L3 = deleteList(L3);
}

void question_6()
{
    printf("\nRotaciona lista encadeada k vezes à direita.\n");

    List *L = NULL;
    L = insertList(L, 5);
    L = insertList(L, 4);
    L = insertList(L, 3);
    L = insertList(L, 2);
    L = insertList(L, 1);
    printList(L);

    L = rotateList(L, 1);
    printList(L);
    
    L = rotateList(L, 3);
    printList(L);

    L = rotateList(L, 5);
    printList(L);

    L = rotateList(L, 6);
    printList(L);

    L = deleteList(L);
}

void challenge_1()
{
    printf("\nPrimeiro Desafio.\n");

    List *L1 = NULL;
    L1 = insertList(L1, 12);
    L1 = insertList(L1, 10);
    L1 = insertList(L1, 8);
    L1 = insertList(L1, 8);
    L1 = insertList(L1, 6);
    L1 = insertList(L1, 4);
    L1 = insertList(L1, 3);
    L1 = insertList(L1, 3);
    L1 = insertList(L1, 1);
    printList(L1);

    List *L2 = NULL;
    L2 = insertList(L2, 21);
    L2 = insertList(L2, 18);
    L2 = insertList(L2, 15);
    L2 = insertList(L2, 15);
    L2 = insertList(L2, 13);
    L2 = insertList(L2, 12);
    L2 = insertList(L2, 12);
    printList(L2);
    
    L1 = concatList(L1, L2);
    L1 = removeDuplicates(L1);
    L1 = removeElement(L1, 10);
    L1 = insertList(L1, 14);
    L1 = removeElement(L1, 3);
    L1 = insertList(L1, 9);
    L1 = removeElement(L1, 18);
    L1 = insertList(L1, 4);
    L1 = removeElement(L1, 12);
    printList(L1);
    
    int finalValue = 1 * (L1->value) + 2 * (L1->next->value) + 3 * (L1->next->next->value);
    finalValue = finalValue + 4 * (L1->next->next->next->value) + 5 * (L1->next->next->next->next->value);
    printf("valor final = %d\n", finalValue);

    L1 = deleteList(L1);
}

void challenge_2()
{
    printf("\nSegundo desafio.\n");

    List *L1 = NULL;
    L1 = insertList(L1, 19);
    L1 = insertList(L1, 16);
    L1 = insertList(L1, 14);
    L1 = insertList(L1, 14);
    L1 = insertList(L1, 11);
    L1 = insertList(L1, 9);
    L1 = insertList(L1, 7);
    L1 = insertList(L1, 7);
    L1 = insertList(L1, 5);
    L1 = insertList(L1, 2);
    
    List *L2 = NULL;
    L2 = insertList(L2, 20);
    L2 = insertList(L2, 18);
    L2 = insertList(L2, 17);
    L2 = insertList(L2, 15);
    L2 = insertList(L2, 13);
    L2 = insertList(L2, 13);
    L2 = insertList(L2, 10);
    L2 = insertList(L2, 6);
    L2 = insertList(L2, 4);
    L2 = insertList(L2, 3);
    
    List *L3 = NULL;
    L3 = mergeList(L1, L2);
    L3 = removeDuplicates(L3);
    L3 = removeElement(L3, 7);
    L3 = insertList(L3, 12);
    L3 = removeElement(L3, 14);
    L3 = insertList(L3, 8);
    L3 = removeElement(L3, 3);
    L3 = insertList(L3, 5);
    printList(L3);

    int finalValue = 1 * (L3->value) + 2 * (L3->next->value) + 3 * (L3->next->next->value);
    finalValue = finalValue + 4 * (L3->next->next->next->value) + 5 * (L3->next->next->next->next->value);
    printf("valor final = %d\n", finalValue);

    L3 = deleteList(L3);
}

int main()
{
    question_1();
    question_2();
    question_3();
    question_4();
    challenge_1();
    question_5();
    challenge_2();
    question_6();

    return 0;
}
