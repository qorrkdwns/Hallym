/*���� 2: �ະ �հ� ���ϱ�
����ڷκ��� 2���� �迭�� ũ��(��, ��)�� �Է¹ް�, �迭 ���� �Է¹��� �� �� ���� �հ踦 ����ϴ� ���α׷��� �ۼ��ϼ���.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows = 0; //��
    int cols = 0; //��
    int sum = 0; //�� ���� �հ�

    cout << "�迭�� ��� ���� �Է��ϼ��� : ";
    cin >> rows >> cols;
    
    // ��� �� ũ�⿡ �´� 2���� ���� ����
    vector<vector<int>> arr(rows, vector<int>(cols)); // C++ ǥ�ؿ����� �迭�� ũ�⸦ ������Ÿ�ӿ� ����. 
                                                      //�迭�� ũ��� �Ϲ� ������ ������ �� ������ ������ Ÿ�� ����� ������.
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

    cout << "�� ���� �հ� : " << endl;
    for(int i = 0; i < rows; i++) {
        sum = 0; // �� ���� �հ� �ʱ�ȭ
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << i+1 << "�� : " << sum << endl;
    }


    return 0;
}
