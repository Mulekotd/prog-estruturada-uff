#include <stdio.h>

int main()
{
    int number;
    int a, b, c, d;

    scanf("%d", &number);

    // Pega os digitos da direita para esquerda ignorando o centro
    a = number % 10;           // 1o
    b = (number / 10) % 10;    // 2o
    c = (number / 1000) % 10;  // 4o
    d = (number / 10000) % 10; // 5o

    if (a == d && b == c) printf("Sim\n");
    else printf("Não\n");

    return 0;
}
