#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int matrix[n][n];
    int value = 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = value++;

    int sumAbove = 0;
    int countAbove = 0;

    // Soma elementos acima da diagonal principal
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                sumAbove += matrix[i][j];
                countAbove++;
            }
        }
    }

    int avg = sumAbove / countAbove;
    int result = 0;

    // Soma elementos menores ou iguais à média
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] <= avg)
                result += matrix[i][j];

    printf("Média: %d\n", avg);
    printf("Resultado: %d\n", result);

    return 0;
}
