#include <iostream> //입출력 라이브러리
using namespace std;

int main() {
    int age;
    cout << "나이를 입력하세요: ";
    cin >> age;

    if (age < 13) {
        cout << "어린이입니다." << endl;
    } else if (age < 20) {
        cout << "청소년입니다." << endl;
    } else {
        cout << "성인입니다." << endl;
    }

    return 0;
}
