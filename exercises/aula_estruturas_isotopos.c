#include <stdio.h>
#include "include/isotopes.h"

int main()
{
    int n;

    printf("Número de isotopos: ");
    scanf("%d", &n);

    char simble;
    int mass, count = 0;

    Isotope vector[n];

    for (int i = 0; i < n; i++) {
        printf("Simbolo = ");
        scanf(" %c", &simble);
        printf("Massa = ");
        scanf("%d", &mass);

        if(validateIsotope(simble, mass, count, vector)) {
            vector[count].simble = simble;
            vector[count].mass = mass;
            count++;
        }
    }

    printf("\nDiferentes = %d\n", count);
    for (int i = 0; i < count; i++)
        printf("%c) %d\n", vector[i].simble, vector[i].mass);

    return 0;
}
