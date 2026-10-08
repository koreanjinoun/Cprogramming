// **********************************************
// 제 목 : 실습과제19.3
// 날 짜 : 2026년 10월 8일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int Add(int n1, int n2);
int Sub(int n1, int n2);
int Mul(int n1, int n2);
int Div(int n1, int n2);

void Compute(int (*fptr)(int, int));

int main(void) {
    int choice;
    int (*operation)(int, int) = NULL; 

    printf("연산을 선택하시오(1:덧셈,2:뺄셈,3:곱셈,4:나눗셈) : ");
    scanf("%d", &choice);
  
    switch (choice) {
    case 1: operation = Add; break;
    case 2: operation = Sub; break;
    case 3: operation = Mul; break;
    case 4: operation = Div; break;
    default:
        printf("잘못된 선택입니다.\n");
        return -1;
    }

    Compute(operation);

    return 0;
}

void Compute(int (*fptr)(int, int)) {
    int num1, num2;
    printf("두개의 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);

    printf("결과값: %d\n", fptr(num1, num2));
}

int Add(int n1, int n2) {
    return n1 + n2;
}

int Sub(int n1, int n2) {
    return n1 - n2;
}

int Mul(int n1, int n2) {
    return n1 * n2;
}

int Div(int n1, int n2) {
    if (n2 == 0) {
        printf("0으로 나눌 수 없습니다.\n");
        return 0;
    }
    return n1 / n2;
}
