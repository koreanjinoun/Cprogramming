// **********************************************
// 제 목 : 실습과제23.3
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>

typedef struct {
	char name[10];
	int number;

} POINT;
void get_data(POINT*);
POINT get_best(POINT*);

int main() {
	POINT a[3];
	get_data(a);
	POINT b = get_best(a);

	printf("제일 앞에 나오는 이름은 %s, 점수는 %d점", b.name, b.number);
}
void get_data(POINT* t) {
	POINT* list = t;
	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", (list + i)->name);
		printf("성적을 입력하시오: ");
		scanf("%d", &(list + i)->number);
	}
}

POINT get_best(POINT* p) {
	POINT t = *p;
	for (int i = 0; i < 3; i++) {
		if (strcmp(t.name, (p+i)->name) > 0) {
			t = *(p + i);
		}
	}
	return t;
}
