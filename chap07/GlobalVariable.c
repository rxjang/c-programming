#include <stdio.h>

void func1();
int x;

void main() {
    printf("\n 1) x = %d", x);
    func1();
    printf("\n 2) x = %d", x);
}

void func1() {
    x++;
}