/*���� 3: ��� �̻� �� ���
����ڷκ��� ���� 10���� �Է¹޾� �迭�� ������ ��, �迭 ���� ����� ����ϰ�, ��� �̻��� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.*/
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int sum = 0; //�ʱ�ȭ�� ���� �����Ⱚ �̿� ����
    float avg;

    cout << "10���� ������ �Է��ϼ���. :" << endl;

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

        sum += arr[i];
    }

    cout << "�Է¹��� ���� : ";
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    avg = static_cast<float>(sum) / SIZE; //Ÿ�� ĳ����. sum�� SIZE�� ���� Ÿ���̱� ������ ���� �������� �����ϱ� ����.
    cout << "��հ� : " << avg << endl;
    cout << "��հ� �̻��� ���� : ";
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] >= avg) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
