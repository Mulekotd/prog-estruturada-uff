#ifndef POINT_H
#define POINT_H

typedef struct
{
    float x;
    float y;
} Point;

Point *createPoint(float x, float y);
void printPoint(Point *p);
void deletePoint(Point *p);
Point *multipleSum(Point *p1, Point *p2);
float distance(Point *p1, Point *p2);

#endif
