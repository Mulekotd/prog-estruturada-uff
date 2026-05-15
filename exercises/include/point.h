#ifndef POINT_H
#define POINT_H

typedef struct
{
    float x;
    float y;
} Point;

Point *create_point(float x, float y);
void print_point(Point *p);
void delete_point(Point *p);
Point *multiple_sum(Point *p1, Point *p2);
float distance(Point *p1, Point *p2);

#endif
