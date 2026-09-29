// **********************************************
// 제 목 : 실습과제14.1.b
// 날 짜 : 2026년 9월29일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int bin(int n);

int main() {
    int n;
    printf("10진수 정수 입력: ");
    scanf("%d", &n);
    bin(n);
    return 0;
}

int bin(int n) {
	if (n > 1) {
		bin(n / 2);
	}
	printf("%d", n % 2);
	return 0;
}
