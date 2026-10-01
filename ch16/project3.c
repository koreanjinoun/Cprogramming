// **********************************************
// 제 목 : 실습과제16.3
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int main() {
	int arr[3][3] = {{200,2,35},{-20,5,100},{-75,5,-25}}, max = 0, a = 0, b = 0;
	max = arr[0][0];
	int* p = &arr[0][0];
	for(int i = 1; i < 9; i++) {
		if (*(p + i) > max) {
			max = *(p + i);
			a = i / 3;
			b = i % 3;
		}
	}
	printf("최대값은: %d\n", max);
	printf("위치는 %d행 %d열\n", a + 1, b + 1);
	return 0;
}

