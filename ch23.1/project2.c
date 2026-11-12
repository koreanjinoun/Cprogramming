// **********************************************
// 제 목 : 실습과제23.2
// 날 짜 : 2026년 11월 12일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
#include <string.h>
typedef struct {
	char name[10];
	int num;
	int korea;
	int english;
	int math;
	float a;
} Person;

int main() {
	Person list[3];
	for (int i = 0; i < 3; i++) {
		printf("이름: ");
		scanf("%s", list[i].name);
		printf("학번: ");
		scanf("%d", &list[i].num);
		printf("국어: ");
		scanf("%d", &list[i].korea);
		printf("영어: ");
		scanf("%d", &list[i].english);
		printf("수학: ");
		scanf("%d", &list[i].math);
		list[i].a = (list[i].korea + list[i].english + list[i].math) / 3;
	}
	int max = 0;
	for (int i = 1; i < 3; i++) {
		if(list[max].a < list[i].a){
			max = i;
		}
	}
	printf("<최우수 학생정보>\n");
	printf("%s %d %d %d %d %g", list[max].name, list[max].num, list[max].korea, list[max].english, list[max].math, list[max].a);
}
