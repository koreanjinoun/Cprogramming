// **********************************************
// 제 목 : 실습과제16.2
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int main() {
	int arr[3][3], a[3] = { 0 }, max, b;
	for (int i = 0; i < 3; i++) {
		
		printf("%d번째 학생의 국어,영어,수학 성적을 입력: ", i + 1);
		scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);

		a[i] = (arr[i][0] + arr[i][1] + arr[i][2]) / 3;
	}

	max = a[0];
	for(int i = 1; i < 3; i++) {
		if (a[i] > max) {
			max = a[i];
			b = i + 1;
		}
		else {
			b = 1;
		}

	}

	printf("최우수 학생은 %d번째 학생이고 평균점수는 %d점이다", b, max);
	return 0;
}
