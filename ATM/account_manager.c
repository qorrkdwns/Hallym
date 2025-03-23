#include "account_manager.h"
#include <stdio.h>
#include <string.h>

// 사용자 데이터를 파일에 저장
void save_to_file(const char* filename, User* users, int user_count) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        perror("파일 저장 실패");
        return;
    }
    fprintf(file, "%d\n", user_count);
    for (int i = 0; i < user_count; i++) {
        fprintf(file, "%s %s %d\n", users[i].username, users[i].password, users[i].account_count);
        for (int j = 0; j < users[i].account_count; j++) {
            Account* acc = &users[i].accounts[j];
            fprintf(file, "%d %.2f %d\n", acc->account_number, acc->balance, acc->transaction_count);
            for (int k = 0; k < acc->transaction_count; k++) {
                Transaction* t = &acc->transactions[k];
                fprintf(file, "%s %d %.2f\n", t->date, t->type, t->amount);
            }
        }
    }
    fclose(file);
}

// 사용자 데이터를 파일에서 불러오기
void load_from_file(const char* filename, User* users, int* user_count) {
    printf("파일 열기 시도: %s\n", filename);
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("파일을 열 수 없습니다: %s\n", filename);
        *user_count = 0;
        return;
    }
    printf("파일 로드 중...\n"); // 디버깅 출력 추가
    fscanf(file, "%d", user_count); // 사용자 수 읽기
    printf("로드된 사용자 수: %d\n", *user_count);

    for (int i = 0; i < *user_count; i++) {
        fscanf(file, "%s %s", users[i].username, users[i].password); // 사용자 이름, 비밀번호 읽기
        printf("사용자 로드: %s, %s\n", users[i].username, users[i].password);

        initialize_manager(&users[i].manager); // 사용자 매니저 초기화
        fscanf(file, "%d", &users[i].manager.num_accounts); // 계좌 수 읽기
        printf("계좌 수: %d\n", users[i].manager.num_accounts);

        for (int j = 0; j < users[i].manager.num_accounts; j++) {
            fscanf(file, "%d %lf", &users[i].manager.accounts[j].account_number, &users[i].manager.accounts[j].balance);
            printf("계좌 로드: 계좌번호=%d, 잔액=%.2f\n", 
                   users[i].manager.accounts[j].account_number, 
                   users[i].manager.accounts[j].balance);
        }
    }

    fclose(file);
    printf("파일 로드 완료\n"); // 디버깅 출력 추가
}
