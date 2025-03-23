#include <stdio.h>

int main() {
    int age;
    printf("나이를 입력하세요: ");
    scanf("%d", &age); // 사용자로부터 정수를 입력받아 age에 저장
    printf("입력된 나이는 %d살입니다.\n", age);
    return 0; // 프로그램이 정상 종료되었음을 운영체제에 알림
}
