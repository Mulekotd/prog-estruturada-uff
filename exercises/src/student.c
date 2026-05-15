#include <stdio.h>
#include <stdlib.h>
#include "../include/student.h"

float average(Student *student)
{
    return (student->p1 + student->p2 + student->p3) / 3;
}

void print_student(Student *student)
{
    printf("%s (Matrícula: %s)\n", student->name, student->registry);
    printf("Média = %.2f\n\n", average(student));
}
