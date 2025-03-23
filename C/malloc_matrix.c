#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int** array; // 이중 포인터로 2차원 배열 생성

    printf("행의 개수를 입력하세요: ");
    scanf("%d", &rows);
    printf("열의 개수를 입력하세요: ");
    scanf("%d", &cols);

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

    // 4. 메모리 해제
    for (int i = 0; i < rows; i++) {
        free(array[i]); // 각 행의 메모리 해제
    }
    free(array); // 전체 배열 메모리 해제 (행에 대한 배열과 각 행의 열의 대한 배열은 따로 할당된 메모리 공간이므로 따로 메모리 해제 해야함)

    return 0;
}
