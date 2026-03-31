#include <stdio.h>

int main()
{
    int n = -1, m = -1;

    do scanf("%d %d", &n, &m); while (n <= 1 || m <= 1);

    if (n != m)
    {
        printf("A matriz não é quadrada!\n");
        return 1;
    }

    int matrix[n][m]; 

    // Lendo as entradas da matriz n x m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    int isIdentity = 1;
    for (int i = 0; i < n; i++)
    {
        if (!isIdentity) break;
        
        for (int j = 0; j < m; j++)
        {
            if ((i == j && matrix[i][j] != 1) ||
                (i != j && matrix[i][j] != 0))
            {
                isIdentity = 0;
                break;
            }
        }
    }

    if (isIdentity) printf("É matriz identidade\n");
    else printf("Não é matriz identidade\n");

    return 0;
}
