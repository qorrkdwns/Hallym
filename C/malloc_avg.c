#include <stdio.h>
#include <stdlib.h> // malloc, free를 사용하기 위한 헤더 파일

int main() {
    int n; // 입력받을 숫자의 개수
    printf("입력할 숫자의 개수를 입력하세요: ");
    scanf("%d", &n);

    // 동적 메모리 할당
    float* numbers = (float*)malloc(sizeof(float) * n);
    if (numbers == NULL) { // 메모리 할당 실패 시
        printf("메모리 할당에 실패했습니다.\n");
        return 1; // 프로그램 종료
    }

    // 사용자로부터 숫자 입력 받기
    printf("숫자 %d개를 입력하세요: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
    }

    // 평균 계산
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    printf("입력한 숫자의 평균: %.2f\n", sum / n);

    // 메모리 해제
    free(numbers);

    return 0;
}
