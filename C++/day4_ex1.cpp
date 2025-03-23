/*문제 1: 배열 요소의 합 구하기
사용자로부터 정수 5개를 입력받아 배열에 저장한 후, 배열 요소의 합을 출력하는 프로그램을 작성하세요.*/
#include <iostream>
using namespace std;

int main() {
    int arr[5]; //문제에서 정수 5개를 입력받으라고 명시를 했기 때문에 상수로 지정해도 되고 지금 이대로 해도 됨.
    int sum = 0;

    cout << "정수 5개를 입력하세요. " << endl;
    
    for(int i = 0; i < 5; i++) {
        cout << i+1 << "번째 정수 : ";
        cin >> arr[i];
       
        if (cin.fail()) { // 유효하지 않은 입력 처리
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "유효하지 않은 입력입니다. 다시 입력해주세요." << endl;
            i--; // 현재 반복 다시 실행
            continue;
        }

        sum += arr[i];
    }

    cout << "입력된 정수 : ";

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " "; 
    }

    cout << endl;
    cout << "합 : " << sum << endl;

    return 0;
}