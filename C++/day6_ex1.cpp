/*문제 1: 2차원 배열에서 특정 값 찾기
사용자로부터 2차원 배열의 크기(행, 열)와 배열 값을 입력받고, 찾고자 하는 값을 입력받아 
배열에서 해당 값의 위치(행, 열 번호)를 출력하는 프로그램을 작성하세요. 만약 값이 없으면 "값을 찾을 수 없습니다."라고 출력합니다.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows; //행
    int cols; //열
    int value; //찾고자 하는 값
    bool exist = false; //찾고자 하는 값의 유무

    cout << "2차원 배열의 행과 열을 입력하세요 : ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols)); // 행과 열 크기에 맞는 2차원 벡터 생성

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

    cout << "찾고자 하는 값을 입력해주세요 : ";
    cin >> value;
    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < cols; j++) {
            if(value == arr[i][j]) {
                cout << value <<"의 위치는 " << i+1 << "행 " << j+1 << "열에 있습니다. " << endl;
                exist = true;
            }
        }
    }
    if(!exist) {
        cout << "값을 찾을 수 없습니다." << endl;
    }
    
    return 0;
}