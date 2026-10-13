# 실습과제1
### 1. 스트림과 버퍼의 역할을 각각 설명하시오.
* 스트림 : 프로그램과 입출력장치 사이의 소프트웨어적 연결통로, 데이터가 한방향으로만 흐른다.
* 버퍼 : 입출력장치와 프로그램 사이에 존재하는 데이터 저장 메모리 공간
  
### 2. 버퍼를 사용하여 얻는 장점과 단점을 모두 설명하시오.
* 장점 : 데이터를 모아서 한번에 전송하므로 처리속도가 향상되므로 효율적이다. 데이터 전송 중 발생할 수 있는 데이터 손실을 방지한다.
* 단점 : 데이터가 쌓일 때까지 기다려야 하므로 미세한 지연이 발생한다.
### 3. 입력 버퍼에 데이터가 이미 존재할 때 scanf 함수를 호출한다면 어떤 일이 발생하는가?
* 버퍼에 데이터가 이미 존재한다면 입력을 기다리지 않고 버퍼의 데이터를 읽은 후 scanf를 종료한다.
### 4. 운영체제가 어떤 경우에 출력 버퍼의 데이터를 모니터로 출력하는가?
* 버퍼가 가득찰 때
* 문장입력이 완료될 때
### 5. scanf함수와 printf함수 실행시 함수와 운영체제의 역할분담에 대하여 설명하라.
* scanf 실행시 운영체제에서 입출력장치에 받은 데이터를 입력스트림 속 버퍼에 저장하고 버퍼에 저장된 데이터를 프로그램(함수)로 받아온다.
* printf 실행시 프로그램에서 버퍼에 데이터를 전송하고 운영체제에서 버퍼의 데이터를 입출력장치에 전송한다.

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
