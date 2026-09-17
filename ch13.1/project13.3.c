// **********************************************
// 제 목 : 실습과제13.3
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

    for (int i = 0; str[i] != '\0'; i++)
    {
        if('A' <= str[i] && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        }
        else if ('a' <= str[i] && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        }
        else {
            printf("%c", str[i]);
        }
    }
}
