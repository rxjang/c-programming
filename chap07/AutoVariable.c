#include <stdio.h>

void main() {
    int i = 1;
    auto int j = 2;
    {
        // 블록 1
        int i = 3;
        {
            // 블록 2
            int i = 4;
            printf("블록 2의 i = %d\n", i);
            printf("블록 2의 j = %d\n", j);
        }
        printf("블록 1의 i = %d\n", i);
    }
    printf("void main() 함수 내의 i = %d\n", i);
}