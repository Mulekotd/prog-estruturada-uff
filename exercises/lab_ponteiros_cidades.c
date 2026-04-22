#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int n)
{
    int **matrix = (int **) malloc(n * sizeof(int *));
    
    for (int i = 0; i < n; i++)
        matrix[i] = (int *) malloc(n * sizeof(int));
    
    return matrix;
}

void freeMatrix(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
        free(matrix[i]);
    free(matrix);
}

void fillMatrix(int **matrix, int n)
{
    int example[5][5] = {
        { 1, 1, 0, 0, 0 },
        { 0, 1, 1, 0, 0 },
        { 1, 0, 1, 0, 1 },
        { 1, 0, 0, 1, 0 },
        { 1, 0, 0, 1, 1 }
    };

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = example[i][j];
}

// Calcula o grau de conexão de uma cidade
void connectionDegree(int **matrix, int n)
{
    int city;
    printf("Enter city (0 to %d): ", n-1);
    scanf("%d", &city);

    int outDegree = 0;
    int inDegree = 0;

    // Soma da linha → quantidade de estradas que SAEM da cidade
    for (int j = 0; j < n; j++)
        outDegree += matrix[city][j];

    // Soma da coluna → quantidade de estradas que CHEGAM na cidade
    for (int i = 0; i < n; i++)
        inDegree += matrix[i][city];

    printf("City %d:\n", city);
    printf("Outgoing roads: %d\n", outDegree);
    printf("Incoming roads: %d\n", inDegree);
}

// Encontra a cidade com maior número de estradas chegando (in-degree)
void easiestCity(int **matrix, int n)
{
    int maxCity = 0;
    int maxIn = -1;

    // Percorre cada coluna (cada cidade destino)
    for (int j = 0; j < n; j++)
    {
        int inDegree = 0;

        // Soma todas as entradas daquela coluna
        for (int i = 0; i < n; i++)
            inDegree += matrix[i][j];

        // Atualiza a cidade com maior número de entradas
        if (inDegree > maxIn)
        {
            maxIn = inDegree;
            maxCity = j;
        }
    }

    printf("City %d has the most incoming roads = %d\n", maxCity, maxIn);
}

// Verifica se um roteiro (sequência de cidades) é possível
void checkRoute(int **matrix, int n)
{
    int k;
    printf("How many cities in the route: ");
    scanf("%d", &k);

    // Vetor dinâmico para armazenar o roteiro
    int *route = (int *) malloc(k * sizeof(int));

    // Leitura do roteiro
    for (int i = 0; i < k; i++)
    {
        printf("City %d: ", i+1);
        scanf("%d", &route[i]);
    }

    int possible = 1;

    // Verifica cada par consecutivo do roteiro
    for (int i = 0; i < k - 1; i++)
    {
        int from = route[i];
        int to = route[i+1];

        // Se não existe estrada direta, o roteiro é inválido
        if (matrix[from][to] == 0)
        {
            printf("-- impossible route :( --\n");
            printf("No road from %d to %d\n", from, to);

            possible = 0;
            break;
        }
    }

    if (possible)
        printf("-- possible route :) --\n");

    free(route);
}

// DFS (busca em profundidade) para encontrar caminho entre duas cidades
int dfs(int **matrix, int n, int current, int target, int *visited, int *path, int pathSize)
{
    // Marca cidade atual como visitada
    visited[current] = 1;

    // Adiciona ao caminho atual
    path[pathSize] = current;

    // Caso base: chegou no destino
    if (current == target)
    {
        printf("-- path found = ");

        // Imprime o caminho encontrado
        for (int i = 0; i <= pathSize; i++)
        {
            printf("%d", path[i]);
            if (i < pathSize) printf(" -> ");
        }

        printf("\n");
        return 1;
    }

    // Explora vizinhos (cidades conectadas)
    for (int j = 0; j < n; j++)
    {
        // Existe estrada e ainda não foi visitada
        if (matrix[current][j] == 1 && !visited[j])
        {
            // Chamada recursiva
            if (dfs(matrix, n, j, target, visited, path, pathSize + 1))
                return 1; // caminho encontrado
        }
    }

    // Nenhum caminho encontrado a partir desta rota
    return 0;
}

// Interface para buscar caminho entre duas cidades
void findPath(int **matrix, int n)
{
    int start, end;
    printf("Enter origin and destination: ");
    scanf("%d %d", &start, &end);

    // Vetor de controle de visitados (inicializado com 0)
    int *visited = (int *) calloc(n, sizeof(int));

    // Vetor para armazenar o caminho
    int *path = (int *) malloc(n * sizeof(int));

    // Executa DFS
    if (!dfs(matrix, n, start, end, visited, path, 0))
        printf("-- no path found --\n");

    free(visited);
    free(path);
}

void menu()
{
    printf("\n--- MENU ---\n");
    printf("1 - Connection degree\n");
    printf("2 - Easiest city to reach\n");
    printf("3 - Check route\n");
    printf("4 - Find path\n");
    printf("10 - Exit\n");
}

int main()
{
    int n = 5;
    int option;

    int **matrix = allocateMatrix(n);
    fillMatrix(matrix, n);

    do {
        menu();
        printf("Option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                connectionDegree(matrix, n);
                break;

            case 2:
                easiestCity(matrix, n);
                break;

            case 3:
                checkRoute(matrix, n);
                break;

            case 4:
                findPath(matrix, n);
                break;

            case 10:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option!\n");
        }

    } while(option != 10);

    freeMatrix(matrix, n);

    return 0;
}
