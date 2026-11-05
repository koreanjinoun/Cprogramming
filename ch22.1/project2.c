// **********************************************
// 제 목 : 실습과제22.2
// 날 짜 : 2026년 11월 5일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
struct member {
	char name[10];
	int number;
};

int main() {
	struct member list[3];

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("성적을 입력하시오: ");
		scanf("%d", &list[i].number);
	}

	int min = 0;
	for (int i = 1; i < 3; i++) {
		if (strcmp(list[min].name, list[i].name) > 0 ) {
			min = i;
		}
	}

	printf("\n");
	printf("이름은 %s, 점수는 %d점", list[min].name, list[min].number);

	return 0;
}
