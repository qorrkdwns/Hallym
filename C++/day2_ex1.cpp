#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "점수를 입력해주세요.";
    cin >> score;

    if(score < 0 || score > 100) {
     cout << "유효하지 않은 점수입니다. 0~100 사이의 점수를 입력해주세요." << endl;   
    }else if(score >= 90) {
        cout << "입력된 점수의 학점은 A입니다." << endl;
    }else if(score >= 80) {
        cout << "입력된 점수의 학점은 B입니다." << endl;
    }else if(score >= 70) {
        cout << "입력된 점수의 학점은 C입니다." << endl;
    }else if(score >= 60) {
        cout << "입력된 점수의 학점은 D입니다." << endl;
    }else {
        cout << "입력된 점수의 학점은 F입니다." << endl;
    }

    return 0;
}