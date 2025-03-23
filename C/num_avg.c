#include <stdio.h>

float average(float a, float b, float c);

int main() {
    float a,b,c;
    float avg;

    printf("첫 번째 숫자를 입력하세요 : ");
    scanf("%f", &a); //입력 포맷에 소수점 자릿수를 지정해서는 안 됨.(오류 발생)
    printf("두 번째 숫자를 입력하세요 : ");
    scanf("%f", &b);
    printf("세 번째 숫자를 입력하세요 : ");
    scanf("%f", &c);

    avg = average(a,b,c);

    printf("세 숫자의 평균은 %.2f입니다. \n", avg);

    return 0;
}

float average(float a, float b, float c) {
    return (a+b+c) / 3;
}