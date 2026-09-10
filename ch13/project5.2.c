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
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* ptr = &arr[4];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += *ptr;
        ptr--;
    }

    printf("배열 요소의 총합: %d\n", sum);
    return 0;
}
