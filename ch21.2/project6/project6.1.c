// **********************************************
// 제 목 : 실습과제21.6.1
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[100];
	scanf("%s", src);
	int i = 0, sum = 0;
	while (1) {
		if (src[i] == '\0') {
			break;
		} 
		if (src[i] >= '0' && src[i] <= '9') {
			char a[2] = { src[i], '\0' };
			sum += atoi(a);
		}
		i++;
	}
	printf("%d\n", sum);
}
