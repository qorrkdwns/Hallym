#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "���̸� �Է��ϼ���: ";
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << "�Ƶ� ����� ����˴ϴ�." << endl;
    } else if (age >= 13 && age <= 18) {
        cout << "û�ҳ� ����� ����˴ϴ�." << endl;
    } else if (age > 18 && age < 60) {
        cout << "���� ����� ����˴ϴ�." << endl;
    } else if (age >= 60) {
        cout << "��� ��� ����� ����˴ϴ�." << endl;
    } else {
        cout << "��ȿ���� ���� �����Դϴ�." << endl;
    }

    return 0;
}
