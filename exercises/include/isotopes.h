#ifndef ISOTOPES_H
#define ISOTOPES_H

typedef struct {
    char simble;
    int mass;
} Isotope;

int validate_isotope(char s, int m, int length, Isotope v[]);

#endif
