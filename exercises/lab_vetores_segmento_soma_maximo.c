#include <stdio.h>

int main()
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int arr[n];

    printf("sequencia: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0];
    int start = 0, end = 0;

    for (int i = 0; i < n; i++)
    {
        int currSum = 0;

        for (int j = i; j < n; j++)
        {
            currSum += arr[j];

            if (currSum > maxSum)
            {
                maxSum = currSum;
                start = i;
                end = j;
            }
        }
    }

    // Criar vetor da sequência máxima
    int size = end - start + 1;
    int sequence[size];

    for (int i = 0; i < size; i++)
        sequence[i] = arr[start + i];

    printf("Maior soma: %d\n", maxSum);
    printf("Sequencia: ");

    for (int i = 0; i < size; i++)
        printf("%d ", sequence[i]);

    printf("\n");

    return 0;
}
