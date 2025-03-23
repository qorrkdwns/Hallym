#include "user.h"
#include <string.h>
#include <stdio.h>

// 사용자 초기화
void initialize_user(User* user, const char* username, const char* password) {
    strcpy(user->username, username);
    strcpy(user->password, password);
    user->account_count = 0;
}

// 사용자 계좌 추가
void add_account(User* user, int account_number, double initial_balance) {
    if (user->account_count < MAX_ACCOUNTS) {
        Account* acc = &user->accounts[user->account_count++];
        acc->account_number = account_number;
        acc->balance = initial_balance;
        acc->transaction_count = 0;
    }
}
