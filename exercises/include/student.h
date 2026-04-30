#ifndef STUDENT_H
#define STUDENT_H

struct student_s {
 char name[100];
 char registry[8];
 float p1;
 float p2;
 float p3;
}; typedef struct student_s student_t;

float average(student_t *student);
void print_student(student_t *student);

#endif
