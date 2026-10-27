# 실습과제1
### 1. 표준 입출력 스트립을 접근하는 방법
* 문자, 문자열 전용 입출력 함수에서 주소를 이용하여 스트림에 접근한다.
  
### 2. 공백을 포함한 문자열을 입력 받을 때 사용가능한 함수
* 문자열 입력 전용함수 : gets, char* gets(const char* str);
* 문자열 입력 전용함수 : fgets,char* fgets(const char* str, int n , FILE* stream);
### 3. gets 함수사용시 가장 큰 문제점
* gets함수는 입력되는 문자열의 길이가 배열길이보다 클 경우 할당받지 않은 메모리를 참조하는 오류가 발생한다.
### 4. fgets 함수 사용시 문제점은 무엇인가?
* 줄바꿈 문자'\n'가 문자열에 포함된다.
* 지정한 배열의 크기보다 더 긴 문자열이 입력되면, fgets는 배열 크기(size - 1)만큼만 잘라서 읽고 남은 문자열은 입력 버퍼(stdin)에 그대로 남는다.
### 5. 널문자(‘\0’)와 널포인터(NULL)의 용도
* 널문자 : 문자열의 끝을 표시
* 널포인터 : 포인터 변수 메모리 초기화, 오류 표시

# 실습과제2
<img width="462" height="145" alt="스크린샷 2026-10-27 212847" src="https://github.com/user-attachments/assets/860a4339-c0ed-4f73-a5cb-a005eed907f0" />

# 실습과제 3
<img width="437" height="237" alt="스크린샷 2026-10-27 214902" src="https://github.com/user-attachments/assets/ac1d78a9-5844-49f8-b58a-5a2f4adf4bb2" />

# 실습과제4
<img width="567" height="117" alt="스크린샷 2026-10-27 215914" src="https://github.com/user-attachments/assets/e8ae4a92-7163-4f96-8db9-9c0a15901b6d" />

# 실습과제5
<img width="452" height="115" alt="스크린샷 2026-10-27 221601" src="https://github.com/user-attachments/assets/2e20e100-74de-493e-a936-c0ecab78adff" />
