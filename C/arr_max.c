#include <stdio.h>

int main() {
    int n; //배열의 크기
    int max; //입력된 배열에서 가장 큰 값
    
    printf("배열의 크기를 입력하세요 : ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("배열의 크기는 1 이상이여야 합니다. \n");
        return 1;
    }

    int arr[n]; //입력된 크기의 배열

    printf("%d개의 정수를 입력하세요 :\n", n);
    for(int i = 0; i < n; i++) {
        printf("%d번째 정수 : ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0]; //최대값 초기화
    for(int i = 1; i < n; i++) { //i = 1부터 시작
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("입력된 배열에서 가장 큰 값은 %d입니다. \n", max);

    return 0;
}