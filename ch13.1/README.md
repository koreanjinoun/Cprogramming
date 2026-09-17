# 실습과제1
### 1. C언어에서 문자를 메모리에 저장하는 방식
* C언어는 문자를 내부적으로 정수(아스키 코드 값)로 변환하여 1바이트(byte) 크기의 메모리 공간에 저장합니다.
### 2. 널문자의 용도
* 널 문자('\0')는 C언어에서 문자열(String)의 끝을 나타내는 제어 문자입니다.
### 3.메모리에 저장된 문자열의 끝을 찾는 방법
* 문자열의 첫 번째 문자부터 시작하여 순차적으로 다음 메모리 공간을 읽어가다가, 값이 0(널 문자 '\0')인 위치를 찾으면 그곳이 문자열의 끝입니다.
### 4. 문자열의 길이를 구하는 알고리즘
* 문자열의 시작 위치부터 배열을 한 칸씩 이동하며 널 문자('\0')를 만날 때까지 카운터(Counter) 변수를 1씩 증가시키는 알고리즘을 사용합니다.
```
int main() {
    char str[] = "Hello"; // 메모리 구조: 'H', 'e', 'l', 'l', 'o', '\0'
    int length = 0;

    // 널 문자('\0')를 만날 때까지 반복하며 길이를 증가시킴
    while (str[length] != '\0') {
        length++;
    }

    printf("문자열의 길이: %d\n", length); // 출력 결과: 5
    return 0;
}
```

# 실습과제 2
<img width="517" height="315" alt="스크린샷 2026-09-17 171830" src="https://github.com/user-attachments/assets/36b5d10a-f45f-4321-8166-4da761e57d02" />

# 실습과제 3
### 1. 증감연산자 a++와 ++a의 차이
* **a++ (후위 증감)**: 연산이 포함된 전체 수식에 현재 a 값을 먼저 사용한 후, 수식이 끝나면 a의 값을 1 증가시킨다.
* **++a (전위 증감)**: a의 값을 먼저 1 증가시킨 후, 증가된 값을 수식에 사용합니다.
### 2. 코드의 문제점 분석
* 배열 이름 a를 대상으로 후위 증가 연산(a++)을 시도한 것이 문제이다.
* 상수는 값을 변경할 수 없으므로, 주소값을 직접 바꾸려는 a++ 연산은 컴파일 에러(lvalue required)를 발생시킨다.
### 3. 문제 해결
* 배열 이름 a를 직접 변경하는 대신, 주소를 자유롭게 바꿀 수 있는 포인터 변수 p를 별도로 선언하여 해결해야 한다.
```
#include <stdio.h>
int main(void)
{
    int a[] = { 10, 20, 30 }, i, sum = 0;
    int *p = a;

    for (i = 0; i < 3; i++)
        sum += *p++;
        
    printf("sum:%d\n", sum);
    return 0;
}

```

# 실습과제4
### 문제 1번 결과
<img width="552" height="122" alt="1문제" src="https://github.com/user-attachments/assets/c5776da5-6ce7-4a1e-a7f1-aef3db20c27e" />

# 실습과제5
### 문제 2번 결과
<img width="710" height="122" alt="2문제" src="https://github.com/user-attachments/assets/89335d47-d97d-438f-8304-299ce2f10292" />

### 문제 3번 결과
<img width="426" height="100" alt="3문제" src="https://github.com/user-attachments/assets/76f6831e-8fd0-4f59-803b-e9d0e73fbec6" />

### 문제 4번 결과
<img width="457" height="97" alt="4문제" src="https://github.com/user-attachments/assets/9f322b10-bc55-4104-b49d-7dd01498873f" />
