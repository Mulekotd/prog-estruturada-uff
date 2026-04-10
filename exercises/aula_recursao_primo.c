#include <stdio.h>

int prime(int n, int d)
{
    if (n <= 1)
        return 0;

    if (d == n)
        return 1;

    if (n % d == 0)
        return 0;

    return prime(n, d + 1);
}

int main()
{
    int n = 0;

    do scanf("%d", &n); while (n <= 0);

    if (prime(n, 2)) printf("O número %d é primo\n", n);
    else printf("O número %d não é primo\n", n);

    return 0;
}
