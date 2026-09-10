// **********************************************
// 제 목 : 실습과제5.2
// 날 짜 : 2026년 9월10일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int* start = &arr[0];
    int* end = &arr[5];
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("뒤집힌 배열 요소의 값: ");
  
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
