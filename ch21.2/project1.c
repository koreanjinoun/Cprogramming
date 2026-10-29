// **********************************************
// 제 목 : 실습과제21.1
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
int main() {
	char src[100] = {0};
	char dest[100] = {0};
	while (1) {
		printf("문자열 입력 : ");
		scanf("%s", src);
		if (!strcmp(src, "quit")) {
			break;
		}
		strcat(dest, src);
		strcat(dest, " ");
		printf("입력된 문자열: %s\n", dest);
	}
	return 0;
}
