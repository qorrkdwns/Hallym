/*���� 3: 2���� �迭���� �ִ밪 ã��
����ڷκ��� 2���� �迭�� ũ��(��, ��)�� �迭 ���� �Է¹޾�, �迭���� �ִ밪�� ã�� ����ϴ� ���α׷��� �ۼ��ϼ���.
����, �ִ밪�� ��ġ�� ��� �� ��ȣ�� ����ϼ���.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows;
    int cols; 
    int max;
    int coord_x;
    int coord_y;

    cout << "2���� �迭�� ũ��(��, ��)�� �Է��ϼ���. : ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols)); // ��� �� ũ�⿡ �´� 2���� ���� ���� 

    cout << "�迭 ���� �Է����ּ���. : " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];

            if (cin.fail()) { // ��ȿ���� ���� �Է� ó��
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "��ȿ���� ���� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
                j--; // ���� �ݺ� �ٽ� ����
                continue;
            }
        }
    }

    max = arr[0][0]; //max�� �迭�� ù ��° ������ �ʱ�ȭ
    coord_x = 0; //max�� �� ��ġ �ʱ�ȭ
    coord_y = 0; //max�� �� ��ġ �ʱ�ȭ

    cout << "�迭 ��� : " << endl;
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

    cout << "2���� �迭�� �ִ��� " << max <<"�̰�, �ش� ���� ��ġ�� " << coord_x+1 <<"�� " << coord_y+1 <<"���Դϴ�. " << endl;

    return 0;
}