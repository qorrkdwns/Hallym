#include <stdio.h>

int main() {
    int num;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("입력한 숫자는 양수입니다.\n");
    } else if (num < 0) {
        printf("입력한 숫자는 음수입니다.\n");
    } else {
        printf("입력한 숫자는 0입니다.\n");
    }

    // switch-case 예제
    switch (num) {
        case 0:
            printf("0을 입력하셨습니다.\n");
            break;
        case 1:
            printf("1을 입력하셨습니다.\n");
            break;
        default:
            printf("0과 1이 아닌 다른 숫자를 입력하셨습니다.\n");
    }

    return 0;
}
