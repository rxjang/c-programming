#include <stdio.h>

void main() {
    int i = 0;
    int sum = 0;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("1부터 100까지의 합 = %d", sum);
}