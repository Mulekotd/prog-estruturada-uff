#include <stdio.h>

int factorial(int num)
{    
    int fact = 1;

    for (int i = 2; i <= num; i++)
        fact *= i;
    
    return fact;
}

float series(int n)
{
    float s = 1.0;

    for (int i = 1; i < n; i++)
        s += 1.0 / factorial(i); 

    return s;
}

int main()
{
    int n;

    scanf("%d", &n);
    
    printf("%f\n", series(n));

    return 0;
}
