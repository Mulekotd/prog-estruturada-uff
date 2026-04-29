#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void menu()
{
    printf("\n--- Menu ---\n");
    printf("1) Imprimir\n");
    printf("2) Inserir\n");
    printf("3) Adicionar\n");
    printf("4) Remover\n");
    printf("5) Busca Inteligente\n");
    printf("6) Inverter\n");
    printf("7) Rotacionar\n");
    printf("8) Ordenar\n");
    printf("9) Duplicados\n");
    printf("10) Somar Par Ordenado\n");
    printf("11) Sair\n");
    printf("------------\n\n");
}

void actions(int option, vector_t *vec, int *isRunning)
{
    int element, index;
    int k, s;

    switch (option)
    {
        case 1: // Imprimir o vetor
            print_vector(vec);
            break;
        case 2: // Inserir um elemento no vetor por índice
            printf("Elemento = ");
            scanf("%d", &element);
            printf("Índice = ");
            scanf("%d", &index);
            printf("\n");
            print_vector(vec);
            insert_element(vec, element, index);
            print_vector(vec);
            break;
        case 3: // Adicionar um novo elemento ao vetor
            printf("Elemento = ");
            scanf("%d", &element);
            print_vector(vec);
            add_element(vec, element);
            print_vector(vec);
            break;
        case 4: // Remover um elemento do vetor por índice
            printf("Índice: ");
            scanf("%d", &index);
            print_vector(vec);
            remove_element(vec, index);
            print_vector(vec);
            break;
        case 5: // Buscar um elemento no vetor
            print_vector(vec);
            printf("Elemento = ");
            scanf("%d", &element);
            smart_search(vec, element);
            print_vector(vec);
            break;
        case 6: // Inverter vetor
            print_vector(vec);
            reverse(vec, 0, vec->length - 1);
            print_vector(vec);
            break;
        case 7: // Rotacionar o vetor k vezes
            printf("Quantidade de rotações = ");
            scanf("%d", &k);
            print_vector(vec);
            rotate_left(vec, k);
            print_vector(vec);
            break;
        case 8: // Ordenação com bubble sort
            print_vector(vec);
            sort(vec);
            print_vector(vec);
            break;
        case 9: // Verificar elementos repetidos no vetor
            print_vector(vec);
            check_repeated(vec);
            break;
        case 10: // Encontra pares de elementos no vetor onde a soma dá S
            printf("Soma: ");
            scanf("%d", &s);
            find_pairs_sums(vec, s);
            break;
        case 11: // Encerrar programa
            *isRunning = 0;
            break;
        default:
            break;
    }
}

void loop()
{
    int isRunning = 1;
    int max = 10, lenght = 7;

    int pre_vector[7] = { 8, 3, 7, 12, 6, 9, 10 };
    vector_t *vec = allocate_vector(max);

    for (int i = 0; i < lenght; i++)
    {
        vec->v[i] = pre_vector[i];
    }

    vec->max = max;
    vec->length = lenght;

    while (isRunning)
    {
        menu();

        int option;
        printf("Opção: ");
        scanf("%d", &option);
        printf("\n");

        actions(option, vec, &isRunning);
    }

    int sum = 1 * vec->v[0] + 2 * vec->v[1] + 3 * vec->v[2] + 4 * vec->v[3] + 5 * vec->v[4];
    
    printf("Soma final: %d\n", sum);
    delete_vector(vec);
}

int main()
{
    loop();
    return 0;
}
