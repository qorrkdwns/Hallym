#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "���̸� �Է����ּ���. : ";
    cin >> age;

    if(age >= 0 && age <= 5) {
        cout << age << "���� �����Դϴ�." << endl;
    }else if(age <= 12) {
        cout << age << "���� �Ƶ� ��� 500���Դϴ�." << endl;
    }else if(age <= 18) {
        cout << age << "���� û�ҳ� ��� 1000���Դϴ�." << endl;
    }else if(age >= 19) {
        cout << age << "���� ���� ��� 2000���Դϴ�." << endl;
    }else {
        cout << "��ȿ���� ���� �����Դϴ�." << endl;
    }

    return 0;
}