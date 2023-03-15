#include <stdio.h>
#pragma warning(disable:4996)

void main() {
    int a;
    scanf("%d", &a);
    if (a >= 0) 
        if (a == 0)
            printf("입력된 값은 0");
        else
            printf("입력된 값은 양수");
    else
        printf("입력된 값은 음수");
}