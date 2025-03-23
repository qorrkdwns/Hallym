#ifndef TRANSACTION_H
#define TRANSACTION_H

#define MAX_DATE_LENGTH 11

// 거래 타입
typedef enum {
    DEPOSIT,    // 입금
    WITHDRAWAL  // 출금
} TransactionType;

// 거래 기록 구조체
typedef struct {
    char date[MAX_DATE_LENGTH];  // 거래 날짜
    TransactionType type;        // 거래 유형
    double amount;               // 거래 금액
} Transaction;

#endif
