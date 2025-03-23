#include <stdio.h>

int main() {
    int arr[5];
    int max;

    printf("5개의 숫자를 입력해주세요.\n");
    for(int i = 0; i < 5; i++) {
        printf("%d번째 숫자 : ", i+1);
        scanf("%d", &arr[i]); //배열의 첫 번째자리는 arr[0]이므로 주의
    }
    
    max = arr[0]; //배열의 첫 번째 숫자를 max로 설정

    for(int i = 1; i < 5; i++) {
     if(arr[i] > max) { //배열의 i번째 값이 max보다 클 때
            max = arr[i]; //max를 배열의 i번째 값으로 변경
        }
    }

    printf("5개의 숫자 중 가장 큰 수는 %d", max);

    return 0;
}