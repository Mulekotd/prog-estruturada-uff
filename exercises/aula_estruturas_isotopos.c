#include <stdio.h>
#include "include/isotopes.h"

int main()
{
    int n;

    printf("Número de isotopos: ");
    scanf("%d", &n);

    char simble;
    int mass, count = 0;

    isotope vec[n];

    for (int i = 0; i < n; i++) {
        printf("Simbolo = ");
        scanf(" %c", &simble);
        printf("Massa = ");
        scanf("%d", &mass);

        if(validate_isotope(simble, mass, count, vec)) {
            vec[count].simble = simble;
            vec[count].mass = mass;
            count++;
        }
    }

    printf("\nDiferentes = %d\n", count);
    for (int i = 0; i < count; i++)
        printf("%c) %d\n", vec[i].simble, vec[i].mass);

    return 0;
}
