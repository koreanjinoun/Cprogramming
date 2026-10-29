// **********************************************
// 제 목 : 실습과제21.4
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
int my_strlen(char str[]);
void RemoveBSN(char str[]);
int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	return 0;
}

int my_strlen(char str[]) {
	int i = 0;
	while (1) {
		if (str[i] == '\0') {
			break;
		} 
		i++;
	}

	return i;
}

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = '\0';
}
