#include "point.h"
#include <stdio.h>
#include <stdlib.h>

point_t *create_point(float x, float y)
{
    point_t *point = (point_t*) malloc(sizeof(point_t));

    if (point == NULL)
    {
        printf("Memória insuficiente!\n");
        exit(1);
    }

    point->x = x;
    point->y = y;

    return point;
}

void print_point(point_t *p)
{
    printf("Ponto: (%f, %f)\n", p->x, p->y);
}

void delete_point(point_t *p)
{
    free(p);
}

point_t *multiple_sum(point_t *p1, point_t *p2)
{
    return create_point(p1->x + p2->x, p1->y + p2->y);
}

float distance(point_t *p1, point_t *p2)
{
    float fx = (p1->x - p2->x) * (p1->x - p2->x);
    float fy = (p1->y - p2->y) * (p1->y - p2->y);

    return (fx + fy) * 0.5;
}
