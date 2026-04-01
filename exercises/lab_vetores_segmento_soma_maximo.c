#include <stdio.h>

int main()
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int A[n];

    printf("Sequência = ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int maxSum = A[0];
    int start = 0, end = 0;

    for (int i = 0; i < n; i++)
    {
        int currSum = 0;

        for (int j = i; j < n; j++)
        {
            currSum += A[j];

            if (currSum > maxSum)
            {
                maxSum = currSum;
                start = i;
                end = j;
            }
        }
    }

    int size = end - start + 1;
    int sequence[size];

    for (int i = 0; i < size; i++)
        sequence[i] = A[start + i];

    printf("Sequência Maxima = ");
    for (int i = 0; i < size; i++)
        printf("%d ", sequence[i]);
    
    printf("\nSoma Maxima = %d\n", maxSum);

    return 0;
}
