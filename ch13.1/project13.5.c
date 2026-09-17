// **********************************************
// 제 목 : 실습과제13.5
// 날 짜 : 2026년 9월17일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
	char* fruits[] = { "apple", "blueberry", "orange", "melon" };
	char* p1, *p2;
	if (*fruits[0] < *fruits[1]) {
		p1 = fruits[0];
	}
	else {
		p1 = fruits[1];
	}
	if (*fruits[2] < *fruits[3]) {
		p2 = fruits[2];
	}
	else {
		p2 = fruits[3];
	}
	if (*p1 < *p2) {
		printf("%s", p1);
	}
	else {
		printf("%s", p2);
	}
	return 0;
}
