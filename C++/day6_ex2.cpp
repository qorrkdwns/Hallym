/*문제 2: 2차원 배열에서 특정 행의 합계 구하기
사용자로부터 2차원 배열의 크기(행, 열)와 배열 값을 입력받고, 합계를 구하고자 하는 특정 행 번호를 입력받아 해당 행의 합계를 출력하는 프로그램을 작성하세요.
만약 입력된 행 번호가 유효하지 않다면, "잘못된 행 번호입니다."라고 출력합니다.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows; //행
    int cols; //열
    int coord; //합계를 구하고자 하는 행 번호
    int sum = 0; //해당 행의 합계

    cout << "2차원 배열의 크기(행, 열)를 입력해주세요 : ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols)); // 행과 열 크기에 맞는 2차원 벡터 생성 

    cout << "배열 값을 입력해주세요. : " << endl;
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

    cout << "합계를 구하고자 하는 행 번호를 입력해주세요. : ";
    cin >> coord;
    
    if(coord < 1 || coord > rows) { //입력받은 행 번호가 유효한지 확인
        cout << "잘못된 행 번호입니다." << endl;
    }else {
        for(int j = 0; j < cols; j++) {
            sum += arr[coord-1][j]; // arr 배열은 0부터 시작(ex) arr[0][1])하므로 입력받은 값 - 1 처리
        }
        cout << "행의 합계 : " << sum << endl;
    }

    return 0;
}