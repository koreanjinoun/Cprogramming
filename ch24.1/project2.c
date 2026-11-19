// **********************************************
// 제 목 : 실습과제24.2
// 날 짜 : 2026년 11월 19일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
	FILE* str = fopen("input.txt", "rt");
	FILE* str1 = fopen("output.txt", "wt");
	if (str == NULL || str1 == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}
	char name[10];
	int a, b, c;
	for (int i = 0; i < 3; i++) {
		fscanf(str, "%s %d %d %d", name, &a, &b, &c);
		fprintf(str1, "%s %d %.1f\n", name, (a + b + c), (a + b + c) / 3.0);
	}

	return 0;
}
