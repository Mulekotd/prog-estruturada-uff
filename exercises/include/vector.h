#ifndef VECTOR_H
#define VECTOR_H

typedef struct
{
    int max;    // tamanho máximo
    int length; // tamanho usado
    int *v;     // vetor
} Vector;

Vector* allocateVector(int max);
void printVector(Vector *vector);
int maxElement(Vector *vector);
void addElement(Vector *vector, int element);
void insertElement(Vector *vector, int element, int index);
void removeElement(Vector *vector, int index);
void smartSearch(Vector *vector, int element);
void reverse(Vector *vector, int start, int end);
void rotateLeft(Vector *vector, int k);
void sort(Vector *vector);
void checkRepeated(Vector *vector);
void findPairsSums(Vector *vector, int s);
void deleteVector(Vector* vector);

#endif
