// **********************************************
// 제 목 : 실습과제16.5
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
    char str[4][10];
    int max_idx = 0;

    for (int i = 0; i < 4; i++) {
        printf("%d번째 문자열 입력: ", i + 1);
        scanf("%s", &str[i][0]);
    }

    for (int i = 1; i < 4; i++) {
        int k = 0;

        while (str[i][k] == str[max_idx][k]) {
            if (str[i][k] == '\0') break;
            k++;
        }

        if (str[i][k] > str[max_idx][k]) {
            max_idx = i; 
        }
    }

    printf("사전에서 제일 뒤에 나오는 문자열: %s\n", str[max_idx]);

    return 0;
}
