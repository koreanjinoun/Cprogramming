// **********************************************
// 제 목 : 실습과제13.4
// 날 짜 : 2026년 9월17일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
    char str[100], str1[100];
    printf("문자열을 입력하시오:");
    scanf("%s", str);
    printf("문자열을 입력하시오:");
    scanf("%s", str1);
    
    if (str[0] < str1[0]) {
            printf("%s", str);
    }
    else if (str[0] > str1[0]){
            printf("%s", str1);
    }
    else {
            if (str[1] < str1[1]) {
                printf("%s", str);
            }
            else {
                printf("%s", str1);
            }
    }

}
