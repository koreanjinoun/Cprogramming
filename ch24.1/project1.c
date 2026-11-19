// **********************************************
// 제 목 : 실습과제24.1
// 날 짜 : 2026년 11월 19일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
	FILE* str = fopen("result.txt", "wt");
	char name[10];
	int number1;
	float number2;

	if (str == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		printf("이름, 학번, 학점입력: ");
		scanf("%s %d %f", name, &number1, &number2);
		fprintf(str, "%s %d %g\n", name, number1, number2);
	}

	return 0;
}
