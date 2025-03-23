#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "정수를 입력해주세요 . ";
    cin >> num;

    if(num == 0) {
        cout << "입력 값은 0입니다." << endl;
    }else if(num > 0) {
        cout << num << "은(는) 양수입니다." << endl;
    }else {
        cout << num << "은(는) 음수입니다." << endl;
    }
    
    return 0;
}