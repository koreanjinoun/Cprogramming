// **********************************************
// 제 목 : 실습과제21.5
// 날 짜 : 2026년 10월 13일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <stdio.h>

int main(void)
{
    char str[20];
    int i = 0;
    printf("문자열을 입력하시오 : ");
    while (1) {
        scanf("%c", &str[i]);
        if (str[i] == '\n') {
            break; 
        }
        i++;
    }
    str[i] = '\0';
    printf("문자열: %s\n", str);
    return 0;
}
