#include <stdio.h>

void main() {

    struct person {
        char name[10];
        int age;
        char sex;
    };
    struct person X[3] = {{"홍길동", 20, 'M'}, 
    {"황진이", 22, 'F'}, 
    {"임꺽정", 30, 'M'}};

    int i, sum = 0;
    for (i = 0; i < 3; i++) {
        printf("이름: %s 나이: %d 성별: %c\n", X[i].name, X[i].age, X[i].sex);
        sum = sum + X[i].age;
    }

    printf("나이합 : %d", sum);
}