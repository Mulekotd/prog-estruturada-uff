#include <stdio.h>

int main()
{
    int money;
    int dolar = 0, half = 0, quarter = 0, cents = 0;
    
    scanf("%d", &money);

    if (money >= 100)
    {
        dolar = money / 100;
        money %= 100;
    }

    if (money >= 50)
    {   
        half = money / 50;
        money %= 50;
    }
    
    if (money >= 25)
    {
        quarter = money / 25;
        money %= 25;
    }

    cents = money;

    if (dolar > 0) printf("%d moedas de 1 real\n", dolar);
    if (half > 0) printf("%d moedas de 50 centavos\n", half);
    if (quarter > 0) printf("%d moedas de 25 centavos\n", quarter);
    printf("%d moedas de 1 centavo\n", cents);

    return 0;
}
