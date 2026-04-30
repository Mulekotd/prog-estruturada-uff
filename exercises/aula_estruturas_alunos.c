#include <stdio.h>
#include <stdlib.h>
#include "include/student.h"

int main()
{
    int number;

    printf("Número de alunos: ");
    scanf("%d", &number);

    // Alocação dinâmica
    student_t *c = malloc(number * sizeof(student_t));

    if (c == NULL)
    {
        printf("Erro de alocação!\n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("\nALUNO %d\n", i + 1);

        printf("Nome do aluno: ");
        scanf(" %[^\n]", c[i].name);

        printf("Matrícula do aluno: ");
        scanf("%s", c[i].registry);

        printf("Notas do aluno (3 valores): ");
        scanf("%f %f %f", &c[i].p1, &c[i].p2, &c[i].p3);

        printf("-----------------\n");
    }

    printf("\n=== Alunos aprovados ===\n");

    for (int i = 0; i < number; i++)
    {
        if (average(&c[i]) >= 6.0)
        {
            print_student(&c[i]);
        }
    }

    free(c);

    return 0;
}
