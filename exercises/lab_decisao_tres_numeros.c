#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a + b == c) || (b + c == a) || (c + a == b)) printf("soma\n");
    else if ((a * b == c) || (b * c == a) || (c * a == b)) printf("multi\n");
    else {
        if ((a + b + c) % 2 == 0) printf("par\n");
        else printf("ímpar\n");
    }

    return 0;
}
