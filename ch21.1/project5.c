// **********************************************
// 제 목 : 실습과제21.5
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
	char str[100];
	fputs("문자열입력: ", stdout);
	fgets(str, sizeof(str), stdin);
	int n = 1;
	for (int i = 0; i < strlen(str);i++) {
		if (str[i] == ' ') {
			n++;
		}
	}
	fputs("단어수 : ", stdout);
	putchar(n + '0');
	return 0;
}
