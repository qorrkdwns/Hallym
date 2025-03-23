#include <iostream>
using namespace std;

int main() {
    int num;

    while(true) {
        cout << "정수를 입력해주세요. (0을 입력하면 종료) : ";
        cin >> num;
        
        // 입력 스트림 오류 확인
        if (cin.fail()) { //cin.fail() : 입력값이 스트림에서 처리할 수 없는 데이터 타입일 때 true.
            cin.clear(); // 입력 스트림 초기화하여 오류 플래그 해제
            cin.ignore(1000, '\n'); // 남아 있는 입력 무시, 여기서는 최대 1000개의 문자를 버퍼에서 삭제하거나 \n(엔터 키)를 만날 때까지 입력 무시. numeric_limits<streamsize>::max()를 사용해 무제한으로 설정 가능
            cout << "유효하지 않은 입력입니다. 정수를 입력해주세요." << endl;
            continue; // 다시 입력 요청
        }

        if(num == 0) {
            cout << "0을 입력하셨습니다. 프로그램을 종료합니다." << endl;
            break;
        }
        
        if(num % 2 == 0) {
            cout << num << "은(는) 짝수입니다." <<endl;
        }else {
            cout << num << "은(는) 홀수입니다." <<endl;
        }
    }

    return 0;
}