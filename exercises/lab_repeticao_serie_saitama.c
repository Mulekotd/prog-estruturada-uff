#include <math.h>
#include <stdio.h>

int main()
{
    int n, m;
    double serie = 0;
    
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            double numerator = pow((double)i, 2.0) * j;
            double denominator = pow(3.0, (double)i) * ((j * pow(3.0, (double)i) + (i * pow(3.0, (double)j))));
            serie += numerator / denominator;
        }
    }

    printf("%.4f\n", serie);

    return 0;
}
