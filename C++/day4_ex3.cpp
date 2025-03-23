/*문제 3: 평균 이상 값 출력
사용자로부터 정수 10개를 입력받아 배열에 저장한 후, 배열 값의 평균을 계산하고, 평균 이상인 값을 출력하는 프로그램을 작성하세요.*/
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int sum = 0; //초기화를 통해 쓰레기값 미연 방지
    float avg;

    cout << "10개의 정수를 입력하세요. :" << endl;

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

        sum += arr[i];
    }

    cout << "입력받은 정수 : ";
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    avg = static_cast<float>(sum) / SIZE; //타입 캐스팅. sum과 SIZE가 정수 타입이기 때문에 정수 나눗셈을 방지하기 위함.
    cout << "평균값 : " << avg << endl;
    cout << "평균값 이상인 정수 : ";
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] >= avg) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
