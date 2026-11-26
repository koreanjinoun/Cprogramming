# 실습과제1
### 1. 프로그램 개발과정 편집->선행처리->컴파일->링크->실행 단계를 자세히 설명하시오.
* 편집 : c언어로 소스파일 작성, 에디터 사용, 소스파일(.c)
* 선행처리 : 헤더파일이나 메크로 상수를  소스파일에 포함시켜 선행처리된 소스파일로 만듦
* 컴파일 : 컴파일러를 사용하여 소스파일(.c)을 이진파일인 목적파일(.obj)로 번역
* 링크 : 여러 목적파일(.obj)을 하나의 실행파일(.exe)로 만듦 (목적파일 + 라이브러리파일 -> 실행파일)
* 실행 : 프로그램 실행
### 2. 
<img width="612" height="776" alt="스크린샷 2026-11-26 172903" src="https://github.com/user-attachments/assets/8aae6f82-7f79-4e79-a19c-d0161711a32f" />


<img width="612" height="775" alt="스크린샷 2026-11-26 172948" src="https://github.com/user-attachments/assets/e30e8c80-dc3d-4e14-977f-d2ec67b3bfc3" />


<img width="612" height="780" alt="스크린샷 2026-11-26 173037" src="https://github.com/user-attachments/assets/1a6dcdd0-d944-487f-8248-da07ca9c2906" />

# 실습과제2
### 1. C언어 표준 라이브러리 함수(printf, scanf 등)의 선언은 어디에 있는가?
* 헤더파일 <stdio.h>
### 2. C언어 표준 라이브러리 함수(printf, scanf 등)의 호출은 어디에 있는가?
* 소스파일의 main()함수 안
### 3. C언어 표준 라이브러리 함수(printf, scanf 등)의 정의는 어디에 있는가? 또, 어떤 파일 형태로 존재하는가?
* 라이브러리 파일(.obj)

# 실습과제3
### 매크로 상수를 왜 사용해야 하는지 설명하라.
* 기독성 향상 : 복잡한 상수나 문장을 의미 있는 단어로 정의하여 대신 사용함
* 유지보수 용의 : 값 변경에 대한 실수방지, #define 한 줄만 고치면 전체 코드에 한 번에 반영
### 매크로 상수를 사용한 예제를 인터넷에서 찾아서 실행해보고 소스코드를 자세히 설명하라.
```
https://dojang.io/mod/page/view.php?id=651
```
```
#include <stdio.h>

#define ARRAY_SIZE 10   

int main()
{
    char s1[ARRAY_SIZE];   

    for (int i = 0; i < ARRAY_SIZE; i++)    
    {
        s1[i] = 97 + i;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)   
    {
        printf("%c ", s1[i]);
    }

    return 0;
}
```
1. `ARRAY_SIZE` 메크로 상수 정의
2. char형 배열 `s1[]`에 메크로 상수가 치환된 메크로 몸체`10` 대입
3. 0부터 `ARRAY_SIZE`까지 정수 i를 1씩 증가시키며 배열에 97+i 대입
4. 배열을 순서대로 출력
