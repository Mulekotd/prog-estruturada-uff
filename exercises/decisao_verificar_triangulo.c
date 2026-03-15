#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilatero\n");
    } else if (a == b || b == c || c == a) {
        printf("Isóceles\n");
    } else {
        printf("Escaleno\n");
    }

    return 0;
}