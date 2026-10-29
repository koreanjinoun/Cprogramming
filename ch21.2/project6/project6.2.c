// **********************************************
// 제 목 : 실습과제21.6.2
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
void erazer(char*);
int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	erazer(str1);
	erazer(str2);

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("%s", str3);
	return 0;
}

void erazer(char* p) {
	int len = strlen(p);
	p[len - 1] = '\0';
}
