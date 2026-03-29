#include <stdio.h>

int main()
{
    float m1, c1, m2, c2, m3, c3, m4, c4;
    int g1, g2, g3, g4, g5, g6, f1, f2, p1, p2;

    scanf("%f%f", &m1, &c1);
    scanf("%f%f", &m2, &c2);
    scanf("%f%f", &m3, &c3);
    scanf("%f%f", &m4, &c4);

    g1 = (int)((2 * m1 * c2) / (m1 + m2 + c1 + c2));
    g2 = (int)((2 * m2 * c1) / (m1 + m2 + c1 + c2));
    g3 = (int)((2 * m3 * c4) / (m3 + m4 + c3 + c4));
    g4 = (int)((2 * m4 * c3) / (m3 + m4 + c3 + c4));

    // Semifinais
    printf("Semifinal 1\n");
    printf("(Time 1) %d x %d (Time 2)\n", g1, g2);

    if (g1 >= g2) 
    {
        printf("Time 1 se classificou\n");
        f1 = 1;
        p1 = m1;
    }
    else if (g1 < g2)
    {
        printf("Time 2 se classificou\n");
        f1 = 2;
        p1 = m2;
    }

    printf("Semifinal 2\n");
    printf("(Time 3) %d x %d (Time 4)\n", g3, g4);

    if (g3 >= g4) {
        printf("Time 3 se classificou\n");
        f2 = 3;
        p2 = m3;
    }
    else if (g3 < g4)
    {
        printf("Time 4 se classificou\n");
        f2 = 4;
        p2 = m4;
    }

    if (f1 == 1 && f2 == 3) 
    {
        g5 = (int)((2 * m1 * c3) / (m1 + m3 + c1 + c3));
        g6 = (int)((2 * m3 * c1) / (m1 + m3 + c1 + c3));
    }
    else if (f1 == 1 && f2 == 4) 
    { 
        g5 = (int)((2 * m1 * c4) / (m1 + m4 + c1 + c4)); 
        g6 = (int)((2 * m4 * c1) / (m1 + m4 + c1 + c4));
    }
    else if (f1 == 2 && f2 == 3)
    {
        g5 = (int)((2 * m2 * c3) / (m2 + m3 + c2 + c3)); 
        g6 = (int)((2 * m3 * c2) / (m2 + m3 + c2 + c3));
    }
    else if (f1 == 2 && f2 == 4)
    {
        g5 = (int)((2 * m2 * c4) / (m2 + m4 + c2 + c4)); 
        g6 = (int)((2 * m4 * c2) / (m2 + m4 + c2 + c4));
    }
    
    // Finais
    printf("Final\n");
    printf("(Time %d) %d x %d (Time %d)\n", f1, g5, f2, g6);

    if (g5 > g6) 
    {
        printf("Time %d CAMPEAO!\n", f1);
        return 1;
    }
    else
    {
        printf("Time %d CAMPEAO!\n", f2);
        return 1;
    } 
    
    if (g5 == g6)
    {
        printf("PENALIDADES\n");
        printf("Time %d %d x %d Time %d\n", f1, g5, f2, g6);

        if (p1 >= p2) printf("Time %d CAMPEAO\n", f1);
        else if (p1 < p2) printf("Time %d CAMPEAO\n", f2);
    }

    return 0;
}
