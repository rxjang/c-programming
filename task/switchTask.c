#include <stdio.h>

int main(void) {

    int jumsu; // jumsu 라는 int형 변수를 선언한다.

    printf("0점에서 100점 사이의 점수를 입력하세요.\n"); // 점수를 입력하라는 안내 문구를 출력한다.
    scanf("%d", &jumsu); // scanf를 통해 콘솔에서 점수 값을 입력 받아 jumsu 변수에 할당한다.

    /*
    switch 문으로 점수를 학점으로 변환한다. 
    if-else문과 다르게 switch 문의 case 에는 조건식이 사용 불가능 하므로 jumsu를 10으로 나눈 몫으로 학점을 계산한다.
    */
    switch (jumsu / 10) {
    case (10):  // 점수가 100점 일 떼. 100점과 90점대의 점수는 학점이 A학점으로 같으므로 출력문과 break문을 쓰지 않았다.
    case (9):   // 점수가 90점대 일 때
        printf("%d점은 A학점입니다.\n", jumsu); // 해당 점수는 A 학점이라는 값을 출력한다.
        break; // break로 switch문을 탈출한다.
    case (8):
        printf("%d점은 B학점입니다.\n", jumsu); // 해당 점수는 B 학점이라는 값을 출력한다.
        break;  // break로 switch문을 탈출한다.
    case (7):
        printf("%d점은 C학점입니다.\n", jumsu); // 해당 점수는 C 학점이라는 값을 출력한다.
        break;  // break로 switch문을 탈출한다. 
    case (6):
        printf("%d점은 D학점입니다.\n", jumsu); // 해당 점수는 D 학점이라는 값을 출력한다.
        break;   // break로 switch문을 탈출한다. 
    default:
        printf("%d점은 F학점입니다.\n", jumsu); // 해당 점수는 E 학점이라는 값을 출력한다.
        break;  // break로 switch문을 탈출한다.
    }
    return 0;
}