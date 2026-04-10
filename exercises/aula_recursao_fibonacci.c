#include <stdio.h>

int fibonacci(int num)
{
    if (num == 2)
        return 1;
    
    if (num > 2)
        return fibonacci(num - 1) + fibonacci(num - 2);
    
    return 0;
}

int main()
{
    int n = 0;

    do scanf("%d", &n); while (n <= 0);

    for (int i = 1; i <= n; i++)
        printf("%d ", fibonacci(i));
    
    printf("\n");

    return 0;
}
