// **********************************************
// 제 목 : 실습과제21.5
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
int main() {
	char str[5][100];
	for (int i = 0; i < 5; i++) {
		printf("문자열 입력 : ");
		scanf("%s", str[i]);
	}
	int max = 0, min = 0;

	for (int i = 1; i < 5; i++) {
		if (strcmp(str[i], str[max]) > 0) {
			max = i;
		}
		else if (strcmp(str[i], str[min]) < 0) {
			min = i;
		}
	}
	printf("제일앞 : %s\n", str[min]);
	printf("제일뒤 : %s\n", str[max]);

	return 0;
}
