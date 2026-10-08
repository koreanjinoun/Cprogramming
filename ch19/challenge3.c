// **********************************************
// 제 목 : 도전과제19.3
// 날 짜 : 2026년 10월 8일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	srand((unsigned int)time(NULL));
	int i;
	printf("난수의 범위: 0부터 %d까지\n", 99);
	for (i = 0; i < 5; i++)
	{
		printf("난수 출력: %d \n", rand() % 100);
	}
	return 0;
}
