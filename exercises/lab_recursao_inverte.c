#include <stdio.h>

void reverse(int n, int v[n], int start, int end)
{
    if (start > end) return;

    int left = v[start]; int right = v[end];
    v[start] = right; v[end] = left;

    reverse(n, v, start + 1, end - 1);
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

    reverse(n, v, 0, n - 1);

    printf("vetor invertido\nv = { ");
    display(n, v, 0);
    printf(" }\n");
    
    return 0;
}
