#include <stdio.h>

int main() {
    int horas;
    double salarioBruto, salarioLiquido, imposto;
    
    scanf("%d", &horas);
    salarioBruto = horas * 12;
    
    if (horas > 40) {
        double extra = (horas - 40) * (12 * 1.5);
        salarioBruto += extra;
    }

    if (salarioBruto <= 300) imposto = salarioBruto * 0.15;
    else if (salarioBruto > 300 && salarioBruto <= 450) {
        imposto = 300 * 0.15;
        imposto += (salarioBruto - 300) * 0.2;
    } else {
        imposto = 450 * 0.2;
        imposto += (salarioBruto - 450) * 0.25;
    }

    salarioLiquido = salarioBruto - imposto;

    printf("Salário bruto: %.2f\n", salarioBruto);
    printf("Imposto: %.2f\n", imposto);
    printf("Salário líquido: %.2f\n", salarioLiquido);

    return 0;
}
