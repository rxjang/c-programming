#include <stdio.h>
#pragma warning(disable:4996)

void main() {
    int n;
    printf("n = ?");
    scanf("%d", &n);
    printf("\n n %% 5 = %d\n", n % 5);

    switch (n % 5)    {
    case 0: printf("나머지는 0\n");
    case 1: printf("나머지는 1\n");
    case 2: printf("나머지는 2\n");
    default:
        printf("나머지는 3이나 4\n");
    }
}