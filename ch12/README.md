# Cprogramming

## #실습과제1
* **16MB 메모리주소 범위** : `0x00000000 ~ 0x00FFFFFF`
* **변수의 주소** : 프로그램이 실행될 때 변수에 할당된 데이터가 컴퓨터 상에서 실제로 위치하고 있는 시작 번지
* **변수의 주소의 자료형** : 가리키는 변수의 자료형에 별표를 붙인 포인터 형
* **포인터** : 다른 변수나 데이터가 저장되어 있는 메모리의 주소(위치값)를 저장하는 특수한 변수
* **포인터의 자료형** : 포인터가 가리키는 대상의 자료형에 별표를 붙인 형태
* **변수의 주소에 int형 변수 저장하면** : 32비트인 경우 주소와 int형이 모두 4바이트라 값이 들어갈 수 있으나 자료형 불일치가 발생한다
64바이트인 경우 주소(8바이트)가 int형(4바이트)안에 잘려 들어가므로 데이터가 유실된다

## #실습과제2
* **pt가 가리키는 데이터 자료형** : `double`
* **pt에 저장될 주소의 자료형** : `double*` (더블 포인터형)
* **pt의 자료형** : `double*`(더블 포인터형)
* **double의 의미** : 포인터가 가리키는 자료형
* **할당되는 메모리 크기** : 8바이트(64비트), 4바이트(32비트)

## #실습자료3
| 수식 | 결과 | 결과값의 자료 |
| :--- | :--- | :--- |
| &ch | 100 | char* |
| &in | 101 | int* |
| &db | 105 | double* |

## #실습자료4
![실행결과](https://github-production-user-asset-6210df.s3.amazonaws.com/133323809/649202766-8986c5ba-9ee9-47e2-a51d-b30ffac6b8c7.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAVCODYLSA53PQK4ZA%2F20260910%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20260910T050658Z&X-Amz-Expires=300&X-Amz-Signature=828de2cd098ca6bfeda86ee06566848c14b848ca7362e8019964d1708af87c8c&X-Amz-SignedHeaders=host&response-content-type=image%2Fpng)

