#include <stdio.h>

int calculate(int start, int end, int a, int b, int c)
{
    if (start == end) return c;

    int next = (2 * c) - b - a;

    return calculate(start + 1, end, b, c, next);
}

int voldemort(int n)
{
    if (n <= 0) return 0;
    if (n <= 3) return 1;

    int a = 1, b = 1, c = 1;
    
    return calculate(3, n, a, b, c);
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", voldemort(n));
    
    return 0;
}
