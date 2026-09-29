// **********************************************
// 제 목 : 실습과제14.1.4
// 날 짜 : 2026년 9월29일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
void returnmath(double, int*, double*);
int main(void) {
	int a;
	double b;
	double x;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &x);
	returnmath(x, &a, &b);
	printf("정수부 : %d\n", a);
	printf("소수부 : %lg\n", b);
}

void returnmath(double x, int* p, double* q) {
	int a;
	double b;
	a = (int)x; 
	b = x - a;  
	*p = a;    
	*q = b;     
}
