#include "tad.h"
#include <stdio.h>
#include <stdlib.h>

vector_t* allocate_vector(int max)
{
    vector_t *vec = malloc(sizeof(vector_t));

    if (!vec) return NULL;

    vec->v = malloc(max * sizeof(int));

    if (!vec->v)
    {
        free(vec);
        return NULL;
    }

    vec->max = max;
    vec->length = 0;

    return vec;
}

void print_vector(vector_t *vec)
{
    int n = vec->length;

    printf("Vetor (tamanho: %d) = ", n);

    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1)) printf("%d", vec->v[i]);
        else printf("%d, ", vec->v[i]);
    }
    printf(" }");
    
    printf("\n");
}

void insert_element(vector_t *vec, int element, int index)
{
    int n = vec->length;
    
    if (index < 0 || index > n || n >= vec->max)
    {
        printf("Índice fora do range.\n\n");
        return;
    }

    for (int i = n; i > index; i--)
    {
        vec->v[i] = vec->v[i - 1];
    }

    vec->v[index] = element;
    vec->length++;
}

void add_element(vector_t *vec, int element)
{
    int n = vec->length;

    if ((n + 1) > vec->max)
    {
        printf("Excedeu o tamanho do vetor.\n\n");
        return;
    }

    vec->v[n] = element;

    // Aumenta o tamanho lógico do vetor
    vec->length++;
}

void remove_element(vector_t *vec, int index)
{
    int n = vec->length;

    if (index < 0 || index >= vec->length)
    {
        printf("Índice fora do range.\n\n");
        return;
    }

    // Desloca os elementos para a esquerda
    for (int i = index; i < n - 1; i++)
    {
        vec->v[i] = vec->v[i + 1];
    }

    // Diminui o tamanho lógico do vetor
    vec->length--;
}

void smart_search(vector_t *vec, int element)
{
    int n = vec->length;

    for (int i = 0; i < n; i++)
    {
        if (vec->v[i] == element)
        {
            // Se não for o primeiro elemento, faz a transposição
            if (i > 0)
            {
                int temp = vec->v[i];
                vec->v[i] = vec->v[i - 1];
                vec->v[i - 1] = temp;
            }

            printf("Buscar elemento %d - levou %d testes\n", element, i + 1);
            return;
        }
    }

    printf("Elemento não encontrado no vetor\n");
}

void reverse(vector_t *vec, int start, int end)
{
    while (start < end)
    {
        int temp = vec->v[start];
        
        vec->v[start] = vec->v[end];
        vec->v[end] = temp;

        start++;
        end--;
    }
}

void rotate_left(vector_t *vec, int k)
{
    int n = vec->length;

    if (n == 0) return;

    k %= n;

    // Rotaciona por simetria
    reverse(vec, 0, k - 1);
    reverse(vec, k, n - 1);
    reverse(vec, 0, n - 1);
}

void sort(vector_t *vec)
{
    int n = vec->length;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int curr = vec->v[j];
            int next = vec->v[j + 1];

            // Swap
            if (curr > next)
            {
                vec->v[j] = next;
                vec->v[j + 1] = curr;
            }
        }
    }
}

void delete_vector(vector_t *vec)
{
    free(vec->v);
    free(vec);
}
