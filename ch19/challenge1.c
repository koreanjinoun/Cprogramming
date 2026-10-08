// **********************************************
// 제 목 : 도전과제19.1
// 날 짜 : 2026년 10월 8일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void) {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int temp[4][4]; 
    printf("--- 원본 배열 ---\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    while (1) {
        getchar(); 

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                temp[j][3 - i] = arr[i][j];

            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                arr[i][j] = temp[i][j];
            }
        }

        printf("--- 오른쪽 90도 회전 완료 ---\n");

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%3d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
