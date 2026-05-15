#include <stdio.h>
#include <stdlib.h>
#include "../include/point.h"

Point *create_point(float x, float y)
{
    Point *point = (Point*) malloc(sizeof(Point));

    if (point == NULL)
    {
        printf("Memória insuficiente!\n");
        return NULL;
    }

    point->x = x;
    point->y = y;

    return point;
}

void print_point(Point *p)
{
    printf("Ponto: (%f, %f)\n", p->x, p->y);
}

void delete_point(Point *p)
{
    free(p);
}

Point *multiple_sum(Point *p1, Point *p2)
{
    return create_point(p1->x + p2->x, p1->y + p2->y);
}

float distance(Point *p1, Point *p2)
{
    float fx = (p1->x - p2->x) * (p1->x - p2->x);
    float fy = (p1->y - p2->y) * (p1->y - p2->y);

    return (fx + fy) * 0.5;
}
