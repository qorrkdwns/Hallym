#include <stdio.h>
#include <stdlib.h> //malloc, free, rand 등을 사용하기 위한 헤더
#include <time.h> //time을 사용하기 위한 헤더

int main() {
    int students, subjects;
    int** scores; // 2차원 동적 배열 포인터 선언
    int* totalScores; // 학생별 총점 저장 배열
    float* averages; // 학생별 평균 저장 배열
    int* max; // 최고 점수
    int* min; // 최저 점수
    srand(time(NULL)); //시드 초기화

    printf("학생 수를 입력하세요: ");
    scanf("%d", &students);
    printf("과목 수를 입력하세요: ");
    scanf("%d", &subjects);

    // 동적 메모리 할당
    scores = (int**)malloc(students * sizeof(int*));
    totalScores = (int*)malloc(students * sizeof(int));
    averages = (float*)malloc(students * sizeof(float));
    max = (int*)malloc(subjects * sizeof(int*));
    min = (int*)malloc(subjects * sizeof(int*));

    if (scores == NULL || totalScores == NULL || averages == NULL || max == NULL || min == NULL) { //동적 메모리 할당 실패
        printf("메모리 할당 실패!\n");
        return 1;
    }

    for (int i = 0; i < students; i++) {
        scores[i] = (int*)malloc(subjects * sizeof(int)); //각 학생 행에 과목 열 포인터 할당
        if (scores[i] == NULL) {
            printf("메모리 할당 실패!\n");
            return 1;
        }
    }

    // 점수 입력 받기 (랜덤 점수 생성)
    for (int i = 0; i < students; i++) {
        printf("학생 %d의 점수 : ", i + 1);
        for (int j = 0; j < subjects; j++) {
            scores[i][j] = rand() % 101; //0 ~ 100 범위의 난수
            printf("%d ", scores[i][j]); 
        }
        printf("\n");
    }

    //과목별 최고 점수, 최저 점수 초기화
    for(int i = 0; i < subjects; i++) {
        max[i] = scores[0][i]; //첫 번째 학생의 점수로 초기화
        min[i] = scores[0][i];
    }

    // 총점, 평균, 최고 점수, 최저 점수 계산
    for (int i = 0; i < students; i++) {
        totalScores[i] = 0; // 학생별 총점 초기화, 초기값을 초기화
        for (int j = 0; j < subjects; j++) {
            totalScores[i] += scores[i][j];
            if(max[i] < scores[i][j]) max[i] = scores[i][j];
            if(min[i] > scores[i][j]) min[i] = scores[i][j];
        }
        averages[i] = (float)totalScores[i] / subjects; // 학생별 평균 계산
    }

    // 결과 출력
    printf("\n학생별 총점과 평균:\n");
    for (int i = 0; i < students; i++) {
        printf("학생 %d - 총점: %d, 평균: %.2f\n", i + 1, totalScores[i], averages[i]);
    }

    //과목 별 최고 점수, 최저 점수 출력
    printf("\n과목별 최고 점수와 최저 점수:\n");
    for(int i = 0; i < subjects; i++) {
        printf("과목 %d의 최고 점수 : %d, 최저 점수 : %d\n", i + 1, max[i], min[i]);
    }

    // 메모리 해제
    for (int i = 0; i < students; i++) {
        free(scores[i]); //score행의 메모리 해제
    }

    free(scores);
    free(totalScores);
    free(averages);
    free(max);
    free(min);

    return 0;
}
