# 실습과제 1
<img width="670" height="240" alt="스크린샷 2026-11-05 191347" src="https://github.com/user-attachments/assets/c0791f19-977f-4942-a60d-f38e4ecb5c0a" />

# 실습과제 2
<img width="500" height="248" alt="스크린샷 2026-11-05 191529" src="https://github.com/user-attachments/assets/e1af81d1-2b5b-420d-8249-65fafd40fa7f" />

# 실습과제 3
<img width="553" height="245" alt="스크린샷 2026-11-05 191758" src="https://github.com/user-attachments/assets/19421de5-efcc-4c82-aacc-a5390052446e" />

# 실습과제 4
<img width="450" height="157" alt="스크린샷 2026-11-05 191853" src="https://github.com/user-attachments/assets/da039b46-21cf-40c2-a6f8-e0b25dd2d921" />

<img width="512" height="163" alt="스크린샷 2026-11-05 191934" src="https://github.com/user-attachments/assets/767baf7f-a423-4127-a872-1d623b4e9b89" />

# 실습과제 5
* **문제** : 구조체배열을 3개 만들고 정보를 입력받아 배열에 저장한 다음, 구조체배열 내에 맴버변수 주소를 구하는 코드를 작성해라.
  * 이때  구조체는 int의 4바이트 정렬을 위해 한 구조체당 2바이트의 패딩이 추가가 되어(배우지 않은 내용이므로) 간편하게 숫자도 문자열에 저장하는 방식으로 하였습니다.
  * 또한 실제 주소를 활용하려면
    ```
    #include <stdint.h>
    unsigned long long pointer;
    unsigned long long correct = (unsigned long long)&list[2].money;
    scanf("%llu", &pointer);
    ```
    같은걸 활용해야 하지만 이러면 정답입력이 16진수를 10진수로 바꿨음에도 입력이 복잡해지므로 시작 주소를 1001로 설정하였습니다.
  <img width="1066" height="613" alt="스크린샷 2026-11-05 191030" src="https://github.com/user-attachments/assets/03fd7fa7-630d-4d11-b668-ae7a4b7e5c13" />
