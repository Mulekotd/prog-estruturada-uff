#include <stdio.h>

int proximoGranizo(int n)
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
    
    granizo(proximoGranizo(n));
}

int contaGranizo(int n)
{
    if (n == 1)
        return 1;

    return 1 + contaGranizo(proximoGranizo(n));
}

int main()
{
    int n = 0;

    do scanf("%d", &n); while (n <= 0);

    granizo(n);
    printf("\ntamanho = %d\n", contaGranizo(n));

    return 0;
}
