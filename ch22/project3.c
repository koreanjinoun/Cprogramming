// **********************************************
// 제 목 : 실습과제22.3
// 날 짜 : 2026년 11월 3일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
struct car {
	char model[20];
	char number[20];
	int km;
};

int main() {
	struct car car1;
	printf("모델을 입력하시오: ");
	scanf("%s", car1.model);
	printf("번호판을 입력하시오: ");
	scanf("%s", car1.number);
	printf("주행거리를 입력하시오: ");
	scanf("%d", &car1.km);
	
	printf("1.모델: %s\n", car1.model);
	printf("2.번호판: %s\n", car1.number);
	printf("3.주행거리: %dkm\n", car1.km);

	return 0;
}
