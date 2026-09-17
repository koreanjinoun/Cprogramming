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
<img width="467" height="102" alt="스크린샷 2026-09-17 172330" src="https://github.com/user-attachments/assets/5f843326-05d4-4799-8266-737269c86ef5" />

# 실습과제4
<img width="512" height="131" alt="스크린샷 2026-09-17 172858" src="https://github.com/user-attachments/assets/77a150ce-4949-4304-8440-dcb0be7c8e1c" />

# 실습과제5
<img width="436" height="82" alt="스크린샷 2026-09-17 175753" src="https://github.com/user-attachments/assets/5dce0f68-2adb-47b2-ae44-78ec939b54d3" />
