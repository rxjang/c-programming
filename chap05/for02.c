#include <stdio.h>

void main() {
    int a, b;
    for (a = 1; a <= 3; ++a) {
        printf("a = %d\n", a);
        for (b = 0; b <= 4; b++) {
            printf("b = %d ", b);
        }
        putchar('\n');
    }
}