# 실습과제1
### 1. 함수 선언, 호출, 정의
* **함수 선언:** 컴파일러에게 함수의 이름, 반환형, 매개변수를 알리는 형태이다.
* **함수 호출:** 정의된 함수를 이름을 불러 실제로 실행하는 과정이다.
* **함수 정의:** 함수의 실제 동작과 본문 코드를 구현하는 것이다.

### 2. 함수의 자료형
* 함수의 **반환형(Return Type)**을 의미한다.
* 함수가 종료되면서 호출한 곳으로 돌려주는 데이터의 종류이다.

### 3. 함수명의 자료형
* 함수가 저장된 메모리의 시작 주소를 가리키는 **함수 포인터**이다.

### 4. void 포인터의 용도
* 대상의 자료형이 정해지지 않은 **범용 포인터**이다.
* 어떤 타입의 메모리 주소든 가리지 않고 모두 저장할 수 있다.

### 5. void 포인터 간접참조 시 주의점
* 크기와 종류를 알 수 없어 **곧바로 간접참조(`*`)를 할 수 없다.**
* 반드시 원하는 자료형으로 **강제 형변환(Casting)**을 한 뒤 참조해야 한다.

### 6. 강제형변환과 자동형변환
* **자동형변환:** 컴파일러가 표현 범위가 넓은 쪽으로 타입을 알아서 바꾸는 것이다.
* **강제형변환:** 프로그래머가 명시적 코드로 타입을 강제 지정하여 바꾸는 것이다.

# 실습과제2
### 1. 함수의 매개변수에 함수 포인터를 활용하는 예제

**함수 포인터를 매개변수로 받는 함수와 연산 함수 정의**
```c
#include <stdio.h>

// 함수 포인터를 매개변수로 받는 함수이다.
void calculator(int a, int b, int (*operation)(int, int)) {
    printf("결과: %d\n", operation(a, b));
}

// 사칙연산 기능을 하는 실제 함수들이다.
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }
```
`calculator` 함수는 세 번째 매개변수로 `int (*operation)(int, int)`를 받는다. 이는 두 개의 정수를 인자로 받아 정수를 반환하는 함수 형태라면 무엇이든 주소값으로 넘겨받을 수 있음을 의미한다.

**메인 함수에서의 활용**
```c
int main() {
    // 함수 이름을 인자로 전달하여 서로 다른 기능을 수행한다.
    calculator(10, 5, add);       // 결과: 15
    calculator(10, 5, multiply);  // 결과: 50
    return 0;
}
```
`main` 함수에서는 별도의 연산 코드를 직접 작성하지 않고, 상황에 맞춰 `add`나 `multiply` 같은 함수명을 `calculator` 함수의 인자로 던져준다. 이를 통해 하나의 함수틀 안에서 호출하는 함수에 따라 동적으로 결과가 변하는 유연한 코드를 작성할 수 있다.

<img width="377" height="110" alt="스크린샷 2026-10-08 203352" src="https://github.com/user-attachments/assets/0f65f36a-7f5d-4dc5-afa3-dcbf60b99658" />

### 2. 함수의 매개변수에 void 포인터를 활용하는 예제

**void 포인터를 매개변수로 사용하는 범용 함수 정의**
```c
#include <stdio.h>

// void 포인터와 자료형 판별용 문자를 매개변수로 받는 함수이다.
void printValue(void *ptr, char type) {
    switch(type) {
        case 'i': // int형일 때
            printf("정수 출력: %d\n", *(int *)ptr);
            break;
        case 'd': // double형일 때
            printf("실수 출력: %.2f\n", *(double *)ptr);
            break;
    }
}
```
`void *ptr`은 가리키는 자료형의 크기와 종류를 모르기 때문에 함수 내부에서 `*ptr` 형태로 바로 값을 가져올 수 없다. 따라서 동반된 `type` 변수 값에 따라 `(int *)` 또는 `(double *)` 형태로 강제 형변환(Casting)을 먼저 거친 후, 간접참조 연산자(`*`)를 붙여서 출력하도록 구현한다.

**메인 함수에서의 활용**
```c
int main() {
    int num = 10;
    double pi = 3.14;

    // 어떤 타입의 주소든 void 포인터 매개변수로 전달이 가능하다.
    printValue(&num, 'i');
    printValue(&pi, 'd');
    return 0;
}
```
`void *` 매개변수는 포인터의 종류를 가리지 않는 만능 주소 저장소이다. 그렇기 때문에 서로 완전히 다른 자료형인 정수형 변수의 주소(`&num`)와 실수형 변수의 주소(`&pi`)를 동일한 `printValue` 함수의 첫 번째 인자로 제약 없이 넘겨줄 수 있다.

<img width="362" height="115" alt="스크린샷 2026-10-08 203434" src="https://github.com/user-attachments/assets/43907002-23e5-4e84-ac29-d0c114ec23ef" />

# 실습과제3
<img width="695" height="130" alt="스크린샷 2026-10-08 205048" src="https://github.com/user-attachments/assets/82d6fe7c-04ca-4e15-ae36-c5d3b33308fc" />

# 도전과제
### 도전1
<img width="660" height="755" alt="스크린샷 2026-10-08 212002" src="https://github.com/user-attachments/assets/11e647ee-7190-4a9e-9c80-64c25ff2033c" />

### 도전2
<img width="406" height="221" alt="스크린샷 2026-10-08 221957" src="https://github.com/user-attachments/assets/5126e1dd-871e-4f0b-b9d5-9ffebc85127a" />

### 도전3
<img width="420" height="205" alt="스크린샷 2026-10-08 222825" src="https://github.com/user-attachments/assets/584f93fc-008f-4abd-bb5c-f2f8e3b95b25" />
