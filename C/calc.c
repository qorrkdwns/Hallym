#include <stdio.h>

// 함수 선언
float calculate(float num1, float num2, char operator);

int main() {
    float num1, num2, result;
    char operator;

    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%f", &num1);

    printf("연산자를 입력하세요 (+, -, *, /, %%): "); //%는 형식 지정자로 사용되기 때문에 출력하기 위해선 %%로 사용
    scanf(" %c", &operator); // 앞에 공백을 넣어 입력 버퍼 제거(입력 버퍼 제거는 숫자, 문자열, 문자 입력이 섞여 있을 때 필요)

    printf("두 번째 숫자를 입력하세요: ");
    scanf("%f", &num2);

    // 함수 호출
    result = calculate(num1, num2, operator);

    // 결과 출력
    printf("결과: %.2f\n", result);

    return 0;
}

// 함수 정의
float calculate(float num1, float num2, char operator) {
    switch (operator) {
        case '+': 
            return num1 + num2;

        case '-': 
            return num1 - num2;

        case '*': 
            return num1 * num2;

        case '/': 
            if (num2 != 0) 
                return num1 / num2;
            else {
                printf("0으로 나눌 수 없습니다.\n");
                return 0; // 기본값 반환
            }
        case '%':
            if(num2 != 0)
                return (int)num1 % (int)num2;
            else {
                printf("0으로 나눌 수 없습니다.\n");
                return 0; // 기본값 반환
            }
        default:
            printf("잘못된 연산자입니다.\n");
            return 0; // 기본값 반환
    }
}
