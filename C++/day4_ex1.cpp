/*���� 1: �迭 ����� �� ���ϱ�
����ڷκ��� ���� 5���� �Է¹޾� �迭�� ������ ��, �迭 ����� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.*/
#include <iostream>
using namespace std;

int main() {
    int arr[5]; //�������� ���� 5���� �Է¹������ ��ø� �߱� ������ ����� �����ص� �ǰ� ���� �̴�� �ص� ��.
    int sum = 0;

    cout << "���� 5���� �Է��ϼ���. " << endl;
    
    for(int i = 0; i < 5; i++) {
        cout << i+1 << "��° ���� : ";
        cin >> arr[i];
       
        if (cin.fail()) { // ��ȿ���� ���� �Է� ó��
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "��ȿ���� ���� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
            i--; // ���� �ݺ� �ٽ� ����
            continue;
        }

        sum += arr[i];
    }

    cout << "�Էµ� ���� : ";

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " "; 
    }

    cout << endl;
    cout << "�� : " << sum << endl;

    return 0;
}