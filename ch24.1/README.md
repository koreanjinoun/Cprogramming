# 실습과제1

<img width="647" height="217" alt="스크린샷 2026-11-19 151749" src="https://github.com/user-attachments/assets/70d7aecb-2374-4382-ba87-51b5720b6016" />
<img width="457" height="267" alt="스크린샷 2026-11-19 151732" src="https://github.com/user-attachments/assets/56f14a6d-66bf-45a5-a4a0-bdf7b5b0b3c9" />


# 실습과제2

<img width="405" height="242" alt="스크린샷 2026-11-19 180617" src="https://github.com/user-attachments/assets/0812aa6f-257b-4173-8623-2a63b4b80204" />

# 실습과제3

<img width="427" height="267" alt="스크린샷 2026-11-19 182047" src="https://github.com/user-attachments/assets/51edf687-5834-4710-9533-81e923ae4da1" />

# 실습과제 4



| fscanf | value (`%s`, `%c`, `%d` 순서) | stream buffer |
| :--- | :--- | :--- |
| 초기 | - | `"홍길동 M 23임꺽정 M 40 장길산 F 30"` |
| `%s %c %d` | `"홍길동"`, `" "`, `쓰레기값` | `"M 23임꺽정 M 40 장길산 F 30"` |
| `%s %c %d` | `"M"`, `" "`, `23` | `"임꺽정 M 40 장길산 F 30"` |
| `%s %c %d` | `"임꺽정"`, `" "`, `23` | `"M 40 장길산 F 30"` |
| `%s %c %d` | `"M"`, `" "`, `40` | `" 장길산 F 30"` |
| `%s %c %d` | `"장길산"`, `" "`, `40` | `"F 30"` |
| `%s %c %d` | `"F"`, `" "`, `30` | `""` |
* scanf나 fscanf에서 공백문자는 구분문자로써 %s가 구분문자 직전까지 데이터를 읽고 공백문자를 버퍼에 남겨둔다.
* fscanf에서 %d는 문자형 숫자를 정로 변경하여 변수에 넣는다. 이때 처음 %d 버퍼에서 문자형 숫자가 없었으므로 초기화 되지 않은채 쓰레기값이 남아있게된다.



