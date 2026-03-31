#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int v1[n]; int v2[n]; int sum[n];

    printf("v1 = ");
    for (int i = 0; i < n; i++)
        scanf("%d", &v1[i]);
    
    printf("v2 = ");
    for (int i = 0; i < n; i++)
        scanf("%d", &v2[i]);

    for (int i = 0; i < n; i++)
        sum[i] = v1[i] + v2[i];

    for (int i = 0; i < n; i++)
        printf("%d ", sum[i]);

    printf("\n");

    return 0;
}
