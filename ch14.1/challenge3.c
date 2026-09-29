// **********************************************
// 제 목 : 실습과제14.1.c
// 날 짜 : 2026년 9월29일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int main() {
	int data[10], dataa[10];
	int left = 0, right = 9;
	for(int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (data[i] % 2 != 0) {
			dataa[left] = data[i];
			left++;
		}
		else {
			dataa[right] = data[i];
			right--;
		}
	}

	printf("배열 요소의 출력: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", dataa[i]);
	}
	return 0;
}
