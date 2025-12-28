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
    
    // Procura se a chave já existe
    while (current) {
        if (strcmp(current->key, key) == 0) {
            current->value = value;
            return;
        }

        current = current->next;
    }
    
    // Cria nova entrada
    Entry *entry = malloc(sizeof(Entry));

    if (entry == NULL) {
        printf("Erro: não foi possível alocar memória para Entry\n");
        return;
    }
    
    entry->key = strdup(key);
 
    if (entry->key == NULL) {
        printf("Erro: não foi possível alocar memória para a chave\n");
        free(entry);
        return;
    }
    
    entry->value = value;
    entry->next = table->buckets[index];
    table->buckets[index] = entry;
}

void destroy_table(HashTable *table) {
    if (table == NULL) return;
    
    // Percorre todos os buckets
    for (unsigned int i = 0; i < table->size; i++) {
        Entry *entry = table->buckets[i];
        
        // Libera todas as entradas na lista encadeada deste bucket
        while (entry != NULL) {
            Entry *next = entry->next;
            
            free(entry->key);
            free(entry);
            
            entry = next;
        }
    }
    
    free(table->buckets);
    free(table);
}
