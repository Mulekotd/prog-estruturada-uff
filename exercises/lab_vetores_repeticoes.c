#include <stdio.h>

int main()
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    int v1[n];

    printf("Digite uma sequencia de %d números inteiros: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v1[i]);
    
    for (int i = 0; i < n; i++)
    {
        int curr = v1[i];
        int count = 1;

        if (v1[i] == -1)
            continue;;

        for (int j = i + 1; j < n; j++)
        {
            if (v1[j] == curr)
            {
                v1[j] = -1;
                count++;
            }
        }

        printf("O número %d aparece %d vezes na sequencia\n", curr, count);
    }

    return 0;
}
