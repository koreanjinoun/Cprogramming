// **********************************************
// 제 목 : 실습과제24.4
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
    int ch;
  
    FILE* a = fopen("test.txt", "rt");
    if (a == NULL) {
        puts("복사할 파일을 열 수 없습니다");
        return -1;
    }

    FILE* b = fopen("result.txt", "wt");
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
        if (ch == '.') {
            fputc('\n', b);
        }
        
       
    }

    printf("%s파일을 %s파일로 복사했습니다.\n", "test.txt", "result.txt");
    fclose(a);
    fclose(b);

    return 0;
}
