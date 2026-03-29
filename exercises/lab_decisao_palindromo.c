#include <stdio.h>

int main()
{
    int input;
    int a, b, c, d;

    scanf("%d", &input);

    a = input % 10;
    b = (input / 10) % 10;
    c = (input / 1000) % 10;
    d = (input / 10000) % 10;

    if (a == d && b == c) printf("Sim\n");
    else printf("Não\n");

    return 0;
}
