#include <stdio.h>

int main(void) {

    int num = 0;    // num이라는 int형 변수를 선언하고 0으로 초기화 한다.
    int odd_total_num = 0;    // odd_total_num이라는 int형 변수를 선언하고 0으로 초기화 한다.
    int even_total_num = 0;    // odd_total_num이라는 int형 변수를 선언하고 0으로 초기화 한다.
    printf("1 ~ 100 사이 숫자를 입력하세요 : \n");  // 숫자를 입력하라는 안내 문구를 출력한다.
    scanf("%d", &num);  // scanf를 통해 숫자를 입력받고 해당 숫자를 num 변수에 할당 한다.

    if (num <= 100) {   // num이 100 이하 일때 괄호 안의 코드를 살행한다.
        while (num > 0) {   // while 문으로 num이 0보다 클때까지 괄호 안의 코드를 계속 실행한다.
            if (num % 2 == 1) { // num을 2로 나눈 나머지가 1 일 때(홀수 일 때) 괄호 안의 코드를 실행한다.
                odd_total_num = odd_total_num + num;    // odd_total_num변수에 num 값을 더 한다.
            } else if (num %2 == 0) { // num을 2로 나눈 나머지가 0 일 때(짝수 일 때) 괄호 안의 코드를 실행한다.
                even_total_num = even_total_num + num;    // even_total_num변수에 num 값을 더 한다.
            }
            num--;  // num에서 1을 빼 다음 수의 계산을 실행할 수 있도록 한다.
        }
        printf("홀수 값의 총 합계 : %d \n", odd_total_num); // 홀수 값의 총 합을 출력 한다.
        printf("짝수 값의 총 합계 : %d \n", even_total_num);    // 짝수 값의 총 합을 출력 한다.
    } else {    // num이 100 초과 일때 괄호 안의 코드를 실행한다.
        printf("입력값이 100이 넘습니다.n");    // 입력값의 범위를 초과 했다는 안내 문구를 출력한다. 
    }
    return 0;
}