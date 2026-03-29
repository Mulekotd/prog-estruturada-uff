#include <stdio.h>

int main() 
{
    int hours;
    double grossWage, netWage, tax;
    
    scanf("%d", &hours);

    grossWage = hours * 12;
    
    if (hours > 40)
    {
        double extra = (hours - 40) * (12 * 1.5);
        grossWage += extra;
    }

    if (grossWage <= 300) tax = grossWage * 0.15;
    else if (grossWage > 300 && grossWage <= 450)
    {
        tax = 300 * 0.15;
        tax += (grossWage - 300) * 0.2;
    } else
    {
        tax = 450 * 0.2;
        tax += (grossWage - 450) * 0.25;
    }

    netWage = grossWage - tax;

    printf("Salário bruto: %.2f\n", grossWage);
    printf("Imposto: %.2f\n", tax);
    printf("Salário líquido: %.2f\n", netWage);

    return 0;
}
