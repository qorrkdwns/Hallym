/*���� 1: 2���� �迭���� Ư�� �� ã��
����ڷκ��� 2���� �迭�� ũ��(��, ��)�� �迭 ���� �Է¹ް�, ã���� �ϴ� ���� �Է¹޾� 
�迭���� �ش� ���� ��ġ(��, �� ��ȣ)�� ����ϴ� ���α׷��� �ۼ��ϼ���. ���� ���� ������ "���� ã�� �� �����ϴ�."��� ����մϴ�.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows; //��
    int cols; //��
    int value; //ã���� �ϴ� ��
    bool exist = false; //ã���� �ϴ� ���� ����

    cout << "2���� �迭�� ��� ���� �Է��ϼ��� : ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols)); // ��� �� ũ�⿡ �´� 2���� ���� ����

    cout << "�迭 ���� �Է��ϼ��� : " << endl;
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

    cout << "�迭 ��� : " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "ã���� �ϴ� ���� �Է����ּ��� : ";
    cin >> value;
    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < cols; j++) {
            if(value == arr[i][j]) {
                cout << value <<"�� ��ġ�� " << i+1 << "�� " << j+1 << "���� �ֽ��ϴ�. " << endl;
                exist = true;
            }
        }
    }
    if(!exist) {
        cout << "���� ã�� �� �����ϴ�." << endl;
    }
    
    return 0;
}