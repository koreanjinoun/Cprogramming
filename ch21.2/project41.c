// **********************************************
// 제 목 : 실습과제21.4
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
void my_strcat(char*, char*);
int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	my_strcat(str1, str2);
	puts(str1);
	return 0;
}

void my_strcat(char* p1, char* p2) {
	int i = 0, a = strlen(p1);
	while (1) {
		if (p2[i] == '\0') {
			break;
		}
		p1[a] = p2[i];
		i++;
		a++;
	}
	p1[a] = '\0';
	
}
