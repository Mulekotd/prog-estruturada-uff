#include <stdio.h>

int main()
{
    int n = -1, reversed = 0;

    do scanf("%d", &n); while (n < 0);

    while (n != 0)
    {
        int digit = n % 10;               // Pega último dígito
        reversed = reversed * 10 + digit; // Adiciona no reverso
        n /= 10;                          // Remove último dígito
    }

    printf("%d\n", reversed);

    return 0;
}
