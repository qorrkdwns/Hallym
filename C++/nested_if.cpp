#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "������ �Է��ϼ��� (0~100): ";
    cin >> score;

    if (score >= 0 && score <= 100) { // ������ ��ȿ���� Ȯ��
        if (score >= 90) {
            cout << "����: A" << endl;
        } else if (score >= 80) {
            cout << "����: B" << endl;
        } else if (score >= 70) {
            cout << "����: C" << endl;
        } else if (score >= 60) {
            cout << "����: D" << endl;
        } else {
            cout << "����: F" << endl;
        }
    } else {
        cout << "��ȿ���� ���� �����Դϴ�. 0~100 ���̷� �Է����ּ���." << endl;
    }

    return 0;
}
