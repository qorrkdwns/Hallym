#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// 스택 구조체 정의
typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

// 스택 초기화
void initStack(Stack *s) {
    s->top = -1;
}

// 스택이 비어있는지 확인
int isEmpty(Stack *s) {
    return s->top == -1;
}

// 스택이 가득 찼는지 확인
int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Push 연산
void push(Stack *s, char value) {
    if (isFull(s)) {
        printf("스택이 가득 찼습니다!\n");
        exit(1);
    }
    s->data[++(s->top)] = value;
}

// Pop 연산
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("스택 언더플로우!\n");
        exit(1);
    }
    return s->data[(s->top)--];
}

// Peek 연산
char peek(Stack *s) {
    if (isEmpty(s)) return '\0';
    return s->data[s->top];
}

// 괄호 짝 검사 함수
int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int checkParentheses(char *expression) {
    Stack s;
    initStack(&s);

    for (int i = 0; i < strlen(expression); i++) {
        char ch = expression[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            // 열리는 괄호는 스택에 저장
            push(&s, ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            // 닫히는 괄호일 때
            if (isEmpty(&s)) {
                return 0; // 스택이 비어 있으면 짝이 맞지 않음
            }
            char open = pop(&s);
            if (!isMatchingPair(open, ch)) {
                return 0; // 짝이 맞지 않음
            }
        }
    }

    // 모든 검사가 끝난 후 스택이 비어 있어야 올바른 괄호
    return isEmpty(&s);
}

// 메인 함수
int main() {
    char expression[MAX_SIZE];

    printf("수식을 입력하세요: ");
    fgets(expression, MAX_SIZE, stdin);

    if (checkParentheses(expression)) {
        printf("올바른 괄호입니다.\n");
    } else {
        printf("괄호가 올바르지 않습니다.\n");
    }

    return 0;
}
