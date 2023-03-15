#include <stdio.h>
#pragma warning(disable:4996)

void main() {
    int a , b, max;
    scanf("%d %d", &a, &b);
    if (a >= b) {
        max = a;
    } else {
        max = b;
    }
    printf("max = %d\n", max);
}