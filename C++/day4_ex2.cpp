/*���� 2: �ִ� ã��
����ڷκ��� ���� 10���� �Է¹޾� �迭�� ������ ��, �迭���� ���� ū ���� ����ϴ� ���α׷��� �ۼ��ϼ���.*/
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; //���� 10��
    int arr[SIZE];
    int max; // �ִ�

    cout << "10���� ������ �Է��ϼ���. : " << endl;

    for(int i = 0; i < SIZE; i++) {
        cout << i+1 << "��° ���� : ";
        cin >> arr[i];

        if (cin.fail()) { // ��ȿ���� ���� �Է� ó��
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "��ȿ���� ���� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
            i--; // ���� �ݺ� �ٽ� ����
            continue;
        }
    }

    max = arr[0]; //�ִ� �ʱ�ȭ
     for(int i = 0; i < SIZE; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
     }

    cout << "�Է¹��� ���� : ";
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "�迭���� ���� ū �� : " << max << endl;

    return 0;
}