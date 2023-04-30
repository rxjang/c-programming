#include <stdio.h>

void main() {
    char A[] = "ARRAY";
    char *p = "POINTER";

    int i;
    for(i = 0; i < 5; i++) {
        printf("*(A + %d) : %c\n", i, *(A + i));
    }
    for (i = 0; i < 7; i++) {
        printf("p[%d] : %c\n", i, p[i]);
    }
}