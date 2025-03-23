#include <stdio.h>
#include <stdlib.h>  // abs() 함수 사용을 위한 헤더

int main() {
    int num1, num2, res;

    // 첫 번째 숫자 입력
    printf("첫 번째 숫자를 입력하세요: ");
    if (scanf("%d", &num1) != 1) { //scanf는 입력을 성공적으로 읽으면 입력된 항목의 갯수를 반환하는데, 
                                   //지금처럼 정수 하나를 입력 받았다면 1, 잘못된 입력이거나 예상한 데이터 타입이 아닌 경우는 scanf가 읽은 항목의 갯수를 반환
        printf("잘못된 입력입니다. 숫자를 입력해주세요.\n");
        return 1; // 오류 코드로 종료
    }

    // 두 번째 숫자 입력
    printf("두 번째 숫자를 입력하세요: ");
    if (scanf("%d", &num2) != 1) {
        printf("잘못된 입력입니다. 숫자를 입력해주세요.\n");
        return 1; // 오류 코드로 종료
    }

    // 두 숫자의 차이의 절댓값 계산
    res = abs(num1 - num2);

    // 결과 출력
    if (num1 != num2) {
        printf("두 숫자의 차이는 %d입니다.\n", res); // 차이 출력
    } else {
        printf("두 숫자는 같습니다.\n");
    }

    return 0;
}

/* 내가 만들었던 기존 코드
#include <stdio.h>

int main() {
    int num1, num2, res;

    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &num1);

    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        res = num1 - num2;
        printf("두 숫자의 차이는 %d만큼 납니다.\n", res);
    } else if(num1 < num2) {
        res = num2 - num1;
        printf("두 숫자의 차이는 %d만큼 납니다.\n", res);
    }else {
        printf("두 숫자는 같습니다.\n");
    }

    return 0;
}
*/