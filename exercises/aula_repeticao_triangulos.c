#include <stdio.h>
#include <math.h>

int main()
{
    int n = -1;

    do scanf("%d", &n); while (n < 0);

    for (int k = 1; k <= n; k++) // Fixa a hipotenusa
    {
        for (int i = 1; i < k; i++) // Percorre um cateto
        {
            int j2 = k * k - i * i;
            int j = sqrt(j2);

            // Verifica se é inteiro e evita permutação
            if (j >= i && j * j == j2)
                printf("hipotenusa = %d, catetos %d e %d\n", k, i, j);
        }
    }

    return 0;
}
