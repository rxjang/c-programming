#include <stdio.h>

void main() {
    union test {
        short int i;
        float f;
        double d;
    };
    union test u;
    u.i = u.f = u.d = 0;
    printf("%d byte\n", sizeof(u));
    u.i = 100;
    printf("%d %f %f\n", u.i, u.f, u.d);
    u.f = 0.5;
    printf("%d %f %f\n", u.i, u.f, u.d);
    u.d = 0.016667;
    printf("%f\n", u.d);
}