#include <stdio.h>
#pragma warning(disable:4996)

void main() {
    int jsu1, jsu2;
    float ssu1, ssu2;
    printf("\n정수를 입력하시오");
    scanf("%d %d", &jsu1, &jsu2);
    printf("\n실수를 입력하시오");
    scanf("%f %f", &ssu1, &ssu2);
    printf("\n정수는 %d %d", jsu1, jsu2);
    printf("\n실수는 %f %f", ssu1, ssu2);
}