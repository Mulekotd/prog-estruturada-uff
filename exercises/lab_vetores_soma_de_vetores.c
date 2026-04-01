#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int A[n]; int B[n]; int sum[n];

    printf("A = ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    
    printf("B = ");
    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);

    for (int i = 0; i < n; i++)
        sum[i] = A[i] + B[i];

    for (int i = 0; i < n; i++)
        printf("%d ", sum[i]);

    printf("\n");

    return 0;
}
