#include <stdio.h>

void main() {
    int *p, a[] = {10, 20, 30, 40, 50};
    p = &a[0];
    printf("*p == %d\n", *p);
    printf("*p++ == %d\n", *p++); // 포인터p의 값을 출력 후 주소를 1(4byte) 증가
    printf("*++p == %d\n", *++p);
    p = p + 2;
    printf("*p == %d\n", *p);
    printf("*a[2] == %d\n", a[2]);
    printf("*p + 2 == %d\n", *p + 2); // 포인터 p의 값에 2를 더함
}