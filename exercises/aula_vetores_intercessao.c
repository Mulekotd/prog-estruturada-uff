#include <stdio.h>

int main()
{
    int n = -1, m = -1;

    do scanf("%d %d", &n, &m); while (n < 0 || m < 0);

    int A[n]; int B[m];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &B[i]);

    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                printf("%d, ", A[i]);
                count++;
                break;
            }
        }

    }
    
    printf("\n%d números\n", count);

    return 0;
}
