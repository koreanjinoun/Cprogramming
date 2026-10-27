// **********************************************
// 제 목 : 실습과제21.4
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
	char str[20];
	printf("문자열입력:");
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	str[len - 1] = '\0';
	printf("%s", str);
	return 0;
}
