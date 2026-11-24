// **********************************************
// 제 목 : 실습과제24.3
// 날 짜 : 2026년 11월 24일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>


int main() {
    FILE* fp1 = fopen("a.txt", "rb");
    FILE* fp2 = fopen("b.bin", "rb");
    if (fp1 == NULL || fp2 == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }
    int size1 = 0, size2 = 0;

    while (fgetc(fp1) != EOF) size1++;
    while (fgetc(fp2) != EOF) size2++;

    printf("a.txt의 파일크기: %d바이트\n", size1);
    printf("b.bin의 파일크기 : %d바이트\n", size2);

    fclose(fp1);
    fclose(fp2);
    return 0;
}
