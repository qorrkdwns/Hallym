/*
scanf 포맷 지정자
1.정수 (Integer)
    %d : 십진수 정수 (예: 10, -25, 0 등)
    %i : 십진수, 8진수, 16진수를 모두 처리하는 포맷입니다. (예: 0으로 시작하면 8진수로, 0x로 시작하면 16진수로 간주됨)

2. 문자 (Character)
    %c : 한 개의 문자를 입력받을 때 사용합니다

3.실수 (Floating Point Number)
    %f : 소수점이 있는 실수를 입력받을 때 사용합니다.
    %lf : 배정도 실수(double) 입력받을 때 사용합니다. (기본적으로 float을 사용하지만 double을 명시적으로 입력받을 때 사용)

4.문자열 (String)
    %s : 공백을 제외한 문자열을 입력받습니다. 공백이 포함된 문자열을 입력하려면 scanf 대신 fgets를 사용하는 것이 좋습니다.

5.긴 정수 (Long Integer)
    %ld : long int 타입의 값을 입력받습니다.
    %lld : long long int 타입의 값을 입력받습니다.

6.무부호 정수 (Unsigned Integer)
    %u : 양의 정수를 입력받습니다. (음수는 입력할 수 없습니다)

7.16진수 (Hexadecimal)
    %x : 16진수를 입력받습니다. (소문자 a-f)
    %X : 16진수를 입력받습니다. (대문자 A-F)

8.8진수 (Octal)
    %o : 8진수 입력받기
*/

#include <stdio.h>

int main() {
    int i = 0;
    float f = 0.0;
    char c;
    char str[100];

    // 정수 입력
    printf("정수를 입력하세요: ");
    scanf("%d", &i);

    // 실수 입력
    printf("실수를 입력하세요: ");
    scanf("%f", &f);

    // 문자 입력
    printf("문자를 입력하세요: ");
    scanf(" %c", &c);  // 앞의 공백은 이전 입력의 엔터를 처리하기 위한 방법

    // 문자열 입력
    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    // 출력
    printf("입력된 정수: %d\n", i);
    printf("입력된 실수: %f\n", f);
    printf("입력된 문자: %c\n", c);
    printf("입력된 문자열: %s\n", str);

    return 0;
}
