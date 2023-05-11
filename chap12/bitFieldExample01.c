#include <stdio.h>

void main() {

    struct test {
        unsigned a:5;
        unsigned b:6;
        unsigned c:6;
        unsigned d:4;
    };
    struct test v = {1, 2, 3, 4};

    printf("v.a = %d, v.b = %d, v.c = %d, v.d = %d\n", v.a, v.b, v.c, v.d);

    printf("v는 %d byte를 사용한다.\n", sizeof(v));
};