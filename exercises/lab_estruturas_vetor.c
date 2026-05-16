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

void actions(int option, Vector *vector, int *isRunning)
{
    int element, index;
    int k, s;

    switch (option)
    {
        case 1: // Imprimir o vetor
            printVector(vector);
            break;

        case 2: // Inserir um elemento no vetor por índice
            printf("Elemento = ");
            scanf("%d", &element);
            printf("Índice = ");
            scanf("%d", &index);
            printf("\n");
            printVector(vector);
            insertElement(vector, element, index);
            printVector(vector);
            break;

        case 3: // Adicionar um novo elemento ao vetor
            printf("Elemento = ");
            scanf("%d", &element);
            printVector(vector);
            addElement(vector, element);
            printVector(vector);
            break;

        case 4: // Remover um elemento do vetor por índice
            printf("Índice: ");
            scanf("%d", &index);
            printVector(vector);
            removeElement(vector, index);
            printVector(vector);
            break;

        case 5: // Buscar um elemento no vetor
            printVector(vector);
            printf("Elemento = ");
            scanf("%d", &element);
            smartSearch(vector, element);
            printVector(vector);
            break;

        case 6: // Inverter vetor
            printVector(vector);
            reverse(vector, 0, vector->length - 1);
            printVector(vector);
            break;

        case 7: // Rotacionar o vetor k vezes
            printf("Quantidade de rotações = ");
            scanf("%d", &k);
            printVector(vector);
            rotateLeft(vector, k);
            printVector(vector);
            break;

        case 8: // Ordenação com bubble sort
            printVector(vector);
            sort(vector);
            printVector(vector);
            break;

        case 9: // Verificar elementos repetidos no vetor
            printVector(vector);
            checkRepeated(vector);
            break;

        case 10: // Encontra pares de elementos no vetor onde a soma dá S
            printf("Soma: ");
            scanf("%d", &s);
            findPairsSums(vector, s);
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

    int preVector[7] = { 8, 3, 7, 12, 6, 9, 10 };
    Vector *vector = allocateVector(max);

    for (int i = 0; i < lenght; i++)
    {
        vector->v[i] = preVector[i];
    }

    vector->max = max;
    vector->length = lenght;

    while (isRunning)
    {
        menu();

        int option;
        printf("Opção: ");
        scanf("%d", &option);
        printf("\n");

        actions(option, vector, &isRunning);
    }

    int sum = 1 * vector->v[0] + 2 * vector->v[1] + 3 * vector->v[2] + 4 * vector->v[3] + 5 * vector->v[4];
    
    printf("Soma final: %d\n", sum);

    deleteVector(vector);
}

int main()
{
    loop();
    return 0;
}
