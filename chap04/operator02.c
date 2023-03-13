#include <stdio.h>

void main() {
    int x = 5, a, b;
    a = ++x * x--;
    b = x * 10;
    printf("a = %d + b = %d x = %d", a, b, x);
}