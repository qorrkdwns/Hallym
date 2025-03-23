#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100 // 스택의 최대 크기

// 스택 구조체 정의
typedef struct {
    char data[MAX_SIZE]; // 데이터를 저장할 배열
    int top;       // 스택의 맨 위를 가리키는 인덱스
} Stack;

// 스택 초기화
void initStack(Stack *s) {
    s->top = -1; // 스택은 초기화 시 비어있음 / ->는 포인터를 통해 구조체의 멤버에 접근할 때 사용하는 연산자
}

// 스택이 비어있는지 확인
int isEmpty(Stack *s) {
    return s->top == -1; //스택이 비어있으면 반환
}

// 스택이 가득 찼는지 확인
int isFull(Stack *s) {
    return s->top ==  MAX_SIZE - 1;
}

// Push 연산 : 스택의 맨 위에 데이터를 삽입
void push(Stack *s, char value) {
    if (isFull(s)) {
        printf("스택 오버플로우! 값을 추가할 수 없습니다.\n");
        return;
    }
    s->data[++(s->top)] = value; // top을 증가시키고 값 삽입
}

// Pop 연산 : 스택의 맨 위 데이터를 제거하고 반환
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("스택 언더플로우! 값을 제거할 수 없습니다.\n");
        return '\0'; // 오류 반환값
    }
    return s->data[(s->top)--]; // 값을 반환하고 top 감소
}

// Peek 연산 : 스택의 맨 위 데이터를 제거하지 않고 확인
char peek(Stack *s) {
    if (isEmpty(s)) {
        printf("스택이 비어 있습니다.\n");
        return '\0';
    }
    return s->data[s->top];
}


// 메인 함수
int main() {
    Stack s;
    char data[MAX_SIZE];

    initStack(&s); //스택 초기화

    printf("문자열을 입력하세요 . ");
    scanf("%[^\n]", data); //띄어쓰기 포함 수식을 입력받기 위해 "%[^\n]"을 사용

    for(int i = 0; i < strlen(data); i++) {
        push(&s, data[i]);
    }

    printf("문자열 역순 : ");
    while(!isEmpty(&s)) {
        printf("%c", pop(&s)); //pop하며 출력
    }
    printf("\n");

    return 0;
}
