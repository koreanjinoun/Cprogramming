// **********************************************
// 제 목 : 실습과제23.3
// 날 짜 : 2026년 11월 12일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
typedef union {
	int num;
	char list[4];
}Sixteen;
int main() {
	Sixteen number;
	printf("정수를 입력하시오(16진수) : ");
	scanf("%x", &number.num);
	printf("최상위(4번째) 바이트(16진수) : %x\n", number.list[3]);
	printf("3번째 바이트(16진수) : %x\n", number.list[2]);
	printf("2번째 바이트(16진수) : %x\n", number.list[1]);
	printf("최하위(1번째) 바이트(16진수) : %x\n", number.list[0]);
}
