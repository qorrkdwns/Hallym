/*
문제 1: if와 switch의 차이점은 무엇인가요?
답:

if: 조건식을 사용하여 여러 조건에 대해 분기할 때 사용합니다. 조건이 복잡하거나 범위가 연속적인 경우 유용합니다.
예: if, else if, else를 사용하여 여러 조건을 처리할 수 있습니다.
switch: 주어진 변수나 표현식의 값에 따라 여러 가지 분기처리를 할 때 사용합니다. 각 경우는 고정된 값과 비교하며, 연속된 값을 비교할 때 주로 사용됩니다.
예: switch(variable)에서 case를 사용하여 각 값에 대한 처리를 합니다.
차이점:

if는 범위나 복잡한 조건을 처리할 때 유리하지만, switch는 고정된 값에 대한 비교를 할 때 더 직관적이고 효율적입니다.
문제 2: 입력받은 숫자가 짝수인지 홀수인지 판단하는 조건문을 작성하세요.
답:

c
코드 복사
#include <stdio.h>

int main() {
    int num;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("입력한 숫자는 짝수입니다.\n");
    } else {
        printf("입력한 숫자는 홀수입니다.\n");
    }

    return 0;
}
설명:

숫자가 2로 나누어떨어지면 짝수이고, 그렇지 않으면 홀수입니다.
num % 2 == 0은 숫자가 2로 나누어떨어지는지 확인하는 조건입니다.


문제 3: 프로그램에서 break가 없는 switch-case문은 어떻게 동작하나요?
답:
switch-case문에서 break가 없으면, "fall through" 현상이 발생하여 일치하는 case 이후의 모든 코드가 실행됩니다.
즉, break가 없으면 해당 case에서 실행이 끝난 후에도 다음 case문으로 계속 실행이 넘어가게 됩니다.

예시 코드:

c
코드 복사
#include <stdio.h>

int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            printf("1을 선택했습니다.\n");
        case 2:
            printf("2를 선택했습니다.\n");
        case 3:
            printf("3을 선택했습니다.\n");
        default:
            printf("올바른 선택이 아닙니다.\n");
    }

    return 0;
}
출력:

코드 복사
2를 선택했습니다.
3을 선택했습니다.
올바른 선택이 아닙니다.
설명:
choice가 2일 때 case 2부터 실행되며, break가 없으므로 계속해서 case 3과 default까지 실행됩니다.
*/