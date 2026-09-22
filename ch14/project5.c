// **********************************************
// 제 목 : 실습과제14.5
// 날 짜 : 2026년 9월22일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int SquareByValue(int n);
int SquareByReference(int* pn);
int main(void) {
	int num = 10, a;
	a = SquareByValue(num);
	printf("SquareByValue 함수 결과: %d\n", a);
	SquareByReference(&num);
	printf("SquareByReference 함수 결과: %d\n", num);
	return 0;
}
int SquareByValue(int n) {
	n = n * 100;
	return n;
}
int SquareByReference(int* pn) {
	*pn = (*pn) * 100;
	return *pn;
}
