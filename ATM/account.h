#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "transaction.h"

#define MAX_TRANSACTIONS 100

// 계좌 구조체
typedef struct {
    int account_number;                // 계좌 번호
    double balance;                    // 잔액
    Transaction transactions[MAX_TRANSACTIONS]; // 거래 내역
    int transaction_count;             // 거래 내역 수
} Account;

#endif
