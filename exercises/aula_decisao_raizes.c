#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int condition;
    double r1, r2;

    scanf("%d%d%d", &a, &b, &c);
    
    int discriminant = pow(b, 2) - 4 * a * c;
    
    if (discriminant == 0) condition = 0;
    else if (discriminant > 0) condition = 1;
    else condition = -1;

    switch (condition)
    {
        case 0:
            r1 = (-b / 2.0) * a;
            printf("x: %2.f\n", r1);
            break;
        case 1:
            r1 = (-b + sqrt(discriminant)) / 2.0 * a;
            r2 = (-b - sqrt(discriminant)) / 2.0 * a;
            printf("x1: %2.f, x2: %2.f\n", r1, r2);
            break;
        case -1:
        default:
            printf("sem raízes reais\n");
            break;
    }

    return 0;
}
