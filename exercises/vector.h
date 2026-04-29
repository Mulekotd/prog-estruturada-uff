#ifndef VECTOR_H
#define VECTOR_H

struct vector_s
{
    int max;    // tamanho máximo
    int length; // tamanho usado
    int *v;     // vetor
}; typedef struct vector_s vector_t;

vector_t* allocate_vector(int max);
void print_vector(vector_t* vec);
void add_element(vector_t *vec, int element);
void insert_element(vector_t *vec, int element, int index);
void remove_element(vector_t *vec, int index);
void smart_search(vector_t *vec, int element);
void reverse(vector_t *vec, int start, int end);
void rotate_left(vector_t *vec, int k);
void sort(vector_t *vec);
void check_repeated(vector_t *vec);
void find_pairs_sums(vector_t *vec, int s);
void delete_vector(vector_t* vec);

#endif
