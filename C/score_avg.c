#include <stdio.h>

int main() { //배열 선언 형식 : data_type array_name[array_size];
    int scores[5];  // 점수 5개를 저장할 배열
    int sum = 0;    // 총합을 저장할 변수
    float avg;      // 평균을 저장할 변수

    // 사용자로부터 점수 입력받기
    printf("5개의 점수를 입력하세요.\n");
    for (int i = 1; i <= 5; i++) {
        printf("점수 %d: ", i);
        scanf("%d", &scores[i]);
        sum += scores[i];  // 입력받은 점수를 총합에 더하기
    }

    // 평균 계산
    avg = sum / 5.0;  // 정수 나눗셈 방지 위해 5.0으로 나눔
    printf("총합: %d\n", sum);
    printf("평균: %.2f\n", avg); // %.2f : 소수점 2번째 자리까지 출력

    return 0;
}
