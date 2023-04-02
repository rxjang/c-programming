#include <stdio.h>

void main() {
    // 블록 A
    int x = 2, y = 4;
    printf("A: x = %d, y = %d\n", x, y);
    { // 블록 B
        int x;
        x = 5; y++;
        printf("B: x = %d, y = %d\n", x, y);
    }
    printf("A: x = %d, y = %d\n", x, y);
}