#include <stdio.h>
#include <stdlib.h>

#define N 6
#define M 6

int **allocateMatrix(int n, int m)
{
    int **matrix = (int **) malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++)
        matrix[i] = (int *) malloc(m * sizeof(int));

    return matrix;
}

void freeMatrix(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
        free(matrix[i]);

    free(matrix);
}

int countStrongNeighbors(int **A, int i, int j)
{
    int count = 0;

    if (i > 0 && A[i-1][j] >= 7)   count++; // cima
    if (i < N-1 && A[i+1][j] >= 7) count++; // baixo
    if (j > 0 && A[i][j-1] >= 7)   count++; // esquerda
    if (j < M-1 && A[i][j+1] >= 7) count++; // direita

    return count;
}

void simulate(int **A)
{
    int **B = allocateMatrix(N, M);

    for (int round = 0; round < 5; round++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int v = A[i][j];
                int strongs = countStrongNeighbors(A, i, j);
                int new;

                if (v >= 8) new = v - 2;
                else if (v <= 3) new = v + strongs;
                else
                {
                    if (strongs >= 2) new = v + 1;
                    else if (strongs == 0) new = v - 1;
                    else new = v;
                }

                // Limites
                if (new < 0) new = 0;
                if (new > 10) new = 10;

                B[i][j] = new;
            }
        }

        // Copiar B → A
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                A[i][j] = B[i][j];
    }

    freeMatrix(B, N);
}

int main()
{
    int **A = allocateMatrix(N, M);

    int values[N][M] = {
        { 0, 9, 1, 8, 2, 10 },
        { 8, 2, 9, 1, 8, 0 },
        { 1, 10, 3, 9, 2, 8 },
        { 9, 0, 8, 2, 10, 1 },
        { 2, 8, 1, 9, 3, 10 },
        { 10, 1, 9, 0, 8, 2 }
    };

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            A[i][j] = values[i][j];

    simulate(A);

    int sum = 0;
    for (int j = 0; j < M; j++)
        sum += A[0][j];

    printf("Soma da primeira linha apos 5 rodadas: %d\n", sum);

    freeMatrix(A, N);

    return 0;
}
