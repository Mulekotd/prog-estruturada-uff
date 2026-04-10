#include <stdio.h>

void bubbleSort(int n, int v[n])
{
    if (n <= 1) return;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            int tmp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = tmp;
        }
    }

    bubbleSort(n - 1, v);
}

void display(int n, int v[n], int index)
{
    printf("%d", v[index]);
    
    if (index == (n - 1)) return;

    printf(", ");

    display(n, v, index + 1);
}

int main()
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("\nvetor\nv = { ");
    display(n, v, 0);
    printf(" }\n");

    bubbleSort(n, v);

    printf("bolha recursiva\nv = { ");
    display(n, v, 0);
    printf(" }\n");

    return 0;
}
