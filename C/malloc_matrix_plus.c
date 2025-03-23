#include <stdio.h>
#include <stdlib.h>

//연습문제 1
//동적 메모리를 사용해 3x3 크기의 정수형 2차원 배열을 생성하고, 사용자 입력을 통해 값을 초기화한 뒤, 행별로 합계를 출력하는 프로그램을 작성하세요.

int main() {
    int rows = 3, cols = 3; //3x3 크기
    int** array; // 이중 포인터로 2차원 배열 생성
    // 1. 행 포인터 할당
    array = (int**)malloc(rows * sizeof(int*));
    if (array == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    // 2. 각 행에 열 포인터 할당
    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(cols * sizeof(int));
        if (array[i] == NULL) {
            printf("메모리 할당 실패\n");
            return 1;
        }
    }

    // 3. 배열 값 초기화 및 출력
    printf("배열 값을 입력하세요:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("입력한 배열:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    //4. 행 별 합계 출력
    for(int i = 0; i < rows; i++) {
        int sum = 0; //행 별 합계, 각 행마다 초기화
        for(int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
        printf("%d행의 합계는 %d입니다. \n", i + 1, sum);
    }

    // 4. 메모리 해제
    for (int i = 0; i < rows; i++) {
        free(array[i]); // 각 행의 메모리 해제
    }
    free(array); // 전체 배열 메모리 해제

    return 0;
}
