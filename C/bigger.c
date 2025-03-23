#include <stdio.h>

//함수 선언
int bigger(int a, int b);

int main() {
    int a, b;
    int result;
    
    printf("첫 번째 숫자를 입력해주세요 : ");
    scanf("%d", &a);
    printf("두 번째 숫자를 입력해주세요 : ");
    scanf("%d", &b);

    result = bigger(a, b);

    
    printf("입력된 두 숫자 중 큰 숫자는 %d입니다. \n", result);
   
    
    return 0;
}

int bigger(int a, int b) {
    if(a > b) {
        return a;
    }else  {
        return b;
    }
}