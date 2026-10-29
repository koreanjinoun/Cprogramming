// **********************************************
// 제 목 : 실습과제21.3
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
void my_strcpy(char*, char*);
int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	my_strcpy(str2, str1);
	puts(str2);
	return 0;
}

void my_strcpy(char* p1, char* p2) {
	int i = 0;
	while (1) {
		if (p2[i] == '\0') {
			break;
		}
		p1[i] = p2[i];
		i++;
	}
	p1[i] = '\0';
}
