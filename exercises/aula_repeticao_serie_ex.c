#include <stdio.h>
#include <math.h>

int main()
{
    double x, eps;

    scanf("%lf %lf", &x, &eps);

    double term = 1.0;
    double sum = 1.0;     // Acumulador
    int n = 1;            // Contador de termos

    while (fabs(term) >= eps)
    {
        term = term * x / n;
        sum += term;
        n++;
    }

    printf("Aproximacao: %.6lf\n", sum);
    printf("Quantidade de termos: %d\n", n);

    return 0;
}
