// **********************************************
// 제 목 : 실습과제24.3
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
	char str[100];
	int i = 0;

	printf("문자열을 입력하세요: ");
	fgets(str, sizeof(str), stdin);

	FILE* result = fopen("result.txt", "wt");
	if(result == NULL){
		puts("파일을 생성할 수 없습니다!");
		return -1;
	}
	while (str[i] != '\0') {
		if (str[i] == ' ') {
			fputc('\n', result);
		}
		else {
			fputc(str[i], result);
		}
		i++;
	}
	fclose(result);
	return 0;
}
