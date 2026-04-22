#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;

    printf("n: ");
    scanf("%d", &n);

    int **M = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        M[i] = (int*) malloc(n * sizeof(int));
    
    // Leitura dos valores das distâncias
    printf("Informe as distâncias: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j) 
            {
                M[i][j] = 0;
                continue;
            }

            scanf("%d", &M[i][j]);
        }
    }

    printf("Matriz M:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", M[i][j]);

        printf("\n");
    }


    printf("k: ");
    scanf("%d", &k);

    int *sequence = (int*) malloc(k * sizeof(int));

    printf("Forneça o itinerário:\n");
    for (int i = 0; i < k; i++)
    {
        printf("cidade %d:", i + 1);
        scanf("%d", &sequence[i]);
    }

    int itinerary = 0;
    
    // Calcula itinerário
    for (int i = 0; i <= k; i++)
    {
        int line = sequence[i]; int column = sequence[i + 1];
        itinerary += M[line][column];
    }

    printf("Custo do itinerário: %d\n", itinerary);

    // Limpa memória
    for (int i = 0; i < n; i++)
        free(M[i]);
    
    free(sequence);
    free(M);

    return 0;
}
