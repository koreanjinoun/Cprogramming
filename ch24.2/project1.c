// **********************************************
// 제 목 : 실습과제24.1
// 날 짜 : 2026년 11월 24일
// 작성자 : 2600057 김진언
// **********************************************


#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>

int main(void)
{
	int buf[10];
	FILE* src = fopen("a.txt", "rt");
	FILE* dest = fopen("b.bin", "wb");
	if(src==NULL) { puts("파일오픈 실패!"); return -1; }
	if (dest == NULL) { puts("파일오픈 실패!"); return -1; }

	for (int i = 0; i < 10; i++) {
		fscanf(src, "%d", &buf[i]);
	}

	fwrite((void*)buf, sizeof(int), 10, dest);
	fclose(src);
	fclose(dest);

	return 0;
}
