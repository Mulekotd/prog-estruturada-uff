#include <stdio.h>

int main()
{
    int n = -1;
    int sum = 0;

    do scanf("%d", &n); while(n < 0);

    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    if (sum == n) printf("(perfeito)\n");
    else printf("(não perfeito)\n");

    return 0;
}
