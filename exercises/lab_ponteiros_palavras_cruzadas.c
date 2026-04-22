#include <stdio.h>

#define ROWS 5
#define COLS 8

int isHorizontalStart(int M[ROWS][COLS], int i, int j)
{
    if (M[i][j] != 0) return 0;
    int notLeft = (j == 0 || M[i][j-1] == -1);
    int hasRight  = (j + 1 < COLS && M[i][j+1] == 0);
    return notLeft && hasRight;
}

int isVerticalStart(int M[ROWS][COLS], int i, int j)
{
    if (M[i][j] != 0) return 0;
    int notUp  = (i == 0 || M[i-1][j] == -1);
    int hasDown = (i + 1 < ROWS && M[i+1][j] == 0);
    return notUp && hasDown;
}

int main() {
    int M[ROWS][COLS] = {
        { 0, -1,  0, -1, -1,  0, -1,  0},
        { 0,  0,  0,  0, -1,  0,  0,  0},
        { 0,  0, -1, -1,  0,  0, -1,  0},
        {-1,  0,  0,  0,  0, -1,  0,  0},
        { 0,  0, -1,  0,  0,  0, -1, -1}
    };

    printf("Matriz original:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%3d", M[i][j]);
        printf("\n");
    }

    int counter = 1;
    int words = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            int h = isHorizontalStart(M, i, j);
            int v = isVerticalStart(M, i, j);

            if (h || v)
            {
                M[i][j] = counter++;
                words += h + v;
            }
        }
    }

    printf("\nMatriz numerada:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%3d", M[i][j]);
        printf("\n");
    }

    printf("\nTotal de palavras: %d\n", words);

    return 0;
}
