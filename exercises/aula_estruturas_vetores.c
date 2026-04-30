#include <stdio.h>
#include "include/vector.h"

#define MAX 10

int main()
{
    vector_t *vec = allocate_vector(MAX);

    for (int i = 0; i < MAX; i++)
        add_element(vec, i*10);
    print_vector(vec);

    printf("Elemento máximo: %d\n", max_element(vec));
    delete_vector(vec);

    return 0;
}
