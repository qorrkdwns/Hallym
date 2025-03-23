#include <stdio.h>

int* largest(int *a, int *b, int *c) { //세 숫자 중 가장 큰 값을 반환하는 함수
    if(*a >= *b && *a >= *c) { //a가 b보다 크거나 같고, c보다 크거나 같다면
        return a;
    }else if(*b >= *a && *b >= *c)
     {
        return b;
     } else {
        return c;
     }
}

int main() {
    int a = 5;
    int b = 10;
    int c = 3;
    int *large;

    printf("%d, %d, %d \n", a, b, c);
    
    large = largest(&a, &b, &c); //교환 함수 호출

    printf("세 숫자 중 가장 큰 값은 : %d\n", *large);
    
    return 0;
}