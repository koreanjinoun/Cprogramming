// **********************************************
// 제 목 : 실습과제16.4
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int main(void)
{
	char str[4][10];
	int i, j, a[4] = { 0 };
	for (i = 0; i < 4; i++) {
		printf("%d번째 문자열 입력: ", i+1);
		scanf("%s", &str[i][0]);
	}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 10; j++) {
			if (str[i][j] == '\0') {
				a[i] = j;
				break;
			}
		}
	for (i = 0; i < 4; i++) {
		printf("%d번째 문자열의 길이: %d\n", i, a[i]);
	}
	return 0;
}
