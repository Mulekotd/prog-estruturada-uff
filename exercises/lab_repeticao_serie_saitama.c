#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    double serie = 0;
    
    scanf("%d%d", &n, &m);

    for (double i = 1.0; i <= n; i++)
    {
        for (double j = 1.0; j <= m; j++)
        {
            double numerator = pow(i, 2.0) * j;
            double denominator = pow(3.0, i) * ((j * pow(3.0, i) + (i * pow(3.0, j))));
            serie += numerator / denominator;
        }
    }

    printf("%.4f\n", serie);

    return 0;
}
