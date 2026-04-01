#include <stdio.h>

int main()
{
    int n, m, p;

    scanf("%d %d %d", &n, &m, &p);

    int A[n][m], B[m][p], C[n][p];

    printf("Insira os valores da Matriz A: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    printf("Insira os valores da Matriz B: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    // Inicializa matriz C com 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            C[i][j] = 0;

    // Multiplicação de matrizes
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriz resultado:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
            printf("%d ", C[i][j]);

        printf("\n");
    }

    return 0;
}
