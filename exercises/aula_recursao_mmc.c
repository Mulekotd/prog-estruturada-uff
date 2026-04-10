#include <stdio.h>

int mmc(int n1, int n2, int cand)
{
    if ((cand % n1 == 0) && (cand % n2 == 0))
        return cand;
    else 
        return mmc(n1, n2, cand + 1);
}

int main()
{
    int n1, n2;

    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    
    printf("O MMC de %d e %d é %d\n", n1, n2, mmc(n1, n2, 1));

    return 0;
}
