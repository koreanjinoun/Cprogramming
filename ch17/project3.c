// **********************************************
// 제 목 : 실습과제17.3
// 날 짜 : 2026년 10월 6일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int prn_str(char**, int);
int main(void)
{
	char* ptrarr[] = {"eagle", "tiger", "lion","squirrel"};
	int count;
	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);
	return 0;
}

int prn_str(char** ptr, int count)
{
	int i;
	for (i = 0; i < count; i++)
		printf("%s\n", ptr[i]);
	return 0;
}
