#include <stdio.h>
#include <stdlib.h>

int max(int *vector, int i, int n)
{
    if (i == n - 1)
        return vector[i];
    
    int greater = max(vector, i + 1, n);

    if (vector[i] > greater) return vector[i];
    else return greater;
}

int main()
{
    int n = 0;

    do scanf("%d", &n); while (n <= 0);

    int *vector = (int*)malloc(n * sizeof(int));

    if (vector == NULL)
        return 1;

    for (int i = 0; i < n; i++)
        scanf("%d", &vector[i]);

    printf("%d\n", max(vector, 0, n));
    
    free(vector);

    return 0;
}
