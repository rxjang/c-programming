#include <stdio.h>
#include <string.h>

struct person {
    char name[8];
    int age;
    char sex;
};

void main() {
    struct person X = {"홍길동", 30, 'M'};
    printf("sizeof(person.name) : %dbyte \n", sizeof(X.name));
    printf("sizeof(person.age) : %dbyte \n", sizeof(X.age));
    printf("sizeof(person.sex) : %dbyte \n", sizeof(X.sex));
    printf("sizeof(person) : %dbyte \n", sizeof(X));
}