#include <stdio.h>

int max(int A[], int n, int i)
{
    if (i == n)
        return A[i];
    
    if (A[i] > max(A, n, i + 1)) return A[i];
    else return max(A, n, i + 1);
}

int main()
{
    int v[] = { 10, 324, 45, 90, 980 };
    int n = 5;

    printf("maior: %d\n", max(v, n - 1, 0));

    return 0;
}
