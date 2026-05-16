#include <stdio.h>
#include "include/point.h"

int main()
{
    Point *p = createPoint(2.0, 1.0);
    Point *q = createPoint(3.4, 2.1);
    Point *ps = multipleSum(p, q);

    printPoint(p);
    printPoint(q);
    printPoint(ps);

    float d = distance(p, q);
    printf("Distância entre pontos: %f\n", d);

    deletePoint(p);
    deletePoint(q);

    return 0;
}
