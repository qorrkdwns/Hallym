#include <iostream> //����� ���̺귯��
using namespace std;

int main() {
    int age;
    cout << "���̸� �Է��ϼ���: ";
    cin >> age;

    if (age < 13) {
        cout << "����Դϴ�." << endl;
    } else if (age < 20) {
        cout << "û�ҳ��Դϴ�." << endl;
    } else {
        cout << "�����Դϴ�." << endl;
    }

    return 0;
}
