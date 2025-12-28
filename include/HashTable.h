#ifndef HASH_TABLE_H
#define HASH_TABLE_H

typedef struct Entry {
    char *key;
    int   value;
    struct Entry *next;
} Entry;

typedef struct HashTable {
    Entry      **buckets;   // Array de ponteiros para Entry
    unsigned int size;      // Quantidade de buckets
} HashTable;

unsigned int hash(const char *key, int size);
int get(HashTable *table, char *key, int *found);
void set(HashTable *table, char *key, int value);
void destroy_table(HashTable *table);

#endif
