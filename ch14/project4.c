// **********************************************
// 제 목 : 실습과제14.4
// 날 짜 : 2026년 9월22일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
void swap(int* px, int* py);
int main(void) {
	int x, y, z;
	printf("정수x를 입력 하시오: ");
	scanf("%d", &x);
	printf("정수y를 입력 하시오: ");
	scanf("%d", &y);
	printf("정수z를 입력 하시오: ");
	scanf("%d", &z);

	printf("swap함수 호출 전: x = %d y = %d z = %d\n", x, y, z);
	swap(&x, &y);  
	swap(&y, &z);
	printf("swap함수 호출 후: x = %d y = %d z = %d\n", x, y, z);
	return 0;
}
void swap(int* px, int* py) {
	int tmp;
	tmp = *px; 
	* px = *py; 
	* py = tmp; 
}
