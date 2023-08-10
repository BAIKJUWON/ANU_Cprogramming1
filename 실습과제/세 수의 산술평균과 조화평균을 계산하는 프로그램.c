//세 수의 산술평균과 조화평균을 계산하는 프로그램
#include <stdio.h>

int main(void) {
    int a, b, c;
    float d, e;

    printf("세 수를 입력하세요: ");
    scanf_s("%d %d %d", &a, &b, &c);

    d = (a + b + c) / 3.0;
    e = 3.0 / ((1.0 / a) + (1.0 / b) + (1.0 / c));

    printf("산술평균은 %f 입니다.\n", d);
    printf("조화평균은 %f 입니다.\n", e);

    return 0;
}
