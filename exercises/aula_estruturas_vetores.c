#include <stdio.h>
#include "include/vector.h"

#define MAX 10

int main()
{
    Vector *vector = allocateVector(MAX);

    for (int i = 0; i < MAX; i++)
        addElement(vector, i*10);

    printVector(vector);

    printf("Elemento máximo: %d\n", maxElement(vector));
    deleteVector(vector);

    return 0;
}
