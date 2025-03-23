#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "점수를 입력하세요 (0~100): ";
    cin >> score;

    if (score >= 0 && score <= 100) { // 점수가 유효한지 확인
        if (score >= 90) {
            cout << "학점: A" << endl;
        } else if (score >= 80) {
            cout << "학점: B" << endl;
        } else if (score >= 70) {
            cout << "학점: C" << endl;
        } else if (score >= 60) {
            cout << "학점: D" << endl;
        } else {
            cout << "학점: F" << endl;
        }
    } else {
        cout << "유효하지 않은 점수입니다. 0~100 사이로 입력해주세요." << endl;
    }

    return 0;
}
