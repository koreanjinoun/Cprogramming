// **********************************************
// 제 목 : 실습과제21.3
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main() {
	char str1[100], str2[100],str3[100];
	fputs("이름: ", stdout);
	gets(str1);
	fputs("주소: ", stdout);
	gets(str2);
	fputs("자동차번호: ", stdout);
	gets(str3);

	puts("<출력결과>");
	fputs("이름: ", stdout);
	puts(str1);
	fputs("주소: ", stdout);
	puts(str2);
	fputs("자동차번호: ", stdout);
	puts(str3);
	
	return 0;
}
