#include <stdio.h>
#pragma warming(disable:4996)

void main() {
    char s[50];
    printf("문자열 입력?");
    gets(s);
    printf("get()로 문자열 입력 = %s\n", s);
    printf("\n문자열 입력?");
    scanf("%s", s);
    printf("scanf()로 문자열 입력 = %s\n", s);
}