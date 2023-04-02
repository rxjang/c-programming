#include <stdio.h>

int i = 10;
int j = 20;

void main() {
    extern int i;

    extern int k;

    int j = 100;
    printf("i = %d, j = %d, k = %d", i, j, k);
}
int k = 50;