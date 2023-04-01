#include <stdio.h>

int sum(int a, int b);

void main() {
    int x, y, c;
    scanf("%d, %d", &x, &y);
    c = sum(10, 20);
    printf("%d",c);
}

int sum(int a, int b) {
    int d;
    d = a + b;
    return(d);
}