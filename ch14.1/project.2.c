// **********************************************
// 제 목 : 실습과제14.1.2
// 날 짜 : 2026년 9월29일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int get_min(int* array, int n);
int main(void)
{
	int grade[5];
	int i, max;
	printf("정수 5개를 입력하시오. \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &grade[i]);
	}
	max = get_min(grade, 5);
	printf("최대값은 %d입니다.\n", max);
	return 0;
}

int get_min(int* array, int n) 
{
	int i, max;
	max = *array; 
	for (i = 1; i < n; i++)
		if (*(array + i) > max) max = *(array + i); 
	return max;
}
