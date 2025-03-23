/*문제 2: 최댓값 찾기
사용자로부터 정수 10개를 입력받아 배열에 저장한 후, 배열에서 가장 큰 값을 출력하는 프로그램을 작성하세요.*/
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; //정수 10개
    int arr[SIZE];
    int max; // 최댓값

    cout << "10개의 정수를 입력하세요. : " << endl;

    for(int i = 0; i < SIZE; i++) {
        cout << i+1 << "번째 정수 : ";
        cin >> arr[i];

        if (cin.fail()) { // 유효하지 않은 입력 처리
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "유효하지 않은 입력입니다. 다시 입력해주세요." << endl;
            i--; // 현재 반복 다시 실행
            continue;
        }
    }

    max = arr[0]; //최댓값 초기화
     for(int i = 0; i < SIZE; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
     }

    cout << "입력받은 정수 : ";
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "배열에서 가장 큰 값 : " << max << endl;

    return 0;
}