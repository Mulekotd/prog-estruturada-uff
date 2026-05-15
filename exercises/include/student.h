#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char name[100];
    char registry[8];
    float p1;
    float p2;
    float p3;
} Student;

float average(Student *student);
void print_student(Student *student);

#endif
