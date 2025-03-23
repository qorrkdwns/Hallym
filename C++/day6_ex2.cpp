/*���� 2: 2���� �迭���� Ư�� ���� �հ� ���ϱ�
����ڷκ��� 2���� �迭�� ũ��(��, ��)�� �迭 ���� �Է¹ް�, �հ踦 ���ϰ��� �ϴ� Ư�� �� ��ȣ�� �Է¹޾� �ش� ���� �հ踦 ����ϴ� ���α׷��� �ۼ��ϼ���.
���� �Էµ� �� ��ȣ�� ��ȿ���� �ʴٸ�, "�߸��� �� ��ȣ�Դϴ�."��� ����մϴ�.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows; //��
    int cols; //��
    int coord; //�հ踦 ���ϰ��� �ϴ� �� ��ȣ
    int sum = 0; //�ش� ���� �հ�

    cout << "2���� �迭�� ũ��(��, ��)�� �Է����ּ��� : ";
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

    cout << "�迭 ��� : " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "�հ踦 ���ϰ��� �ϴ� �� ��ȣ�� �Է����ּ���. : ";
    cin >> coord;
    
    if(coord < 1 || coord > rows) { //�Է¹��� �� ��ȣ�� ��ȿ���� Ȯ��
        cout << "�߸��� �� ��ȣ�Դϴ�." << endl;
    }else {
        for(int j = 0; j < cols; j++) {
            sum += arr[coord-1][j]; // arr �迭�� 0���� ����(ex) arr[0][1])�ϹǷ� �Է¹��� �� - 1 ó��
        }
        cout << "���� �հ� : " << sum << endl;
    }

    return 0;
}