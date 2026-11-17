// **********************************************
// 제 목 : 실습과제24.2
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
	int ch;
	FILE* test = fopen("test.txt", "rt");
	if (test == NULL) {
		puts("파일을 열 수 없습니다");
		return -1;
	}
	while (1) {
		ch = fgetc(test);
		if (ch == EOF) {
			break;
		}
		putchar(ch);

		if (ch == '.') {
			putchar('\n');
		}
	}
	fclose(test);
	return 0;
}
