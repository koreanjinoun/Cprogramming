// **********************************************
// 제 목 : 실습과제23.5
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point*, Point*);

int main(void)
{
	Point pos1 = {2, 4};
	Point pos2 = {5, 7};
	printf("pos1: [%d, %d] , pos2 : [%d, %d] \n", pos1.xpos, pos1.ypos,pos2.xpos, pos2.ypos);
	SwapPoint(&pos1, &pos2);
	printf("pos1: [%d, %d] , pos2 : [%d, %d] \n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	return 0;
}

void SwapPoint(Point* a, Point* b) {
	Point temp = *a;
	*a = *b;
	*b = temp;
}
