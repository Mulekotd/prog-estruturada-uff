#include <stdio.h>

int contaDig(int num)
{
    if (num == 0)
        return 0;

    int curr = num % 10;
    int rest = num / 10;

    return curr + contaDig(rest);
}

int main()
{
    int n = 0;

    do scanf("%d", &n); while (n <= 0);

    int result = contaDig(n);
    printf("%d\n", result);

    return 0;
}
