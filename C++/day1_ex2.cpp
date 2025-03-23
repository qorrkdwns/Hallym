#include <iostream>
using namespace std;

int main() {
    const int current_year = 2024; //현재 연도를 상수
    int born;
    int age;
    
    while(true) { //무한 반복문
        cout << "출생 연도를 입력하세요. : ";
        cin >> born;

        if(born > current_year) { //출생 연도 입력값 검증
            cout << "출생 연도가 올바르지 않습니다. 다시 입력해주세요." << endl;
        } else {
            break;
        }

    }

    age = current_year - born;

    cout << born << "년도 출생의 현재 나이는 만 " << age <<"세입니다." << endl;

    return 0;
}