// **********************************************
// 제 목 : 실습과제22.4
// 날 짜 : 2026년 11월 3일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
struct block {
	int ax, ay, bx, by;
};

int main() {
	struct block box;
	printf("좌측상단의 좌표 입력: ");
	scanf("%d %d", &box.ax, &box.ay);
	printf("우측하단의 좌표 입력: ");
	scanf("%d %d", &box.bx, &box.by);

	printf("사각형의 폭: %d\n", box.bx - box.ax);
	printf("사각형의 높이: %d\n", box.ay - box.by);

	return 0;
}
