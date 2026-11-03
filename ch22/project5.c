// **********************************************
// 제 목 : 실습과제22.5
// 날 짜 : 2026년 11월 3일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
#include<stdio.h>
struct point {
	int x;
	int y;
};
int main(void)
{
	struct point p1 = { 10,10 }, p2 = { 20,20 };
	printf("교환전 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환전 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	int tmpx = p1.x, tmpy = p1.y;
	p1.x = p2.x;
	p1.y = p2.y;
	p2.x = tmpx;
	p2.y = tmpy;
	printf("교환후 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환후 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	return 0;
}
