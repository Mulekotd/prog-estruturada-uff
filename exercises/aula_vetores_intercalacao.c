#include <stdio.h>

int main()
{
    int n, m;

    do scanf("%d %d", &n, &m); while (n < 0 || m < 0);

    int A[n]; int B[m]; int C[n + m];

    printf("A: ");
    for (int x = 0; x < n; x++)
        scanf("%d", &A[x]);

    printf("B: ");
    for (int y = 0; y < m; y++)
        scanf("%d", &B[y]);

    int i = 0, j = 0, k = 0;

    // Intercala
    while (i < n && j < m)
    {
        C[k++] = A[i++];
        C[k++] = B[j++];
    }

    // Copia o restante de A
    while (i < n)
        C[k++] = A[i++];

    // Copia o restante de B
    while (j < m)
        C[k++] = B[j++];

    printf("C: ");
    for (int z = 0; z < n + m; z++)
        printf("%d ", C[z]);

    printf("\n");

    return 0;
}
