#include <iostream>
using namespace std;

int main() {
    const int current_year = 2024; //���� ������ ���
    int born;
    int age;
    
    while(true) { //���� �ݺ���
        cout << "��� ������ �Է��ϼ���. : ";
        cin >> born;

        if(born > current_year) { //��� ���� �Է°� ����
            cout << "��� ������ �ùٸ��� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
        } else {
            break;
        }

    }

    age = current_year - born;

    cout << born << "�⵵ ����� ���� ���̴� �� " << age <<"���Դϴ�." << endl;

    return 0;
}