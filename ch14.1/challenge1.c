// **********************************************
// 제 목 : 실습과제14.1.a
// 날 짜 : 2026년 9월29일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int odd(int* data);
int even(int* data);
int main(void)
{
	int data[10];
	for(int i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &data[i]);
	}
	odd(data);
	even(data);
	return 0;
}

int odd(int* data)
{
	printf("홀수: ");
	int count = 0;
	for(int i = 0; i < 10; i++)
	{
		if(data[i] % 2 != 0)
		{
			if (count > 0) {
				printf(", ");
			}
			printf("%d", data[i]);
			count++;
		}
	}
	printf("\n");
	return 0;
}

int even(int* data)
{
	printf("짝수: ");
	int count = 0;
	for(int i = 0; i < 10; i++)
	{
		if(data[i] % 2 == 0)
		{
			if (count > 0) {
				printf(", ");
			}
			printf("%d", data[i]);
			count++;
		}
	}
	printf("\n");
	return 0;
}
