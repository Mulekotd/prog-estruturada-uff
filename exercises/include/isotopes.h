#ifndef ISOTOPES_H
#define ISOTOPES_H

typedef struct {
    char simble;
    int mass;
} Isotope;

int validateIsotope(char s, int m, int length, Isotope v[]);

#endif
