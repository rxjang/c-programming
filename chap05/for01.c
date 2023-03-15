#include <stdio.h>

void main() {
    int i, sum = 0;
    for (i = 0; i <= 10; ++i) {
        sum = sum + i;
    }
    printf("1 부터 %d까지의 합 = %d", i - 1, sum);
}