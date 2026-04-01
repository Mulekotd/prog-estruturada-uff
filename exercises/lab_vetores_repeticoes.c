#include <stdio.h>

int main()
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int A[n];

    printf("Digite uma sequência de %d números inteiros: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    
    for (int i = 0; i < n; i++)
    {
        int curr = A[i];
        int count = 1;

        if (A[i] == -1)
            continue;;

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] == curr)
            {
                A[j] = -1;
                count++;
            }
        }

        printf("O número %d aparece %d vezes na sequencia\n", curr, count);
    }

    return 0;
}
