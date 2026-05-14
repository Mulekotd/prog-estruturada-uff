#include <stdio.h>
#include <stdlib.h>
#include "src/linked_list.c"

void question_1()
{
    printf("Concatenando listas.\n");

    list *L1 = NULL;
    L1 = insert_list(L1, 8);
    L1 = insert_list(L1, 6);
    L1 = insert_list(L1, 9);
    L1 = insert_list(L1, 2);
    print_list(L1);

    list *L2 = NULL;
    L2 = insert_list(L2, 7);
    L2 = insert_list(L2, 4);
    L2 = insert_list(L2, 10);
    print_list(L2);

    list *L3 = concat_list(L1, L2);
    print_list(L3);

    L3 = delete_list(L3);
}

void question_2()
{
    printf("\nImprimindo k elementos da listas.\n");

    list *L = NULL;
    L = insert_list(L, 34);
    L = insert_list(L, 3);
    L = insert_list(L, 15);
    L = insert_list(L, 25);
    L = insert_list(L, 65);
    L = insert_list(L, 7);
    L = insert_list(L, 98);

    print_list(L);

    print_k_list(L, 3);
    print_k_list(L, 1);
    print_k_list(L, 7);
    print_k_list(L, 9);

    L = delete_list(L);
}

void question_3()
{
    printf("\nRemove elementos duplicados da listas.\n");

    list *L = NULL;
    L = insert_list(L, 33);
    L = insert_list(L, 33);
    L = insert_list(L, 33);
    L = insert_list(L, 33);
    L = insert_list(L, 28);
    L = insert_list(L, 28);
    L = insert_list(L, 18);
    L = insert_list(L, 2);
    L = insert_list(L, 2);
    L = insert_list(L, 2);

    print_list(L);

    L = remove_duplicates(L);

    print_list(L);

    L = delete_list(L);
}

void question_4()
{
    printf("\nRemover um elemento da lista.\n");

    list *L = NULL;
    L = insert_list(L, 4);
    L = insert_list(L, 4);
    L = insert_list(L, 3);
    L = insert_list(L, 4);
    L = insert_list(L, 4);
    L = insert_list(L, 5);
    L = insert_list(L, 7);
    L = insert_list(L, 4);
    print_list(L);
    
    L = remove_element(L, 4);
    print_list(L);
    
    L = delete_list(L);
}

void challenge_1()
{
    printf("\nPrimeiro Desafio.\n");

    list *L1 = NULL;
    L1 = insert_list(L1, 12);
    L1 = insert_list(L1, 10);
    L1 = insert_list(L1, 8);
    L1 = insert_list(L1, 8);
    L1 = insert_list(L1, 6);
    L1 = insert_list(L1, 4);
    L1 = insert_list(L1, 3);
    L1 = insert_list(L1, 3);
    L1 = insert_list(L1, 1);
    print_list(L1);

    list *L2 = NULL;
    L2 = insert_list(L2, 21);
    L2 = insert_list(L2, 18);
    L2 = insert_list(L2, 15);
    L2 = insert_list(L2, 15);
    L2 = insert_list(L2, 13);
    L2 = insert_list(L2, 12);
    L2 = insert_list(L2, 12);
    print_list(L2);
    
    L1 = concat_list(L1, L2);
    L1 = remove_duplicates(L1);
    L1 = remove_element(L1, 10);
    L1 = insert_list(L1, 14);
    L1 = remove_element(L1, 3);
    L1 = insert_list(L1, 9);
    L1 = remove_element(L1, 18);
    L1 = insert_list(L1, 4);
    L1 = remove_element(L1, 12);
    print_list(L1);
    
    int final_value = 1 * (L1->value) + 2 * (L1->next->value) + 3 * (L1->next->next->value);
    final_value = final_value + 4 * (L1->next->next->next->value) + 5 * (L1->next->next->next->next->value);
    printf("valor final = %d\n", final_value);

    L1 = delete_list(L1);
}

int main()
{
    question_1();
    question_2();
    question_3();
    question_4();
    challenge_1();

    return 0;
}
