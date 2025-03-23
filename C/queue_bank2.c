#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // 큐의 최대 크기

typedef struct { // -> 연산자는 구조체 포인털를 통해 구조체의 멤버에 접근할 때 사용
    char data[MAX_SIZE][50]; // 고객 이름 저장 (최대 50자)
    int front; // 대기열의 시작 위치
    int rear;  // 대기열의 끝 위치
} Queue;

// 큐 초기화
void initQueue(Queue *q) {
    q->front = 0; //큐의 가장 처음 데이터, 큐가 비어있어도 항상 위치를 유지하기 때문에 0으로 초기화
    q->rear = -1; //큐의 끝부분, 초기에는 큐에 데이터가 없으므로 유효한 인덱스(-1)로 설정
}

// 큐가 비었는지 확인
int isEmpty(Queue *q) {
    return q->front > q->rear; //rear가 front값보다 작을 때는 큐가 비었을 때를 의미
}

// 큐가 가득 찼는지 확인
int isFull(Queue *q) {
    return q->rear == MAX_SIZE - 1;
}

// 고객 추가 (Enqueue)
void enqueue(Queue *q, char *name) {
    if (isFull(q)) {
        printf("대기열이 가득 찼습니다! 더 이상 추가할 수 없습니다.\n");
        return;
    }
    strcpy(q->data[++(q->rear)], name); // 이름을 큐의 rear에 복사, 전위 증가 연산자(++)를 사용했기 때문에 q->rear 값을 먼저 1증가
    printf("%s님이 대기열에 추가되었습니다.\n", name);
}

// 고객 호출 (Dequeue)
void dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("대기열이 비어 있습니다! 호출할 고객이 없습니다.\n");
        return;
    }
    printf("%s님, 창구로 오세요.\n", q->data[(q->front)++]); // front의 고객 호출
}

// 현재 대기열 상태 출력
void printQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("현재 대기열이 비어 있습니다.\n");
        return;
    }
    printf("현재 대기열: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%s ", q->data[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initQueue(&q);

    int choice;
    char name[50];

    while (1) {
        printf("\n1. 고객 추가 (Enqueue)\n");
        printf("2. 고객 호출 (Dequeue)\n");
        printf("3. 대기열 상태 출력\n");
        printf("4. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("고객 이름 입력: ");
                scanf("%s", name);
                enqueue(&q, name);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                printQueue(&q);
                break;
            case 4:
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("잘못된 선택입니다. 다시 입력해주세요.\n");
        }
    }

    return 0;
}
