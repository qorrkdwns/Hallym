#include <stdio.h>

void twice(float *a) {
    *a = *a * 2; //포인터로 참조한 값에 2를 곱함.
}

int main() {
    float a;
    
    printf("숫자를 입력하세요. : ");
    scanf("%f", &a);

    twice(&a); //a의 주소를 전달

    printf("입력된 숫자의 두 배는 %.2f입니다. \n", a);


    return 0;
}