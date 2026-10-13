// **********************************************
// 제 목 : 실습과제21.2
// 날 짜 : 2026년 10월 13일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
	int x;
	char ch;
	while (1) {
		printf("문자입력 : ");
		scanf(" %c", &ch);
		if(ch == 'q' || ch == 'Q') {
			break;
		}
		printf("%c\n", ch);
	}
	return 0;
}
