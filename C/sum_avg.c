#include <stdio.h>

int main() {
    int arr[10];
    int count = 0; //입력된 숫자 개수 카운트
    int sum = 0;
    float avg;

    printf("10개의 숫자를 입력해주세요.(-1을 입력하면 그 즉시 입력을 중지)\n");

    for(int i = 0; i < 10; i++) {
        printf("%d번째 숫자 : ", i+1);
        scanf("%d", &arr[i]);
        
        if(arr[i] == -1) { // -1 입력 시 종료
            break;
        }

        sum += arr[i]; //총합에 추가
        count++; //입력된 숫자만 카운트
    }

    if(count > 0) { //유효한 숫자가 입력되었을 때
        avg = sum / count;
        printf("%d개의 숫자의 합은 %d\n", count , sum);
        printf("평균은 %.2f\n", avg);
    } else {
        printf("입력된 숫자가 없습니다. \n");
    }
    
    return 0;
}