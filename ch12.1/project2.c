// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void) {
	int a = -100;
	char b = 'A';
	double c = 3.14;
	int* p1 = &a;
	char* p2 = &b;
	double* p3 = &c;
	printf("int형 변수 a의 값은 : %d\n", *p1);
	printf("char형 변수 b의 값은 : %c\n", *p2);
	printf("double형 변수 c의 값은 : %lf\n", *p3);
	return 0;
}
