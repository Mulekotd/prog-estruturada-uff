#include <stdio.h>

int recursiveDotProduct(int n, int m, int p, int A[n][m], int B[m][p], int linha, int coluna, int posicao)
{
    if (posicao == m)
        return 0;

    return A[linha][posicao] * B[posicao][coluna] +
           recursiveDotProduct(n, m, p, A, B, linha, coluna, posicao + 1);
}

void recursiveMultiply(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p], int i, int j)
{
    if (i == n)
        return;

    if (j == p)
    {
        recursiveMultiply(n, m, p, A, B, C, i + 1, 0);
        return;
    }

    C[i][j] = recursiveDotProduct(n, m, p, A, B, i, j, 0);
    recursiveMultiply(n, m, p, A, B, C, i, j + 1);
}

int main()
{
    int n, m, p;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    printf("p: ");
    scanf("%d", &p);

    int A[n][m]; int B[m][p]; int C[n][p];

    printf("Matriz A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("(%d,%d) = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("(%d,%d) = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    recursiveMultiply(n, m, p, A, B, C, 0, 0);

    printf("\nMatriz C:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
