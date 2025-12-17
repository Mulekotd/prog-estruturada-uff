#include "../include/HashTable.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

unsigned int hash(const char *key, int size) {
    unsigned int hash = 0;

    while (*key) {
        hash = (hash * 31) + *key;
        key++;
    }

    return hash % size;
}

int get(HashTable *table, char *key, int *found) {
    unsigned int index = hash(key, table->size);

    Entry *current = table->buckets[index];

    while (current) {
        if (strcmp(current->key, key) == 0) {
            *found = 1;
            return current->value;
        }

        current = current->next;
    }

    *found = 0;
    return 0;
}

void set(HashTable *table, char *key, int value) {
    unsigned int index = hash(key, table->size);

    Entry *current = table->buckets[index];

    while (current) {
        if (strcmp(current->key, key) == 0) {
            current->value = value;
            return;
        }

        current = current->next;
    }

    Entry *entry = malloc(sizeof(Entry));

    entry->key = strdup(key);
    entry->value = value;
    entry->next = table->buckets[index];

    table->buckets[index] = entry;
}
