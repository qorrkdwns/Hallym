#include <stdio.h>

int main() {
    int matrix[2][3]; //2x3 크기의 행렬
    int sum = 0; //전체의 합
    int line1 = 0; //1번째 행의 합
    int line2 = 0; //2번째 행의 합

    printf("2x3 크기의 2차원 배열에 들어갈 숫자를 입력해주세요.\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%d][%d]의 숫자 : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);

            sum += matrix[i][j]; //총합 계산
            
            if(i == 0) {
                line1 += matrix[i][j]; //1번째 행의 합 계산
            } else {
                line2 += matrix[i][j]; //2번째 행의 합 계산
            }
        }   
    }

    printf("\n입력된 행렬\n"); //행렬 출력
    for (int i = 0; i < 2; i++) {          
        for (int j = 0; j < 3; j++) {      
            printf("%d ", matrix[i][j]);  
        }
        printf("\n");  
    }

    //결과 출력
    printf("행렬의 총합 : %d\n", sum);
    printf("1번째 행의 합 : %d\n", line1);
    printf("2번째 행의 합 : %d\n", line2);

    return 0;
}