// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 9월8일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
    int a = 100, b = 200;
    int sum;

	  int* ptrA = &a; // a의 주소를 ptrA에 저장
	  int* ptrB = &b; // b의 주소를 ptrB에 저장
    int* psum = &sum;

    *psum = *ptrA + *ptrB; //포인터를 이용하여 수정
    printf("두정수의 합 : %d\n", *psum); //포인터를 이용하여 수정
    return 0;
}
