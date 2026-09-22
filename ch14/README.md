# 실습과제1
### 1. 함수의 인자와 매개변수의 차이를 설명하라.
* 인자 (Argument): 호출하는 함수 쪽에서 선언되어 전달하는 변수나 값입니다.
* 매개변수 (Parameter): 호출되는 함수 쪽에서 선언되어 인자의 값을 전달받는 변수입니다.
### 2. 함수가 호출될 때 컴퓨터에 의해 자동으로 실행되는 2가지를 설명하라.
* 매개변수를 메모리에 할당합니다.
* 매개변수를 인자 값으로 초기화합니다.
### 3. 값에 의한 함수 호출방식의 문제점을 설명하라.
* 다른 함수의 지역변수 변경 불가: 값에 의한 호출(Call by value)은 변수의 복사본을 전달하기 때문에, 호출된 함수 내부에서 매개변수를 변경하더라도 호출한 쪽(예: main 함수)의 원본 지역변수 값을 변경할 수 없습니다.
### 4. 주소에 의한 함수 호출방식이 필요한 경우를 설명하라.
* 외부 지역변수의 값 변경(간접 참조): swap 함수나 scanf 함수처럼 다른 함수에서 선언된 지역변수의 값을 직접 변경해야 할 때 반드시 주소에 의한 호출(Call by pointer) 방식을 사용해야 합니다. 주소를 이용하면 포인터를 통해 다른 함수의 메모리 공간에 직접 접근할 수 있기 때문입니다.

# 실습과제 2
<h3>시간 순서에 따른 메모리 변화</h3>

<table style="text-align: center; border-collapse: collapse; border: none; margin-top: 15px;">
  <thead>
    <tr>
      <th style="padding: 10px; border: none; font-weight: bold; font-size: 14px;">main함수 호출후<br>add2함수 호출전</th>
      <th style="padding: 10px; border: none; font-weight: bold; font-size: 14px; width: 40px;">&nbsp;</th>
      <th style="padding: 10px; border: none; font-weight: bold; font-size: 14px;">add2 함수<br>호출 및 실행</th>
      <th style="padding: 10px; border: none; font-weight: bold; font-size: 14px; width: 40px;">&nbsp;</th>
      <th style="padding: 10px; border: none; font-weight: bold; font-size: 14px;">add2 함수<br>종료 후</th>
      <th style="padding: 10px; border: none; font-weight: bold; font-size: 14px; width: 40px;">&nbsp;</th>
      <th style="padding: 10px; border: none; font-weight: bold; font-size: 14px;">main함수<br>종료 후</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <!-- 1단계: add2 호출 전 -->
      <td style="border: none; vertical-align: top;">
        <table border="1" style="background-color: #FFF0E5; width: 170px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
          <tr style="height: 40px;"><td style="padding-left: 10px; color: #D32F2F; font-weight: bold;">number -> N(정수)</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
        </table>
      </td>
      <!-- 화살표 -->
      <td style="border: none; vertical-align: middle; font-size: 24px; color: #888888;">➡️</td>
      <!-- 2단계: modify 실행 중 -->
      <td style="border: none; vertical-align: top;">
        <table border="1" style="background-color: #FFF0E5; width: 170px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
          <tr style="height: 40px;"><td style="padding-left: 10px; color: #D32F2F; font-weight: bold;">number -> N(정수)</td></tr>
          <tr style="height: 40px;"><td style="padding-left: 10px; color: #1976D2; font-weight: bold;">value -> N(정수) -> N(정수) + 2</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
        </table>
      </td>
      <!-- 화살표 -->
      <td style="border: none; vertical-align: middle; font-size: 24px; color: #888888;">➡️</td>
      <!-- 3단계: add2 종료 후 -->
      <td style="border: none; vertical-align: top;">
        <table border="1" style="background-color: #FFF0E5; width: 170px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
          <tr style="height: 40px;"><td style="padding-left: 10px; color: #D32F2F; font-weight: bold;">number -> N(정수)</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
        </table>
      </td>
      <!-- 화살표 -->
      <td style="border: none; vertical-align: middle; font-size: 24px; color: #888888;">➡️</td>
      <!-- 4단계: main 종료 후 -->
      <td style="border: none; vertical-align: top;">
        <table border="1" style="background-color: #FFF0E5; width: 170px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
          <tr style="height: 40px;"><td>&nbsp;</td></tr>
        </table>
      </td>
    </tr>
  </tbody>
</table>
* 값에 의한 호출방식으로 다른 함수(add2 -> main)에서 선언된 지역변수(value -> number)의 값을 변경하는 것은 불가능

# 실습과제 3
<img width="370" height="116" alt="스크린샷 2026-09-22 200545" src="https://github.com/user-attachments/assets/156a9a40-1cda-4ba2-bd56-045ce4bc6a7d" />

# 실습과제4
### 세 변수의 swap 함수 호출에 따른 메모리 변화 (예시: 10, 20, 30 입력 시)

| main함수 입력 직후<br>(호출 전) | 첫 번째 swap(&x, &y)<br>호출 완료 직후 | 두 번째 swap(&y, &z)<br>호출 완료 직후 | 최종 출력 결과<br>(main함수 종료) |
| :---: | :---: | :---: | :---: |
| **x** (&100) -> 10<br>**y** (&200) -> 20<br>**z** (&300) -> 30 | **x** (&100) -> 20<br>**y** (&200) -> 10<br>**z** (&300) -> 30 | **x** (&100) -> 20<br>**y** (&200) -> 30<br>**z** (&300) -> 10 | **x** = 20<br>**y** = 30<br>**z** = 10 |

* **실행 결과 분석:** 
  1. 첫 번째 `swap(&x, &y)`를 통해 `x`와 `y`의 값이 서로 바뀝니다. (`x=20`, `y=10`)
  2. 두 번째 `swap(&y, &z)`를 통해 바뀐 `y`와 `z`무의 값이 바뀝니다. (`y=30`, `z=10`)
  3. 결과적으로 입력한 값이 한 칸씩 앞쪽으로 밀리는 형태(`x` ➔ `y` ➔ `z` ➔ `x`)로 회전하게 됩니다.


<img width="511" height="186" alt="image" src="https://github.com/user-attachments/assets/c4103260-4cf0-4ed1-85a2-0a70cc42c9be" />

# 실습과제5
* SquareByValue 함수는 인자로 전달된 값의 제곱을 '반환'하였으므로 원하는 결과 값이 나온다.
* SquareByReference 함수는 변수의 주소 값을 인자로 받아서 해당 변수에 저장된 값을 변경하였으므로 원하는 결과 값이 나온다.
<img width="432" height="122" alt="image" src="https://github.com/user-attachments/assets/a852ac7b-1e48-4ed6-82c5-72667d4426ed" />
