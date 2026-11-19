// **********************************************
// 제 목 : 실습과제24.3
// 날 짜 : 2026년 11월 19일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

typedef struct {
	char name[10];
	int sum;
	float a;
}List;

int main() {
	List list[3];
	FILE* str = fopen("input.txt", "rt");
	FILE* str1 = fopen("output.txt", "wt");
	
	if (str == NULL || str1 == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}
	
	int a, b, c;
	for (int i = 0; i < 3; i++) {
		fscanf(str, "%s %d %d %d", list[i].name, &a, &b, &c);
		list[i].sum = a + b + c;
		list[i].a = list[i].sum / 3.0;
	}
	
	List temp;
	for (int i = 0; i < 3 - 1; i++) {
		for (int j = 0; j < 3 - 1 - i; j++) {
			if (list[j].sum < list[j + 1].sum) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		fprintf(str1, "%d등: %s %d %.1f\n", i+1, list[i].name, list[i].sum, list[i].a);
	}

	return 0;
}
