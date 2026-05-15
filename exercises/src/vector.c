#include <stdio.h>
#include <stdlib.h>
#include "../include/vector.h"

Vector* allocate_vector(int max)
{
    Vector *vector = malloc(sizeof(Vector));

    if (!vector) return NULL;

    vector->v = malloc(max * sizeof(int));

    if (!vector->v)
    {
        free(vector);
        return NULL;
    }

    vector->max = max;
    vector->length = 0;

    return vector;
}

void print_vector(Vector *vector)
{
    int n = vector->length;

    printf("Vetor (tamanho: %d) = ", n);

    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1)) printf("%d", vector->v[i]);
        else printf("%d, ", vector->v[i]);
    }
    printf(" }");
    
    printf("\n");
}

int max_element(Vector *vector)
{
    int n = vector->length;
    int max = vector->v[0];

    for (int i = 1; i < n; i++)
    {
        if (max < vector->v[i]) max = vector->v[i];
    }

    return max;
}

void insert_element(Vector *vector, int element, int index)
{
    int n = vector->length;
    
    if (index < 0 || index > n || n >= vector->max)
    {
        printf("Índice fora do range.\n\n");
        return;
    }

    for (int i = n; i > index; i--)
    {
        vector->v[i] = vector->v[i - 1];
    }

    vector->v[index] = element;
    vector->length++;
}

void add_element(Vector *vector, int element)
{
    int n = vector->length;

    if ((n + 1) > vector->max)
    {
        printf("Excedeu o tamanho do vetor.\n\n");
        return;
    }

    vector->v[n] = element;

    // Aumenta o tamanho lógico do vetor
    vector->length++;
}

void remove_element(Vector *vector, int index)
{
    int n = vector->length;

    if (index < 0 || index >= vector->length)
    {
        printf("Índice fora do range.\n\n");
        return;
    }

    // Desloca os elementos para a esquerda
    for (int i = index; i < n - 1; i++)
    {
        vector->v[i] = vector->v[i + 1];
    }

    // Diminui o tamanho lógico do vetor
    vector->length--;
}

void smart_search(Vector *vector, int element)
{
    int n = vector->length;

    for (int i = 0; i < n; i++)
    {
        if (vector->v[i] == element)
        {
            // Se não for o primeiro elemento, faz a transposição
            if (i > 0)
            {
                int temp = vector->v[i];
                vector->v[i] = vector->v[i - 1];
                vector->v[i - 1] = temp;
            }

            printf("Buscar elemento %d - levou %d testes\n", element, i + 1);
            return;
        }
    }

    printf("Elemento não encontrado no vetor\n");
}

void reverse(Vector *vector, int start, int end)
{
    while (start < end)
    {
        int temp = vector->v[start];
        
        vector->v[start] = vector->v[end];
        vector->v[end] = temp;

        start++;
        end--;
    }
}

void rotate_left(Vector *vector, int k)
{
    int n = vector->length;

    if (n == 0) return;

    k %= n;

    // Rotaciona por simetria
    reverse(vector, 0, k - 1);
    reverse(vector, k, n - 1);
    reverse(vector, 0, n - 1);
}

void sort(Vector *vector)
{
    int n = vector->length;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int curr = vector->v[j];
            int next = vector->v[j + 1];

            // Swap
            if (curr > next)
            {
                vector->v[j] = next;
                vector->v[j + 1] = curr;
            }
        }
    }
}

void check_repeated(Vector *vector)
{
    int n = vector->length;
    int printing = 0;

    printf("Duplicados = ");

    for (int i = 0; i < n - 1; i++)
    {
        if (vector->v[i] == vector->v[i + 1])
        {
            if (!printing)
            {
                printf("%d ", vector->v[i]);
                printing = 1;
            }
        }
        else
        {
            printing = 0;
        }
    }
}

void find_pairs_sums(Vector *vector, int s)
{
    int n = vector->length;
    int max = 0;

    // Descobrir o maior elemento
    for (int i = 0; i < n; i++)
    {
        if (vector->v[i] > max)
        {
            max = vector->v[i];
        }
    }

    // Vetor auxiliar (inicializado com 0)
    int aux[max + 1];
    
    for (int i = 0; i <= max; i++)
        aux[i] = 0;

    // Marcar presença dos elementos
    for (int i = 0; i < n; i++)
        aux[vector->v[i]] = 1;

    printf("Pares = ");

    // Econtrar os pares
    for (int i = 0; i < n; i++)
    {
        int x = vector->v[i];
        int y = s - x;

        // Verifica se y é válido e existe no vetor
        if (y >= 0 && y <= max && aux[y] == 1 && x < y)
        {
            printf("(%d, %d) ", x, y);
        }
    }
}

void delete_vector(Vector *vector)
{
    free(vector->v);
    free(vector);
}
