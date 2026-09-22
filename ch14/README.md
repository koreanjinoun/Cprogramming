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
<h3>시간 순서에 따른 메모리 변화 (주소에 의한 호출)</h3>
<div style="width: 100%; overflow-x: auto; white-space: nowrap; padding-bottom: 15px;">
  <table style="text-align: center; border-collapse: collapse; border: none; display: inline-table; margin-top: 15px;">
    <thead>
      <tr>
        <th style="padding: 8px; border: none; font-weight: bold; font-size: 11px; min-width: 180px; width: 180px; white-space: normal;">main함수 호출후<br>swap함수 호출전</th>
        <th style="padding: 10px; border: none; width: 40px; min-width: 40px;">&nbsp;</th>
        <th style="padding: 10px; border: none; font-weight: bold; font-size: 13px; min-width: 180px; width: 180px; white-space: normal;">swap 함수<br>호출직후</th>
        <th style="padding: 10px; border: none; width: 40px; min-width: 40px;">&nbsp;</th>
        <th style="padding: 10px; border: none; font-weight: bold; font-size: 13px; min-width: 180px; width: 180px; white-space: normal;">① 실행<br>(tmp = *px;)</th>
        <th style="padding: 10px; border: none; width: 40px; min-width: 40px;">&nbsp;</th>
        <th style="padding: 10px; border: none; font-weight: bold; font-size: 13px; min-width: 180px; width: 180px; white-space: normal;">② 실행<br>(*px = *py;)</th>
        <th style="padding: 10px; border: none; width: 40px; min-width: 40px;">&nbsp;</th>
        <th style="padding: 10px; border: none; font-weight: bold; font-size: 13px; min-width: 180px; width: 180px; white-space: normal;">③ 실행<br>(*py = tmp;)</th>
        <th style="padding: 10px; border: none; width: 40px; min-width: 40px;">&nbsp;</th>
        <th style="padding: 10px; border: none; font-weight: bold; font-size: 13px; min-width: 180px; width: 180px; white-space: normal;">swap 함수<br>종료 후</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <!-- 1. main함수 호출후 -->
        <td style="border: none; vertical-align: top;">
          <table border="1" style="background-color: #FFF0E5; width: 180px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #D32F2F;">a -> 100 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">92</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #D32F2F;">b -> 200 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">96</span></td></tr>
            <tr style="height: 35px;"><td>&nbsp;</td></tr>
            <tr style="height: 35px;"><td>&nbsp;</td></tr>
            <tr style="height: 35px;"><td>&nbsp;</td></tr>
          </table>
        </td>
        <td style="border: none; vertical-align: middle; font-size: 20px; color: #888888;">➡️</td>
        <!-- 2. swap 함수 호출직후 -->
        <td style="border: none; vertical-align: top;">
          <table border="1" style="background-color: #FFF0E5; width: 180px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #D32F2F;">a -> 100 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">92</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #D32F2F;">b -> 200 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">96</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #1976D2;">px -> 92</td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #1976D2;">py -> 96</td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4A148C;">tmp</td></tr>
          </table>
        </td>
        <td style="border: none; vertical-align: middle; font-size: 20px; color: #888888;">➡️</td>
        <!-- 3. ① 실행 -->
        <td style="border: none; vertical-align: top;">
          <table border="1" style="background-color: #FFF0E5; width: 180px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #D32F2F;">a -> 100 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">92</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #D32F2F;">b -> 200 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">96</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #1976D2;">px -> 92</td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #1976D2;">py -> 96</td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4A148C; font-weight: bold;">tmp -> 100</td></tr>
          </table>
        </td>
        <td style="border: none; vertical-align: middle; font-size: 20px; color: #888888;">➡️</td>
        <!-- 4. ② 실행 -->
        <td style="border: none; vertical-align: top;">
          <table border="1" style="background-color: #FFF0E5; width: 180px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4CAF50; font-weight: bold;">a -> 200 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">92</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #D32F2F;">b -> 200 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">96</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #1976D2;">px -> 92</td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #1976D2;">py -> 96</td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4A148C;">tmp -> 100</td></tr>
          </table>
        </td>
        <td style="border: none; vertical-align: middle; font-size: 20px; color: #888888;">➡️</td>
        <!-- 5. ③ 실행 -->
        <td style="border: none; vertical-align: top;">
          <table border="1" style="background-color: #FFF0E5; width: 180px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4CAF50;">a -> 200 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">92</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4CAF50; font-weight: bold;">b -> 100 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">96</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #1976D2;">px -> 92</td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #1976D2;">py -> 96</td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4A148C;">tmp -> 100</td></tr>
          </table>
        </td>
        <td style="border: none; vertical-align: middle; font-size: 20px; color: #888888;">➡️</td>
        <!-- 6. swap 함수 종료 후 -->
        <td style="border: none; vertical-align: top;">
          <table border="1" style="background-color: #FFF0E5; width: 180px; border-collapse: collapse; border: 1px solid #A0A0A0; text-align: left;">
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4CAF50; font-weight: bold;">a -> 200 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">92</span></td></tr>
            <tr style="height: 35px;"><td style="padding-left: 10px; color: #4CAF50; font-weight: bold;">b -> 100 <span style="color: #1976D2; font-size: 11px; float: right; padding-right: 5px;">96</span></td></tr>
            <tr style="height: 35px;"><td>&nbsp;</td></tr>
            <tr style="height: 35px;"><td>&nbsp;</td></tr>
            <tr style="height: 35px;"><td>&nbsp;</td></tr>
          </table>
        </td>
      </tr>
    </tbody>
  </table>
</div>

<p style="font-size: 14px; font-weight: bold; margin-top: 15px;">💡 주소를 이용하면 다른 함수(swap)에서 선언된 변수(main의 a, b)의 값을 직접 변경할 수 있습니다.</p>

# 실습과제5
### 문제 2번 결과
<img width="710" height="122" alt="2문제" src="https://github.com/user-attachments/assets/89335d47-d97d-438f-8304-299ce2f10292" />

### 문제 3번 결과
<img width="426" height="100" alt="3문제" src="https://github.com/user-attachments/assets/76f6831e-8fd0-4f59-803b-e9d0e73fbec6" />

### 문제 4번 결과
<img width="457" height="97" alt="4문제" src="https://github.com/user-attachments/assets/9f322b10-bc55-4104-b49d-7dd01498873f" />
