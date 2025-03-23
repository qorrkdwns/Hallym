#include <stdio.h>
#include <stdlib.h> //malloc, free 등을 사용하기 위한 헤더
#include <string.h> //strlen 함수를 사용하기 위한 헤더

int main() {
    char* str; //동적 문자열 포인터
    char temp[100]; //임시로 입력받을 배열 (최대 99글자 + 널 문자)
    int length; //문자열 길이
   
    printf("문자열을 입력하세요.(최대 99자): ");
    fgets(temp, sizeof(temp), stdin); //입력 문자열을 임시 배열에 저장 / stdin : 표준 입력에 대한 포인터
    temp[strcspn(temp, "\n")] = '\0'; // 개행 문자 제거, 제거 이유는 입력 시에 엔터키 누르는 것 까지 입력되기 때문.
   
    length = strlen(temp); //문자열 길이 계산
    str = (char*)malloc(sizeof(char) * (length + 1)); //문자열 길이에 맞게 동적 메모리 할당(+1은 널 문자)

    if(str == NULL) {
        printf("메모리 할당에 실패했습니다. \n");
        return 1; //프로그램 종료
    }

    strcpy(str, temp); //입력 받은 문자열 temp를 동적 메모리 문자열 str로 복사

    for(int i = 0; i < length / 2; i++) { //문자열 뒤집기
        char tempChar = str[i]; //temp는 이미 있기에 tempChar로 지정
        str[i] = str[length - 1 - i]; //length - 1인 이유는 널 문자 제외하기 위함
        str[length - 1 - i] = tempChar;
    }
    
    printf("입력된 문자열 : %s\n" , temp);
    printf("거꾸로 된 문자열 : %s\n", str);

    free(str); //동적 메모리 해제

    return 0;
}