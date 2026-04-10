#include <stdio.h>
#include <stdlib.h>

int symmetric(int **matrix, int n, int m)
{
    int isSymetric = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymetric = 0;
                break;
            }
        }
    }

    return isSymetric;
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

    int **matrix = (int**) malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++)
        matrix[i] = (int*) malloc(m * sizeof(int));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    if (symmetric(matrix, n, m)) printf("A matriz é simétrica.\n");
    else printf("A matriz não é simétrica.\n");

    for (int i = 0; i < n; i++)
        free(matrix[i]);

    free(matrix);

    return 0;
}
