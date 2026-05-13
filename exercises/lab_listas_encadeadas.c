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

int main()
{
    question_1();
    question_2();
    question_3();

    return 0;
}
