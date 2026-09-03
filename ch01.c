// **********************************************
// 제 목 : 실습과제 4
// 날 짜 : 2026년 9월3일
// 작성자 : 2600057 김진
// **********************************************
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

int main() {
  char a = ‘A’;
  int b = 36;
  double c = 3.141592;

  printf("char형 변수 a의 주소 : %p\n", (char*)&a);
  printf("int형 변수 b의 주소 : %p\n", (int*)&b);
  printf("double형 변수 c의 주소 : %p\n", (double*)&c);
  return 0;
}
