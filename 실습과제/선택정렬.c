/*
    �������� �ҽ� ���α׷�

    - �ڷ� n�� n���� �� �Է���

    - �������� �ڷ� ���

    - �� �ܰ��� ��� �ڷ� ���(i)

    - ���� ���� �ڷ� ���
*/
#include <stdio.h> //stdio.h�� ���Խ�Ű��.

void Def(int arr[], int size) {
  int i, j, min, temp;

  for (i = 0; i < size; i++) { // �迭�� ��� ��Ҹ� ��ȸ�մϴ�
    min = i; //  i���� �����Ͽ� �迭���� �ּ� ��Ҹ� ã���ϴ�.

    for (j = i + 1; j < size; j++) { // j ��Ұ� �ּ� ��Һ��� ������ �ּ� �ε����� ������Ʈ�մϴ�.
      if (arr[j] < arr[min]) {
        min = j;
      }
    }

    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;

    // ���� �߰� ���� ���
    printf("%d�ܰ� : ", i + 1);
    for (j = 0; j < size; j++) {
      printf("%d ", arr[j]);
    }
    printf("\n");
  }
}

int main(void) {
  int n, i; //���� n�� i�� ���� 
  int array[300]; // ������ ������ �迭�� �����մϴ�.

  printf("�Է��� ������ ������ �Է��ϼ���. : "); // �Է��� ������ ������ �Է��մϴ�.
  scanf("%d", &n);

  printf("�Է��� ���� ��ŭ ������ �Է��ϼ���. : ");  // ����ڷκ��� ������ �Է��մϴ�.
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  printf("\n�Է��� ������: "); // �Է��� �����͸� ����մϴ�.
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n\n");

  Def(array, n); // Def �Լ� ȣ��� �迭 ����

  printf("\n���ĵ� ������: "); // ���ĵ� �����͸� ����մϴ�.
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}

