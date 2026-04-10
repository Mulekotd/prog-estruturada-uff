#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int digit, sum, number;
    sum = 0;
    number = n;

    while (number != 0)
    {
        digit = number % 10;
        sum += pow(digit, 3);
        number = number / 10;
    }

    return (n == sum);
}

int main()
{
    int n = 0;

    do scanf("%d", &n); while (n < 100 || n > 999);

    if (armstrong(n)) printf("%d é número de armstrong.\n", n);
    else printf("%d não é número de armstrong.\n", n);

    return 0;
}
