#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "나이를 입력하세요: ";
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << "아동 요금이 적용됩니다." << endl;
    } else if (age >= 13 && age <= 18) {
        cout << "청소년 요금이 적용됩니다." << endl;
    } else if (age > 18 && age < 60) {
        cout << "성인 요금이 적용됩니다." << endl;
    } else if (age >= 60) {
        cout << "경로 우대 요금이 적용됩니다." << endl;
    } else {
        cout << "유효하지 않은 나이입니다." << endl;
    }

    return 0;
}
