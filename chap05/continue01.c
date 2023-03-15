#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

void main() {
    int num = 1;
    
    while (num != 0) {
        printf("\n num = ?");
        scanf("%d", &num);
        if (num < 0) {
            printf("0 : Negatice number !\n");
            continue;
        }
        printf("Square root of %d = %f\n", num, sqrt(num));
    }
    printf("\n \n The end");
}