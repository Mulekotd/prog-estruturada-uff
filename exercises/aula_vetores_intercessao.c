#include <stdio.h>

int main()
{
    int n = -1, m = -1;

    do scanf("%d %d", &n, &m); while (n < 0 || m < 0);

    int v1[n]; int v2[m];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &v1[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &v2[i]);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v1[i] == v2[j])
            {
                printf("%d, ", v1[i]);
                count++;
                break;
            }
        }

    }
    
    printf("\n%d números\n", count);

    return 0;
}
