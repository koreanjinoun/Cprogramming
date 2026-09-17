// **********************************************
// 제 목 : 실습과제13.1
// 날 짜 : 2026년 9월17일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
	char str[100];
    printf("문자열을 입력하시오:");
    scanf("%s", str);
    
	int n = sizeof(str) / sizeof(str[0]);
    for(int i = 0; i < n; i++)
    {
		if (str[i] != '\0') {
			printf("%d번째문자%c\n", i + 1, str[i]);
        }
        else {
            break;
        }
        
    }
}
