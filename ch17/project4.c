// **********************************************
// 제 목 : 실습과제17.4
// 날 짜 : 2026년 10월 6일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
void MaxAndMin(int* arr, int size, int** maxPtr, int** minPtr);
int main() {
	int* maxPtr;
	int* minPtr;
	int arr[5];

	for (int i = 0; i < 5; i++) {
		printf("정수 입력 : ");
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, 5, &maxPtr, &minPtr);
	printf("최대값: %d\n", *maxPtr);
	printf("최소값: %d\n", *minPtr);
	return 0;
}

void MaxAndMin(int* arr, int size, int** maxPtr, int** minPtr) {
	int* max, * min;
	max = min = &arr[0];
	for(int i = 1; i < size; i++) {
		if(arr[i] > *max) {
			max = &arr[i];
		}
		if(arr[i] < *min) {
			min = &arr[i];
		}
	}
	*maxPtr = max;
	*minPtr = min;
}
