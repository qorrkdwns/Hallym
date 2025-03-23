#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "나이를 입력해주세요. : ";
    cin >> age;

    if(age >= 0 && age <= 5) {
        cout << age << "세는 무료입니다." << endl;
    }else if(age <= 12) {
        cout << age << "세는 아동 요금 500원입니다." << endl;
    }else if(age <= 18) {
        cout << age << "세는 청소년 요금 1000원입니다." << endl;
    }else if(age >= 19) {
        cout << age << "세는 성인 요금 2000원입니다." << endl;
    }else {
        cout << "유효하지 않은 나이입니다." << endl;
    }

    return 0;
}