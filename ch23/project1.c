// **********************************************
// 제 목 : 실습과제23.1
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>

typedef struct {
	int number;
	char name[10];
	char pointer[20];
} POINT;

POINT get_data();
void put_data(POINT);
int main() {
	POINT a = get_data();
	put_data(a);
}
POINT get_data() {
	POINT p;
	printf("학번을 입력하시오: ");
	scanf("%d", &p.number);
	printf("이름을 입력하시오: ");
	scanf("%s", p.name);
	printf("학번을 입력하시오: ");
	scanf("%s", p.pointer);
	return p;
}
void put_data(POINT a) {
	printf("1. 학번:%d\n", a.number);
	printf("2. 이름:%s\n", a.name);
	printf("3. 주소:%s\n", a.pointer);
}
