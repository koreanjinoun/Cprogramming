// **********************************************
// 제 목 : 실습과제22.5
// 날 짜 : 2026년 11월 5일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>

struct people{
	char name[10];
	char number[20];
	char money[10];
};

int main() {
	struct people list[3];
	int pointer;

	for (int i = 0; i < 3; i++) {
		printf("%d번째 이름 : ", i + 1);
		scanf("%s", list[i].name);
		printf("%s의 주민등록번호 : ", list[i].name);
		scanf("%s", list[i].number);
		printf("%s의 급여 : ", list[i].name);
		scanf("%s", list[i].money);
		printf("\n");
	}

	printf("\n구조체 형태 : \n");
	printf("\tchar name[10]\n");
	printf("\tchar number[20]\n");
	printf("\tchar money[10]\n");

	printf("\n문제 : \n");
	printf("\t구조체 기반으로 길이가 3인 배열에 이름, 주민등록번호, 급여를 저장하였다.\n");
	printf("\t첫번째 배열(이름: %s)의 시작주소는 1001이다.\n", list[0].name);
	printf("\t이때 세번째(이름: %s)의 급여 시작주소는? : ", list[2].name);
	scanf("%d", &pointer);
	if (pointer == 1111) {
		printf("\n정답입니다.");
	}
	else {
		printf("\n오답입니다. (정답 : %d)\n", pointer + 110);
	}

	return 0;
}
