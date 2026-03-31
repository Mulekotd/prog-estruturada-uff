#include <stdio.h>

int main()
{
    int n = -1;

    do scanf("%d", &n); while (n <= 1);

    int matrix[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][n - i - 1];
        matrix[i][n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (j == n-1) printf("%d\n", matrix[i][j]);
            else printf("%d ", matrix[i][j]);

    return 0;
}
