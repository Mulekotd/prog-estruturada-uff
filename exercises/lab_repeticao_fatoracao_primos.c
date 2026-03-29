#include <stdio.h>

int main()
{
    int n = -1;

    do scanf("%d", &n); while (n < 0);

    int divider = 2;

    while (n > 1)
    {
        if (n % divider == 0)
        {
            printf("%d\n", divider);
            n /= divider;
        }
        else
        {
            divider++;
        }
    }

    return 0;
}
