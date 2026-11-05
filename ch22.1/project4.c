// **********************************************
// 제 목 : 실습과제22.4
// 날 짜 : 2026년 11월 5일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
#include <math.h>
struct pointer {
	int x;
	int y;
};
struct triangle {
	struct pointer list[3];
};

int main() {
	struct triangle t;
	for (int i = 0; i < 3; i++) {
		printf("%d번째 점(x,y) 입력: ", i + 1);
		scanf("%d %d", &t.list[i].x, &t.list[i].y);
	}
	int line[3];
	line[0] = pow(t.list[1].x - t.list[0].x, 2) + pow(t.list[1].y - t.list[0].y, 2);
	line[1] = pow(t.list[2].x - t.list[1].x, 2) + pow(t.list[2].y - t.list[1].y, 2);
	line[2] = pow(t.list[0].x - t.list[2].x, 2) + pow(t.list[0].y - t.list[2].y, 2);

	int max = 0;

	for (int i = 1; i < 3; i++) {
		if (line[max] < line[i]) {
			max = i;
		}
	}

	switch (max) {
	case 0:
		if (line[0] == line[1] + line[2]) {
			printf("삼각형은 정사각형임");
		}
		else {
			printf("삼각형은 정사각형이 아님");
		}
		break;
	case 1:
		if (line[1] == line[0] + line[2]) {
			printf("삼각형은 정사각형임");
		}
		else {
			printf("삼각형은 정사각형이 아님");
		}
		break;
	case 2:
		if (line[2] == line[1] + line[0]) {
			printf("삼각형은 정사각형임");
		}
		else {
			printf("삼각형은 정사각형이 아님");
		}
		break;
	}
	
}
