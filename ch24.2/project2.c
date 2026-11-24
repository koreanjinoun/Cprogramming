// **********************************************
// 제 목 : 실습과제24.2
// 날 짜 : 2026년 11월 24일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
	int buf[10];
	size_t read;
	FILE* dest = fopen("b.bin", "rb");
	if (dest == NULL) { puts("파일오픈 실패!"); return -1; }


	read = fread((void*)buf, sizeof(int), 10, dest);
	for (int i = 0; i < (int)read; i++) {
		printf("%d\n", buf[i]);
	}
	fclose(dest);

	return 0;
}
