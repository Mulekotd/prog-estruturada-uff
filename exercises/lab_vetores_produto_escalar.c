#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int A[n]; int B[n];
    int dotProduct = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);

    for (int i = 0; i < n; i++)
        dotProduct += A[i] * B[i];

    printf("Produto escalar: %d\n", dotProduct);

    return 0;
}
