#ifndef VECTOR_H
#define VECTOR_H

typedef struct
{
    int max;    // tamanho máximo
    int length; // tamanho usado
    int *v;     // vetor
} Vector;

Vector* allocate_vector(int max);
void print_vector(Vector *vector);
int max_element(Vector *vector);
void add_element(Vector *vector, int element);
void insert_element(Vector *vector, int element, int index);
void remove_element(Vector *vector, int index);
void smart_search(Vector *vector, int element);
void reverse(Vector *vector, int start, int end);
void rotate_left(Vector *vector, int k);
void sort(Vector *vector);
void check_repeated(Vector *vector);
void find_pairs_sums(Vector *vector, int s);
void delete_vector(Vector* vector);

#endif
