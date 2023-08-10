/*
    선택정렬 소스 프로그램

    - 자료 n과 n개의 수 입력함

    - 정렬전의 자료 출력

    - 각 단계의 결과 자료 출력(i)

    - 정렬 후의 자료 출력
*/
#include <stdio.h> //stdio.h를 포함시키다.

void Def(int arr[], int size) {
  int i, j, min, temp;

  for (i = 0; i < size; i++) { // 배열의 모든 요소를 순회합니다
    min = i; //  i부터 시작하여 배열에서 최소 요소를 찾습니다.

    for (j = i + 1; j < size; j++) { // j 요소가 최소 요소보다 작으면 최소 인덱스를 업데이트합니다.
      if (arr[j] < arr[min]) {
        min = j;
      }
    }

    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;

    // 정렬 중간 과정 출력
    printf("%d단계 : ", i + 1);
    for (j = 0; j < size; j++) {
      printf("%d ", arr[j]);
    }
    printf("\n");
  }
}

int main(void) {
  int n, i; //변수 n과 i를 선언 
  int array[300]; // 정수를 저장할 배열을 생성합니다.

  printf("입력할 정수의 개수를 입력하세요. : "); // 입력할 정수의 개수를 입력합니다.
  scanf("%d", &n);

  printf("입력한 개수 만큼 정수를 입력하세요. : ");  // 사용자로부터 정수를 입력합니다.
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  printf("\n입력한 데이터: "); // 입력한 데이터를 출력합니다.
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n\n");

  Def(array, n); // Def 함수 호출로 배열 정렬

  printf("\n정렬된 데이터: "); // 정렬된 데이터를 출력합니다.
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}

