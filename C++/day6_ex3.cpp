/*문제 3: 2차원 배열에서 최대값 찾기
사용자로부터 2차원 배열의 크기(행, 열)와 배열 값을 입력받아, 배열에서 최대값을 찾아 출력하는 프로그램을 작성하세요.
또한, 최대값이 위치한 행과 열 번호도 출력하세요.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows;
    int cols; 
    int max;
    int coord_x;
    int coord_y;

    cout << "2차원 배열의 크기(행, 열)를 입력하세요. : ";
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

    max = arr[0][0]; //max값 배열의 첫 번째 값으로 초기화
    coord_x = 0; //max의 행 위치 초기화
    coord_y = 0; //max의 열 위치 초기화

    cout << "배열 출력 : " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";

            if(arr[i][j] > max) {
                max = arr[i][j];
                coord_x = i;
                coord_y = j;
            }
        }
        cout << endl;
    }

    cout << "2차원 배열의 최댓값은 " << max <<"이고, 해당 값의 위치는 " << coord_x+1 <<"행 " << coord_y+1 <<"열입니다. " << endl;

    return 0;
}