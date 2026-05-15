#include <stdio.h>
#include <stdlib.h>
#include "../include/isotopes.h"

int validate_isotope(char s, int m, int length, Isotope v[])
{
    if (length != 0) {
        for (int i = 0; i < length; i++)
            if ((s == v[i].simble) && (m == v[i].mass))
                return 0;
    }

    return 1;
}
