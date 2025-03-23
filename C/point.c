//포인터는 변수의 메모리 주소를 저장하는 변수
#include <stdio.h>

int main() {
    int a = 10;
    int *p; // 포인터 선언, 여기서 p는 정수형 변수의 주소를 저장하는 포인터
    p = &a; // 변수 a의 주소를 p에 저장

    printf("a의 값: %d\n", a);          // a의 값 출력
    printf("a의 주소: %p\n", &a);       // a의 주소 출력
    printf("p가 가리키는 값: %d\n", *p); // 포인터 p가 가리키는 값 출력

    return 0;
}
