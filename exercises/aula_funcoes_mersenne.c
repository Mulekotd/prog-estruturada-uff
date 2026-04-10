#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num < 2)
        return 0;

    if (num == 2)
        return 1;

    if (num % 2 == 0)
        return 0;

    for (int i = 3; i <= num / i; i += 2)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void mersenne()
{
    int n = 10000;
    
    for (int i = 2; i < n; i++) 
    {
        if (!isPrime(i)) continue;
        
        for (int j = 0; j < i; j++)
        {
            if ((pow(2, j) - 1) == i)
                printf("%d\n", i);
        }        
    }
}


int main()
{
    mersenne();
    return 0;
}
