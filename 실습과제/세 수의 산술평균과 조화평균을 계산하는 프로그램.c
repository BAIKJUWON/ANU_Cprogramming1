//�� ���� �����հ� ��ȭ����� ����ϴ� ���α׷�
#include <stdio.h>

int main(void) {
    int a, b, c;
    float d, e;

    printf("�� ���� �Է��ϼ���: ");
    scanf_s("%d %d %d", &a, &b, &c);

    d = (a + b + c) / 3.0;
    e = 3.0 / ((1.0 / a) + (1.0 / b) + (1.0 / c));

    printf("�������� %f �Դϴ�.\n", d);
    printf("��ȭ����� %f �Դϴ�.\n", e);

    return 0;
}
