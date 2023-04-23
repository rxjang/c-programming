# include <stdio.h>

int main() {
    int days = 365;
    int month = 12;
    int Table[5] = {1, 2, 3, 4, 5};

    printf("days의 주소는 %p\n", &days);
    printf("month의 주소는 %p\n", &month);
    printf("배열명 Table의 주소는 %p\n", Table);
    printf("배열명 Table 첫번째 요소의 주소는 %p\n", &Table[0]);
    printf("배열명 Table 두번째 요소의 주소는 %p\n", &Table[1]);
    return 0;
}