#include <stdio.h>

void func1();
void main() {
    int i = 10;
    printf("\n main i = %d", i);
    func1();
    printf("\n main i = %d", i);
}

void func1() {
    int i;
    i = 20;
    printf("\n fun1 i = %d", i);
}