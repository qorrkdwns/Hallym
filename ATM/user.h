#ifndef USER_H
#define USER_H

#include "account.h"
#include "account_manager.h"

#define MAX_ACCOUNTS 10
#define MAX_NAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50

// 사용자 구조체
typedef struct {
    char username[MAX_NAME_LENGTH];      // 사용자 이름
    char password[MAX_PASSWORD_LENGTH];  // 사용자 비밀번호
    AccountManager manager;              // 계좌 관리자
} User;

#endif
