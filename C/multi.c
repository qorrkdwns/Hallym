#include <stdio.h>

int main() {
    int num1, num2, res;

    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &num1);

    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &num2);

    res = num1 * num2;
    printf("두 숫자의 곱은 %d입니다.\n", res);

    return 0;
}
