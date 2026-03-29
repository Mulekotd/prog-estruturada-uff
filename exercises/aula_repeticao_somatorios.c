#include <stdio.h>

int main()
{
    int n, sum = 0, numerator = 0, denominator = 0;
    float avg = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int number = 0;
        
        do scanf("%d", &number); while (number < 0);

        if (number % 2 == 0) sum += number;
        if (number % 3 == 0)
        {
            numerator += number;
            denominator += 1;
        }
    }

    avg = (float)(numerator / denominator);

    printf("%d\n", sum);
    printf("%.1f\n", avg);

    return 0;
}
