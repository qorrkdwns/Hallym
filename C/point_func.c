#include <stdio.h>

// 포인터를 사용하여 값 변경
void changeValue(int *p) {
    *p = 20; // 포인터가 가리키는 변수의 값을 변경
}

int main() {
    int num = 10;

    printf("변경 전: %d\n", num);
    changeValue(&num); // num의 주소를 함수에 전달
    printf("변경 후: %d\n", num);

    return 0;
}
