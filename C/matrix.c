#include <stdio.h>

int main() {
    int matrix[2][3] = { 
        {1, 2, 3}, 
        {4, 5, 6} 
    };

    for (int i = 0; i < 2; i++) {          // 행 반복
        for (int j = 0; j < 3; j++) {      // 열 반복
            printf("%d ", matrix[i][j]);  // 각 요소 출력
        }
        printf("\n");  // 한 행 끝날 때 줄바꿈
    }

    return 0;
}
