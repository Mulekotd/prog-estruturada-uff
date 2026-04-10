#include <stdio.h>
#include <stdlib.h>

int** labiana(int n, int m)
{
    int **L = (int**) malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++)
        L[i] = (int*) malloc(m * sizeof(int));

    for (int i = 0; i < n; i++)
    {            
        for (int j = 0; j < m; j++)
        {
            if (i == 0)
            {
                if (((j + 1) % 2) == 0) L[i][j] = 0;
                else L[i][j] = j + 1;
                continue;
            }

            if (i == 1)
            {
                if (((j + 1) % 2) == 0) L[i][j] = j + 1;
                else L[i][j] = 0;
                continue;
            }

            L[i][j] = L[i - 2][j] + L[i - 1][j];
        }
    }
    
    return L;
}

int main()
{
    int n, m;

    printf("n: ");
    scanf("%d", &n);

    printf("m: ");
    scanf("%d", &m);

    if (n != m)
    {
        printf("A matriz não é quadrada!\n");
        return 1;
    }

    int **matrix = labiana(n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    for (int i = 0; i < n; i++)
        free(matrix[i]);

    free(matrix);

    return 0;
}
