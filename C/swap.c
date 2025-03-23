#include <stdio.h>

// 두 값을 교환하는 함수
void swap(int *x, int *y) {
    int temp = *x; //포인터를 사용하면 임시 변수를 사용하지 않고 두 변수의 값을 교환할 수 있음.(이론 상 가능, 안전하지 않기에 사용 X)
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    printf("교환 전: a = %d, b = %d\n", a, b);
    swap(&a, &b); // 주소를 전달, 포인터는 직접 참조로 원래 변수의 값을 직접 변경 가능
    printf("교환 후: a = %d, b = %d\n", a, b);

    return 0;
}
