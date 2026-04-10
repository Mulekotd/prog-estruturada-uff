#include <stdio.h>

int max(int n, int m, int A[n][m], int i, int j)
{    
    if (i == n - 1 && j == m - 1)
        return A[i][j];

    int next_i = i;
    int next_j = j + 1;

    if (next_j == m)
    {
        next_j = 0;
        next_i++;
    }

    int greater = max(n, m, A, next_i, next_j);

    if (A[i][j] > greater)
        return A[i][j];

    return greater;
}

int main()
{
    int matriz[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int n = 3, m = 3;

    printf("maior: %d\n", max(n, m, matriz, 0, 0));

    return 0;
}
