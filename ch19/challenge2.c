// **********************************************
// 제 목 : 도전과제19.2
// 날 짜 : 2026년 10월 8일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
    int n;
    int arr[MAX_SIZE][MAX_SIZE] = { 0 };

    printf("숫자를 입력하시오 : ");
    scanf("%d", &n);
    int count = 1;
    int max_count = n * n;
    int row = 0, col = -1; 
    int steps = n;        
    int direction = 1;     
    while (count <= max_count) {
        for (int i = 0; i < steps; i++) {
            col += direction; 
            arr[row][col] = count++;
        }
        steps--;
        for (int i = 0; i < steps; i++) {
            row += direction;
            arr[row][col] = count++;
        }
        direction *= -1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
