#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char subject[50];
    float score;

    // 사용자로부터 입력받기
    printf("과목명을 입력하세요: ");
    scanf("%s", &subject);
    printf("점수를 입력하세요: ");
    scanf("%f", &score);

    // 파일에 기록
    file = fopen("scores.txt", "a"); //파일 작업 모드 : r(읽기 전용), w(쓰기 전용, 기존 내용 삭제), a(추가 전용), r+(읽기/쓰기), w+(읽기/쓰기, 기존 내용 삭제), a+(읽기/추가)
    if (file == NULL) {
        printf("파일 열기에 실패했습니다.\n");
        return 1;
    }
    fprintf(file, "과목: %s\n점수 : %.2f\n", subject, score);
    fclose(file);

    // 파일에서 읽기
    file = fopen("scores.txt", "r");
    if (file == NULL) {
        printf("파일 열기에 실패했습니다.\n");
        return 1;
    }
    
    printf("저장된 과목과 점수 :\n");

    while(fscanf(file, "과목 : %s\n점수 : %f\n", subject, &score) != EOF) { // fscanf는 데이터가 저장될 변수의 메모리 주소를 요구하므로 숫자를 저장하려면 & 필요 / != EOF : End of File(파일의 끝까지) 반복
        printf("과목 : %s, 점수 : %.2f\n", subject, score);
    }

    fclose(file);

    return 0;
}
