# 실습과제1
### 1. 주소에 의한 호출을 사용해야하는 3가지 경우를 설명하라
* 다른 함수 영역의 지역변수를 변경할 때
* 배열을 함수의 인자로 전달할 때
* 2개 이상의 반환 값을 전달할 때
### 2. 최대값 구하는 알고리즘을 설명하라
* 첫 번째 값을 저장한다.
* 첫 번째 값과 두 번째 값을 비교하여 더 큰 값을 저장한다.
* 순서대로 마지막 값까지 비교하여 최대 값을 구한다.

### 3. const 선언을 사용하는 이유를 설명 하시오.
* 다른 함수의 지역변수 변경 불가: 값에 의한 호출(Call by value)은 변수의 복사본을 전달하기 때문에, 호출된 함수 내부에서 매개변수를 변경하더라도 호출한 쪽(예: main 함수)의 원본 지역변수 값을 변경할 수 없습니다.


# 실습과제2
<img width="452" height="232" alt="스크린샷 2026-09-29 203550" src="https://github.com/user-attachments/assets/f16a46e0-24f3-4944-83fe-5706000e2e26" />

# 실습과제3
<img width="447" height="292" alt="스크린샷 2026-09-29 203718" src="https://github.com/user-attachments/assets/61ee7cbb-eba2-463b-9ef8-ef32f24d664e" />

# 실습과제4

<img width="402" height="145" alt="스크린샷 2026-09-29 203440" src="https://github.com/user-attachments/assets/4dcb9ffe-f635-4058-929f-692d010804fb" />


# 실습과제5
```
void ShowData(const int* ptr)
{
  int* rptr = ptr;
  printf("%d\n", *rptr);
  *rptr = 20;
}

int main(void)
{
  int num = 10;
  int* ptr = &num
  ShowData(ptr);
  return 0;
}
```
* ```const int* ptr```이 매개변수이므로 주소는 변수, 값은 상수이다.
* ```&num```을 ShowData()함수의 인자로 보내므로 num = *ptr, &num = ptr이다.
* ```int* rptr = ptr```이므로 *ptr = *ptr, ptr = rptr이다.
* ```*rptr = 20;```에서 ```const int*``` 값은 상수 이므로 변경이 불가능하다.

# 도전과제
### 도전1
<img width="387" height="347" alt="스크린샷 2026-09-29 212321" src="https://github.com/user-attachments/assets/ace909d4-2d56-4c6c-9ada-868294aa3acb" />

### 도전2

