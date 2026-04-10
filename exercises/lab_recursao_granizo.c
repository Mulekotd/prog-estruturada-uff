#include <stdio.h>

int next(int n)
{
    if (n % 2 == 0)
        return n / 2;

    return (3 * n) + 1;
}

void granizo(int n)
{
    printf("%d", n);

    if (n == 1)
        return;

    printf(", ");
    
    granizo(next(n));
}

int count(int n)
{
    if (n == 1)
        return 1;

    return 1 + count(next(n));
}

int main()
{
    int n = 0;

    do scanf("%d", &n); while (n <= 0);

    granizo(n);
    printf("\ntamanho = %d\n", count(n));

    return 0;
}
