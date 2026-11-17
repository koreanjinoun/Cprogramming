// **********************************************
// 제 목 : 실습과제24.1
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
    char list1[100]; 
    char list2[100]; 
    int ch;
    printf("복사할 파일명 : ");
    scanf("%s", list1);
    printf("복사받을 파일명 : ");
    scanf("%s", list2);

    FILE* a = fopen(list1, "rt");
    if (a == NULL) {
        puts("복사할 파일을 열 수 없습니다");
        return -1;
    }

    FILE* b = fopen(list2, "wt");
    if (b == NULL) {
        puts("복사받을 파일을 생성할 수 없습니다");
        fclose(a); 
        return -1;
    }

    while (1)
    {
        ch = fgetc(a);
        if (ch == EOF) break;
        fputc(ch, b);
    }

    printf("%s파일을 %s파일로 복사했습니다.\n", list1, list2);
    fclose(a);
    fclose(b);

    return 0;
}
