// **********************************************
// 제 목 : 실습과제14.1.3
// 날 짜 : 2026년 9월29일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
//get_data선언
int main(void)
{
	int i, data[5];
	get_data(data);
	for (i = 0; i < 5; i++)
		printf("data[%d] = %d\n", i, data[i]);
	return 0;
}

int get_data(int *data)
{
	int i;
	for (i = 0; i < 5; i++)
		scanf("%d", data + i);
	return 0;
}
