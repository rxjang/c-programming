#include <stdio.h>

void main() {
    int a = 10, b = 20;
    if (a > b) {
        a += 20;
        printf("a = %d\n", a);
    }
    
    b += 20;
    printf("b = %d\n", b);
}