#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    // 사용자로부터 입력받기
    printf("이름을 입력하세요: ");
    scanf("%s", name);
    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    // 파일에 기록
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("파일 열기에 실패했습니다.\n");
        return 1;
    }
    fprintf(file, "이름: %s\n나이: %d\n", name, age);
    fclose(file);

    // 파일에서 읽기
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("파일 열기에 실패했습니다.\n");
        return 1;
    }
    char buffer[100]; //최대 99개의 문자를 저장할 수 있음. 마지막 1바이트는 문자열의 종료 문자인 \0
    printf("\n파일 내용:\n");
    while (fgets(buffer, 100, file) != NULL) { // 한 줄씩 읽기
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}
