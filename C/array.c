#include <stdio.h>

int main() {
    int arr[5]; // 크기가 5인 배열 선언
    int sum = 0; // 합계를 저장할 변수 선언
    float average;

    printf("5개의 정수를 입력하세요:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d번째 정수: ", i + 1);
        scanf("%d", &arr[i]); // 배열 요소에 사용자 입력 저장
        sum += arr[i]; // 합계 계산
    }

    average = (float)sum / 5; // 평균 계산
    printf("입력한 숫자의 평균은: %.2f\n", average);

    return 0;
}
