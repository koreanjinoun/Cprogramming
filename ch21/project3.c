// **********************************************
// 제 목 : 실습과제21.3
// 날 짜 : 2026년 10월 13일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int main(void)
{
	int x;
	char name[10];
	char blood_type;
	printf("이름을 입력하시오 : ");
	scanf(" %s", name);
	printf("혈액형을 입력하시오 : ");
	scanf(" %c", &blood_type);
	printf("이름: %s\n", name);
	printf("혈액형: %c\n", blood_type);
	return 0;
}
