// **********************************************
// 제 목 : 실습과제21.2
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
	int ch;
	while (1) {
		fputs("문자입력 : ", stdout);
		ch = getchar();
		getchar();
		if (ch == 'q' || ch == 'Q') break;
		fputs("입력된 문자는 ", stdout);
		putchar(ch);
		putchar('\n');
		return 0;
	}
}
