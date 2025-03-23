/*문제 1: 2차원 배열 값 출력
사용자로부터 2차원 배열의 크기(행, 열)를 입력받고, 배열 값을 입력받아 행과 열에 맞게 출력하는 프로그램을 작성하세요.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows = 0; //행
    int cols = 0; //열

    cout << "배열의 행과 열을 입력하세요 : ";
    cin >> rows >> cols;
    
    // 행과 열 크기에 맞는 2차원 벡터 생성
    vector<vector<int>> arr(rows, vector<int>(cols)); // C++ 표준에서는 배열의 크기를 컴파일타임에 결정. 
                                                      //배열의 크기는 일반 변수로 정해질 수 없으며 컴파일 타임 상수로 정해짐.
    cout << "배열 값을 입력하세요 : " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];

            if (cin.fail()) { // 유효하지 않은 입력 처리
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "유효하지 않은 입력입니다. 다시 입력해주세요." << endl;
                j--; // 현재 반복 다시 실행
                continue;
            }
        }
    }

    cout << "배열 출력 : " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
