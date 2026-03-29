#include <stdio.h>

int main()
{
    int n;
    int counter = 0;

    do scanf("%d", &n); while (n < 0);

    for (int p1 = 2; p1 <= (n / 2); p1++)
    {
        int p2 = n - p1;

        int isPrimeP1 = 1;
        if (p1 < 2) isPrimeP1 = 0;
        for (int i = 2; i * i <= p1; i++)
        {
            if (p1 % i == 0)
            {
                isPrimeP1 = 0;
                break;
            }
        }

        int isPrimeP2 = 1;
        if (p2 < 2) isPrimeP2 = 0;
        for (int i = 2; i * i <= p2; i++)
        {
            if (p2 % i == 0)
            {
                isPrimeP2 = 0;
                break;
            }
        }

        if (isPrimeP1 && isPrimeP2)
        {
            printf("%d pode ser escrito como %d + %d.\n", n, p1, p2);
            counter++;
        }
    }

    printf("%d\n", counter);

    return 0;
}
