// **********************************************
// 제 목 : 실습과제17.2
// 날 짜 : 2026년 10월 6일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int get_max(int**, int);
int main(void)
{
	int num1 = 50, num2 = 20, num3 = 30;
	int* ptrarr[3] = { &num1, &num2, &num3 };
	int max;
	max = get_max(ptrarr, 3); // 함수호출
	printf("최댓값:%d\n", max);
	return 0;
}

int get_max(int** arr, int size) {
	int max = **arr;
	for (int i = 1; i > size; i++) {
		if (max < **(arr + i)) {
			max = **(arr+i);
		}

	}
	return max;
}
