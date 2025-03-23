#include <stdio.h>
#include <string.h>
#include <stdbool.h> //bool 형식을 사용하기 위한 헤더(false, true)

#define MAX_SIZE 100 //100사이즈로 정의

//스택 구조체 정의
typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

//스택 초기화
void initStack(Stack *s) {
    s->top = -1; 
}

//스택이 비어있는지 확인
bool isEmpty(Stack *s) {
    return s->top == -1;
}

//스택이 가득 차있는지 확인
bool isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

//push 연산
void push(Stack *s, char value) {
    if(isFull(s)) {
        printf("Stack Overflow!\n");
        return; //오버플로우는 된 지점 직전까지 데이터 존재
    }
    s->data[++(s->top)] = value;
}

//pop 연산
char pop(Stack *s) {
    if(isEmpty(s)) {
        printf("Stack Underflow!\n");
        return '\0'; //오류 방지, isEmpty 시 데이터 존재하지 않으므로 '\0' 반환
    }
    return s->data[(s->top)--];
}

//peek 연산
char peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return '\0';
    }
    return s->data[s->top];
}

//괄호 짝 맞는지 확인
bool parenthesisPair(char open, char close) {
    return (open == '[' && close == ']') || (open == '{' && close == '}') || (open == '(' && close == ')');
}

//괄호 검사
bool checkParenthesis(const char *expression) {
    Stack s;
    initStack(&s);


    for(int i = 0; i < strlen(expression); i++) {
        char current = expression[i];

        //여는 괄호는 push
        if(current == '[' || current == '{' || current == '(') {
            push(&s, current);
        } 
        //닫는 괄호는 pop 후 비교
        else if(current == ']' || current =='}' || current == ')') {
            if(isEmpty(&s)) {
                return false; //스택이 비어있을 시 false
            }
            
            char top = pop(&s); //현재 s 스택에 들어가있는 데이터는 여는 괄호만 있으므로 pop시 여는 괄호가 반환
            if(!parenthesisPair(top, current)) { //그러므로 open은 top이 되고, close는 current가 됨
                return false; //짝이 맞지 않을 때 false
            }
        }
    }

    return isEmpty(&s); //모든 연산이 끝난 후 스택이 비어있어야함
}

int main() {
    char expression[MAX_SIZE];

    printf("괄호를 포함한 수식을 입력하세요 : ");
    scanf("%[^\n]", expression);

    if(checkParenthesis(expression)) {
        printf("괄호가 올바르게 짝지어졌습니다. \n");
    }else {
        printf("괄호가 올바르게 짝지어지지 않았습니다. \n");
    }

    return 0;
}