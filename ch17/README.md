# 실습과제1
### 1. 아래의 변수가 우측 그림처럼 메모리가 할당될 때 다음 표의 빈칸을 채우시오. 

| 수식 | 결과값 | 결과값의 자료형 |
| :---: | :---: | :---: |
| ptr | 100 | double* |
| dptr | 300 | double** |
| &ptr | 300 | double** |
| &dptr | 500 | double*** |
| *ptr | 6.28 | double |
| *dptr | 100 | double* |
| **dptr | 6.28 | double |


# 실습과제 2
<img width="402" height="102" alt="스크린샷 2026-10-06 223225" src="https://github.com/user-attachments/assets/625b9a03-8bf6-47b6-831d-18301cca9d6c" />

# 실습과제 3
<img width="400" height="165" alt="스크린샷 2026-10-06 223309" src="https://github.com/user-attachments/assets/fd70e81b-addd-4f2f-a124-0197c3922ef9" />

# 실습과제4

## 1. 메인 함수 (main)

```c
#include <stdio.h>
void MaxAndMin(int* arr, int size, int** maxPtr, int** minPtr);
```
* **기능:** 함수 선언부.
* **특징:** `maxPtr`과 `minPtr`을 이중 포인터(`int**`)로 지정하여 `main`의 포인터 변수 주소를 직접 전달받음.

```c
int main() {
	int* maxPtr;
	int* minPtr;
	int arr;
```
* **`maxPtr`, `minPtr`:** 최댓값과 최솟값의 '메모리 주소'를 저장할 싱글 포인터 변수 (초기 상태는 빈 공간).
* **`arr`:** 사용자 입력을 저장할 크기 5의 정수형 배열.

```c
	for (int i = 0; i < 5; i++) {
		printf("정수 입력 : ");
		scanf("%d", &arr[i]);
	}
```
* **기능:** 반복문을 통한 5개의 정수 입력 및 배열 저장.

```c
	MaxAndMin(arr, 5, &maxPtr, &minPtr);
```
* **기능:** 최댓값/최솟값 탐색 함수 호출.
* **인자 전달 원리:** 
  * `arr`: 배열 첫 번째 요소의 주소(`int*`)를 전달.
  * `&maxPtr`, `&minPtr`: 포인터 변수 자체의 주소를 전달 (**주소에 의한 참조, Call by Reference**).

```c
	printf("최대값: %d\n", *maxPtr);
	printf("최소값: %d\n", *minPtr);
	return 0;
}
```
* **기능:** 탐색 종료 후 `maxPtr`과 `minPtr`이 가리키는 실제 주소의 값(`*` 역참조)을 출력.

---

## 2. 탐색 함수 (MaxAndMin)

```c
void MaxAndMin(int* arr, int size, int** maxPtr, int** minPtr) {
	int* max, * min;
	max = min = &arr;
```
* **매개변수:** `main`의 변수 주소를 이중 포인터(`maxPtr`, `minPtr`)로 수신.
* **초기화:** 임시 싱글 포인터 `max`, `min`에 배열 첫 번째 방의 주소(`&arr`)를 대입하여 기준 설정.

```c
	for(int i = 1; i < size; i++) {
		if(arr[i] > *max) {
			max = &arr[i];
		}
		if(arr[i] < *min) {
			min = &arr[i];
		}
	}
```
* **탐색 로직:** 배열의 2번째 요소(`i=1`)부터 마지막까지 순회하며 크기 비교.
* **갱신:** 현재 요소가 기존 값보다 크거나 작으면 해당 방의 주소(`&arr[i]`)를 포인터에 대입.

```c
	*maxPtr = max;
	*minPtr = min;
}
```
* **핵심 연산 (이중 포인터 역참조):**
  * `*maxPtr`, `*minPtr` 연산으로 `main` 함수 내부의 원본 포인터 변수에 직접 접근.
  * 최종 탐색된 배열 내 최댓값/최솟값의 주소(`max`, `min`)를 이 원본 변수에 대입하여 함수 종료 후에도 주소를 유지시킴.
