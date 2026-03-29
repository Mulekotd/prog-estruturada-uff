#include <stdio.h>

int main()
{
    int num = -1;
    int a = 0, b = 1, next;

    do scanf("%d", &num); while (num < 0);

    if (a <= num) printf("%d ", a);
    if (b <= num) printf("%d ", b);

    next = a + b;

    while (next <= num)
    {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    return 0;
}
