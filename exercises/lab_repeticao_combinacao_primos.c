#include <stdio.h>

int isPrime(int value)
{
    if (value < 2) return 0;

    for (int i = 2; i * i <= value; i++)
        if (value % i == 0) return 0;

    return 1;
}

int main()
{
    int n;
    int counter;

    do scanf("%d", &n); while (n < 0);

    for (int p1 = 2; p1 <= (n / 2); p1++)
    {
        int p2 = n - p1;

        if (isPrime(p1) && isPrime(p2))
        {
            printf("%d pode ser escrito como %d + %d.\n", n, p1, p2);
            counter++;
        }
    }

    printf("Contador: %d\n", counter);

    return 0;
}
