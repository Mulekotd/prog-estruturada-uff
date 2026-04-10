#include <stdio.h>
#include <stdlib.h>

void rotateRight(int *vector, int n)
{
    int last = vector[n - 1];

    for (int i = n - 1; i > 0; i--)
        vector[i] = vector[i - 1];

    vector[0] = last;
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    int *vector = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &vector[i]);

    for (int i = 1; i <= k; i++)
        rotateRight(vector, n);
    
    for (int i = 0; i < n; i++)
        printf("vetor[%d] = %d\n", i, vector[i]);

    free(vector);

    return 0;
}
