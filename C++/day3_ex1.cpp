#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 100; i++) {
        if(i == 50) { //50���� ��� �ߴ�
            cout << "50���� ����� �����մϴ�." << endl;
            break;
        }
        if(i % 10 == 0) { //10�� ��� �ǳʶٱ�
            continue;
        }
        cout << i << endl;
    }

    return 0;
}