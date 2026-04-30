#include "../include/student.h"
#include <stdio.h>
#include <stdlib.h>

float average(student_t *student)
{
    return (student->p1 + student->p2 + student->p3) / 3;
}

void print_student(student_t *student)
{
    printf("%s (Matrícula: %s)\n", student->name, student->registry);
    printf("Média = %.2f\n\n", average(student));
}
