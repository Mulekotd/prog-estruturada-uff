#ifndef ISOTOPES_H
#define ISOTOPES_H

struct isotope_s{
    char simble;
    int mass;
}; typedef struct isotope_s isotope;

int validate_isotope(char s, int m, int length, isotope v[]);

#endif
