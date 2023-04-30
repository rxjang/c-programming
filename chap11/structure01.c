#include <stdio.h>
#include <string.h>

struct person {
    char name[10];
    int age;
    char sex;
};


void main() {
    struct person X = {"홍길동", 30, 'M'};
    struct person Y;
    strcpy(Y.name, "임꺽정");
    Y.age = 35;
    Y.sex = 'M';
    printf("X의 정보: %s, %d, %c\n", X.name, X.age, X.sex);
    printf("Y의 정보: %s, %d, %c\n", Y.name, Y.age, Y.sex);
}