// **********************************************
// 제 목 : 실습과제14.3
// 날 짜 : 2026년 9월22일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int add2(int value);
int main(void)
{
	int number;
	printf("정수를 입력하세요: ");
	scanf("%d", &number);	
	number = add2(number);
	printf("2만큼 증가한 값: %d\n", number);
		return 0;
}
int add2(int value)
{
	value += 2;
	return value;
}
