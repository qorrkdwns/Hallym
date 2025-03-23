#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100 // 큐의 최대 크기

// 큐 구조체 정의
typedef struct {
    char data[MAX_SIZE][50]; // 문자열 데이터를 저장할 배열 / 문자열 데이터를 저장하기에 2차원 배열 사용
    int front;  // 큐의 앞을 가리키는 인덱스
    int rear;   // 큐의 뒤를 가리키는 인덱스
} Queue;

// 큐 초기화
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = 0; // 큐가 비어있을 때 front와 rear는 동일
}

// 큐가 비어있는지 확인
int isEmpty(Queue *q) {
    return q->front == q->rear; // front와 rear가 같으면 큐는 비어 있음
}

// 큐가 가득 찼는지 확인
int isFull(Queue *q) {
    return q->rear == MAX_SIZE; // rear가 최대 크기라면 큐가 가득 찬 것
}

// enqueue 연산: 큐에 데이터를 추가
void enqueue(Queue *q, char *name) {
    if (isFull(q)) {
        printf("대기열이 가득 찼습니다! 더 이상 추가할 수 없습니다.\n");
        return;
    }
    strcpy(q->data[q->rear], name); // rear 위치에 고객 이름 추가
    q->rear++; // rear를 증가
    printf("고객 %s이(가) 대기열에 추가 되었습니다. \n", name);
}

// dequeue 연산: 큐에서 데이터를 제거
char* dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("대기하고 계신 고객님이 없습니다! 호출할 고객이 없습니다.\n");
        return NULL;
    }
    printf("고객 %s이(가) 호출되었습니다. \n", q->data[q->front]); // 첫번째 고객 출력
    q->front++; // front를 증가시켜 고객 제거
}

//대기열 출력
void printfQueue(Queue *q) {
    if(isEmpty(q)) {
        printf("현재 대기열이 없습니다. \n");
        return;
    }
    printf("현재 대기열 : \n");
    for(int i = q->front; i < q->rear; i++) {
        printf("%s\n", q->data[i]);
    }
}

int main() {
    Queue q; //대기열 큐
    initQueue(&q); //큐 초기화

    int input; //입력받을 변수
    char name[50]; //이름

    while(1) {
        printf("\n1. 고객 추가\n");
        printf("2. 고객 호출\n");
        printf("3. 종료\n");
        printf("메뉴를 선택하세요 : ");
        scanf("%d", &input);

        switch (input) {
        case 1:
            printf("고객 이름을 입력하세요 : ");
            scanf("%s", &name);
            enqueue(&q, name);
            printfQueue(&q);
            break;
        case 2:
            dequeue(&q);
            printfQueue(&q);
            break;
        case 3:
            printf("은행 대기열 프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 숫자를 입력하셨습니다. 다시 입력해주세요.\n");
        }
    }

    return 0;
}
