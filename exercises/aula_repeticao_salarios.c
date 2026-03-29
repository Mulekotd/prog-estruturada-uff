#include <stdio.h>

int main()
{
    int year = 1996;
    double salary = 1000;
    float percentage = 0.1;

    for (; year < 2026; year++)
    {
        salary += salary * (percentage / 100);
        percentage = percentage * 2;
    }

    printf("Salário atual R$ %.2lf\n", salary);

    return 0;
}
