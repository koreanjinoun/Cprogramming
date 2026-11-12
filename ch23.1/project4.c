// **********************************************
// 제 목 : 실습과제23.4
// 날 짜 : 2026년 11월 12일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
typedef enum {UP, DOWN, LEFT, RIGHT} Key;
int main(void)
{
	Key key;
	switch (key)
	{
	case UP: printf("현재방향: 위"); break;
	case DOWN: printf("현재방향: 아래"); break;
	case LEFT: printf("현재방향: 왼쪽"); break;
	case RIGHT: printf("현재방향: 오른쪽"); break;
	}
	return 0;
}
