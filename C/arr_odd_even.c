#include <stdio.h>

int main() {
    int arr[10]; //10개의 정수 배열
    int odd = 0; //홀수 개수
    int even = 0; //짝수 개수

    printf("10개의 정수를 입력해주세요. \n");

    for(int i = 0; i < 10; i++) {
        printf("%d번째 정수 : ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }else {
            odd++;
        }
    }

    printf("짝수의 개수 : %d \n", even);
    printf("홀수의 개수 : %d\n", odd);

    return 0;
}