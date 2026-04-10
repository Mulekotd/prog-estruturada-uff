#include <stdio.h>

int min(int *vector, int n)
{
    int min = vector[0];

    for (int i = 1; i < n; i++)
        if (min > vector[i]) min = vector[i];

    for (int i = 0; i < n; i++)
        vector[i] = vector[i] - min;
    
    return min;
}
