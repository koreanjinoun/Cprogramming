// **********************************************
// 제 목 : 실습과제16.1
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int main() {
	int arr1[2][2] = {2,4,5,-5}, arr2[2][2] = {-2,3,0,-5}, sum[2][2];
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("연산결과:\n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("%-8d", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
