#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int condicao;
    double raiz1, raiz2;
    scanf("%d%d%d", &a, &b, &c);
    
    int descriminante = (b*b) - 4*a*c;
    
    if (descriminante == 0) condicao = 0;
    else if (descriminante > 0) condicao = 1;
    else condicao = -1;

    switch (condicao) {
        case 0:
            raiz1 = (-b / 2.0) * a;
            printf("x: %2.f", raiz1);
            break;
        case 1:
            raiz1 = (-b + sqrt(descriminante)) / 2.0 * a;
            raiz2 = (-b - sqrt(descriminante)) / 2.0 * a;
            printf("x1: %2.f, x2: %2.f", raiz1, raiz2);
            break;
        case -1:
        default:
            printf("sem raízes reais");
            break;
    }

    return 0;
}
