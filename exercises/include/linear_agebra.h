#ifndef LINEAR_ALGEBRA_H
#define LINEAR_ALGEBRA_H

typedef struct {
    int x;
    int y;
    int z;
} Vector;

Vector add(Vector v1, Vector v2);
Vector subtract(Vector v1, Vector v2);
Vector scalarMultiply(Vector v, int scalar);
int dotProduct(Vector v1, Vector v2);
Vector crossProduct(Vector v1, Vector v2);

#endif
