#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "������ �Է����ּ���.";
    cin >> score;

    if(score < 0 || score > 100) {
     cout << "��ȿ���� ���� �����Դϴ�. 0~100 ������ ������ �Է����ּ���." << endl;   
    }else if(score >= 90) {
        cout << "�Էµ� ������ ������ A�Դϴ�." << endl;
    }else if(score >= 80) {
        cout << "�Էµ� ������ ������ B�Դϴ�." << endl;
    }else if(score >= 70) {
        cout << "�Էµ� ������ ������ C�Դϴ�." << endl;
    }else if(score >= 60) {
        cout << "�Էµ� ������ ������ D�Դϴ�." << endl;
    }else {
        cout << "�Էµ� ������ ������ F�Դϴ�." << endl;
    }

    return 0;
}