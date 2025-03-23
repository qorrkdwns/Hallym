#ifndef ACCOUNT_MANAGER_H
#define ACCOUNT_MANAGER_H

#include "user.h"

// 계좌 관리 함수 선언
void save_to_file(const char* filename, User* users, int user_count);
void load_from_file(const char* filename, User* users, int* user_count);

#endif
