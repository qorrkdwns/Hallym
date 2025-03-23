#include <stdio.h>
#include <stdlib.h> //malloc, free 등을 사용하기 위한 헤더

int main() {
    int* arr = (int*)malloc(sizeof(int)*10);
    int size = 10; //배열의 사이즈 설정, 10으로 정해놓았음.
    int max = 0; //최대값
    
    if(arr == NULL) {
        printf("메모리 할당에 실패했습니다. \n");
        return 1; //프로그램 종료
    }

    printf("10개의 숫자를 입력하세요. : ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("입력된 숫자: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    max = arr[0]; //첫 번째로 입력된 숫자를 최대값에 임시 지정

    for(int i = 1; i < size; i++) {
        if(max < arr[i]) {
            max = arr[i]; //배열에 입력된 값을 순차적으로 크기 비교
        }
    }

    printf("입력한 숫자 중 최대값은 %d입니다.\n" , max);

    free(arr); //메모리 해제

    return 0;

}