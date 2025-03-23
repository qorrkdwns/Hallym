#include <stdio.h>

int main() {
    int balance = 1; // 초기 잔액
    int choice; //선택지 번호
    int amount; //입금 또는 출금할 금액

    while (1) { //항상 참, 무한 루프
        printf("\n=== ATM ===\n");
        printf("1. 입금\n");
        printf("2. 출금\n");
        printf("3. 잔액 조회\n");
        printf("4. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

       switch (choice) {
        case 1: //입금
            printf("입금할 금액을 입력하세요. : ");
            scanf("%d", &amount);
            
            if(amount > 0) {
                printf("%d원이 입금되었습니다. \n", amount);
                balance += amount;
            } else {
                printf("올바른 금액이 입력되지 않았습니다.\n");
            }
            break; //switch문 종료

        case 2: //출금
            printf("출금할 금액을 입력하세요. : ");
            scanf("%d", &amount);

            if (amount > 0) {
               if(balance >= amount) {
                    balance -= amount;
                    printf("%d원이 출금되었습니다. \n", amount);
               }else {
                    printf("잔액이 부족합니다.\n");
               }
            } else {
                printf("올바른 금액이 입력되지 않았습니다. \n");
            }
            break; //switch문 종료
        
        case 3: //잔액 조회
            printf("현재 잔액은 %d원입니다. \n", balance);
            break; //switch문 종료
        
        case 4: //종료
            printf("ATM 프로그램을 종료합니다. \n");
            return 0; //조건문 종료 break가 아닌 return 0를 통해 메서드를 종료
            
       default:
            printf("잘못된 선택지를 입력하셨습니다. 다시 입력해주세요. \n");
       }
    }

    return 0;

}
