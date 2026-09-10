// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 9월10일
// 작성자 : 2600057 김진언
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
    
    int arr[5];
    int* ptr = arr;
    printf("5개의 정수를 입력하세요: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr); 
        ptr++;             
    }

    ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        *ptr += 2;         
        ptr++;             
    }

    ptr = arr;

    printf("2씩 증가된 배열 요소의 값: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr); 
        ptr++;               
    }
    printf("\n");

    return 0;
}
