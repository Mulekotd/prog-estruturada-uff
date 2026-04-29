#include <stdio.h>
#include "point.h"

int main()
{
    point_t *p = create_point(2.0, 1.0);
    point_t *q = create_point(3.4, 2.1);
    point_t *ps = multiple_sum(p, q);

    print_point(p);
    print_point(q);
    print_point(ps);

    float d = distance(p, q);
    printf("Distância entre pontos: %f\n", d);

    delete_point(p);
    delete_point(q);

    return 0;
}
