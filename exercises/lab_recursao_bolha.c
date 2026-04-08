#include <stdio.h>

void bolhaRec(int n, int v[n])
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

    bolhaRec(n - 1, v);
}

void imprime(int n, int v[n], int index)
{
    printf("%d", v[index]);
    
    if (index == (n - 1)) return;

    printf(", ");

    imprime(n, v, index + 1);
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
    imprime(n, v, 0);
    printf(" }\n");

    bolhaRec(n, v);

    printf("bolha recursiva\nv = { ");
    imprime(n, v, 0);
    printf(" }\n");

    return 0;
}
