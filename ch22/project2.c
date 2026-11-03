// **********************************************
// 제 목 : 실습과제22.2
// 날 짜 : 2026년 11월 3일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
struct person {
	int number;
	char name[10];
	char pointer[30];
};

int main() {
	struct person a;
	printf("학번을 입력하시오: ");
	scanf("%d", &a.number);
	printf("이름을 입력하시오: ");
	scanf("%s", a.name);
	getchar();
	printf("주소를 입력하시오: ");
	scanf("%s", &a.pointer);
	getchar();
	printf("1. 학번:%d\n", a.number);
	printf("2. 이름:%s\n", a.name);
	printf("3. 주소:%s\n", a.pointer);

	return 0;
}
