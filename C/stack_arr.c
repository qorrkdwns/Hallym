#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // 스택의 최대 크기

// 스택 구조체 정의
typedef struct {
    int *data; // 데이터를 저장할 배열
    int top;       // 스택의 맨 위를 가리키는 인덱스
    int capacity; // 스택의 용량
} Stack;

// 스택 초기화
void initStack(Stack *s, int size) {
    s->data = (int*)malloc(size * sizeof(int)); //입력받은 크기 만큼 동적 메모리 할당
    if(s->data == NULL) {
        printf("메모리 할당 실패\n");
        exit(1);
    }
    s->top = -1; // 스택은 초기화 시 비어있음 / ->는 포인터를 통해 구조체의 멤버에 접근할 때 사용하는 연산자
    s->capacity = size; //스택 용량 저장
}

// 스택이 비어있는지 확인
int isEmpty(Stack *s) {
    return s->top == -1; //스택이 비어있으면 반환
}

// 스택이 가득 찼는지 확인
int isFull(Stack *s) {
    return s->top ==  s->capacity - 1;
}

// Push 연산 : 스택의 맨 위에 데이터를 삽입
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("스택 오버플로우! 값을 추가할 수 없습니다.\n");
        return;
    }
    s->data[++(s->top)] = value; // top을 증가시키고 값 삽입
    printf("Pushed: %d\n", value);
}

// Pop 연산 : 스택의 맨 위 데이터를 제거하고 반환
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("스택 언더플로우! 값을 제거할 수 없습니다.\n");
        return -1; // 오류 반환값
    }
    return s->data[(s->top)--]; // 값을 반환하고 top 감소
}

// Peek 연산 : 스택의 맨 위 데이터를 제거하지 않고 확인
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("스택이 비어 있습니다.\n");
        return -1;
    }
    return s->data[s->top];
}

// 스택의 현재 상태 출력
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("스택이 비어 있습니다.\n");
        return;
    }
    printf("스택의 내용: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

//스택 메모리 해제
void freeStack(Stack *s) {
    free(s->data); //동적 메모리 해제
    s->data = NULL; //해제 후 포인터 초기화
    s->top = -1; 
    s->capacity = 0;
}

// 메인 함수
int main() {
    Stack s;
    int size;

    printf("스택의 크기를 입력하세요 : ");
    scanf("%d", &size);

    initStack(&s, size); //스택 초기화

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    display(&s);

    printf("Pop: %d\n", pop(&s));
    display(&s);

    printf("Peek: %d\n", peek(&s));
    display(&s);

    freeStack(&s); //스택 메모리 해제

    return 0;
}
