#include <stdio.h>

int main()
{
    int n = -1;

    do scanf("%d", &n); while (n < 0);

    int v1[n];
    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if ((i % j) == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime)
        {
            v1[count] = i;
            ++count;
        }
    }

    for (int i = 0; i < count; i++)
        printf("%d ", v1[i]);
    
    printf("\n");

    return 0;
}
