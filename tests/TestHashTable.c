#include <stdio.h>
#include <stdlib.h>

#include "../include/HashTable.h"

int main() {
    HashTable *table = malloc(sizeof(HashTable));

    table->size = 4;
    table->buckets = calloc(table->size, sizeof(Entry*));

    set(table, "LUCAS", 15);
    set(table, "MIKE", 14);
    set(table, "WILL", 14);
    set(table, "DUSTIN", 13);

    int found;
    int value = get(table, "JONATHAN", &found);

    if (found) printf("Valor: %d\n", value);
    else printf("Não encontrado\n");

    return 0;
}
