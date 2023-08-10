/*
    BMI 등급별 학생수 구하는 프로그램

    - 등급별 학생수 저장하는 배열, 학생의 키 저장하는 배열, 학생의 체중 저장하는 배열, 학생의 BMI 지수 저장하는 배열 만들기

    - 학생수 입력, 학생의 키와 체중 입력(키는 cm단위, 체중은 kg단위)

    - 등급은 4등급으로 구분(고도비만, 비만, 보통, 허약)
*/
#include <stdio.h> //전처리기 stdio.h를 포함시키다.

int main(void) {
    int stnum, i; //stnum과 i를 선언한다. stnum은 학생의 숫자를 저장하기 위한 변수이고, i는 반복문에서 사용되는 변수입니다.
    float meter; //m로 변환 시키기 위한 변수선언
    int height[100];  // 키 배열
    int weight[100];  // 몸무게 배열
    float bmi[100];   // bmi 배열
    int pbmi[4] = { 0 };  // BMI 등급 배열

    printf("학생의 숫자를 입력하시오: "); //입력을 받기위한 출력문
    scanf("%d", &stnum); //stnum에 정수를 입력받음

    for (i = 0; i < stnum; i++) { 
        printf("%d번째 학생의 키를 입력하시오 (cm): ", i + 1); //키를 입력받기 위한 출력문
        scanf("%d", &height[i]); //키 배열에 값을 저장
        printf("%d번째 학생 몸무게를 입력하시오 (kg): ", i + 1); //몸무게를 입력받기 위한 출력문
        scanf("%d", &weight[i]); //몸무게 배열에 값을 저장

        meter = (float)height[i] / 100;  // cm를 m로 변환
        bmi[i] = weight[i] / (meter * meter); //BMI 계산식

        if (bmi[i] < 18.5) // 만약에 18.5보다 미만이면 
            pbmi[0]++; // pbmi 0번째 방에 숫자를 증가
        else if (bmi[i] >= 18.5 && bmi[i] < 23) // 만약에 18.5 이상이고 23 미만이면 
            pbmi[1]++; // pbmi 1번째 방에 숫자를 증가
        else if (bmi[i] >= 23 && bmi[i] < 25) // 만약에 23 이상이고 25 미만이면 
            pbmi[2]++; // pbmi 2번째 방에 숫자를 증가
        else // 모든 조건이 맞지 않은 다면
            pbmi[3]++; // pbmi 3번째 방에 숫자를 증가

    }

    printf("저체중(허약): %d\n", pbmi[0]); //0번째 방의 배열을 출력(저체중)
    printf("정상(보통): %d\n", pbmi[1]); //1번째 방의 배열을 출력(정상)
    printf("과체중(비만): %d\n", pbmi[2]); //2번째 방의 배열을 출력(과체중)
    printf("비만(고도비만): %d\n", pbmi[3]); //3번째 방의 배열을 출력(비만)

    return 0;
}

