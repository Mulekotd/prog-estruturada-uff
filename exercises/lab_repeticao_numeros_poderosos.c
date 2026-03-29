#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    for (int num = a; num <= b; num++)
    {
        int temp = num;
        int sum = 0;

        while (temp != 0)
        {
            int dig = temp % 10;

            // Calcula fatorial do dígito
            int factorial = 1;
            
            for (int i = 1; i <= dig; i++)
                factorial *= i;

            sum += factorial;
            temp /= 10;
        }

        if (sum == num) printf("%d\n", num);
    }

    return 0;
}
