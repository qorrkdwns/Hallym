#include "account.h"

// 계좌 초기화
void initialize_account(Account* account, int account_number, double initial_balance) {
    account->account_number = account_number;
    account->balance = initial_balance;
    account->transaction_count = 0;
}

