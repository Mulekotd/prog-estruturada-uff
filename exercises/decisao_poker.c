#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c){
        printf("trinca\n");
    } else if ((a == b) || (a == c) || (b == c)) {
        printf("par\n");
    } else {
        if (((a == b + 1) && (a == c + 2)) || ((a == c + 1) && (a == b + 2)) ||
            ((b == a + 1) && (b == c + 2)) || ((b == c + 1) && (b == a + 2)) ||
            ((c == a + 1) && (c == b + 2)) || ((c == b + 1) && (c == a + 2))) {
            printf("sequencia\n");
        } else {
            printf("lascou\n");
        }
    }

    return 0;
}
