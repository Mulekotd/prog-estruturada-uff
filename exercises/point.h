#ifndef POINT_H
#define POINT_H

struct point_s
{
    float x;
    float y;
}; typedef struct point_s point_t;

point_t *create_point(float x, float y);
void print_point(point_t *p);
void delete_point(point_t *p);
point_t *multiple_sum(point_t *p1, point_t *p2);
float distance(point_t *p1, point_t *p2);

#endif
