#include <stdio.h>

int min_element(int *v, int n)
{
    int min = v[0];

    for (int i = 1; i < n; i++)
        if (min > v[i]) min = v[i];

    for (int i = 0; i < n; i++)
        v[i] = v[i] - min;
    
    return min;
}
