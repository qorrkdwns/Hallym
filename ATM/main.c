#include <stdio.h>
#include "user.h"
#include "account_manager.h"

#define FILENAME "users_data.txt"

int main() {
    printf("ATM 프로그램을 시작합니다.\n");

    User users[MAX_USERS] = {0};
    int user_count = 0;

    printf("파일에서 데이터 로드 시도 중...\n");
    load_from_file(FILENAME, users, &user_count);

    printf("로드된 사용자 수: %d\n", user_count); // 확인
    for (int i = 0; i < user_count; i++) {
        printf("사용자: %s, 비밀번호: %s\n", users[i].username, users[i].password);
        printf("계좌 수: %d\n", users[i].manager.num_accounts);

        for (int j = 0; j < users[i].manager.num_accounts; j++) {
            printf("계좌 %d: 계좌번호=%d, 잔액=%.2f\n", 
                   j + 1, 
                   users[i].manager.accounts[j].account_number, 
                   users[i].manager.accounts[j].balance);
        }
    }

    printf("프로그램 종료\n");
    return 0;
}
