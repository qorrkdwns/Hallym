#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 100; i++) {
        if(i == 50) { //50에서 출력 중단
            cout << "50에서 출력을 종료합니다." << endl;
            break;
        }
        if(i % 10 == 0) { //10의 배수 건너뛰기
            continue;
        }
        cout << i << endl;
    }

    return 0;
}