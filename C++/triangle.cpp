#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {  // �� �ݺ�
    for (int j = 1; j <= i; j++) {  // �� �ݺ�
        cout << "*";
    }
    cout << endl;
}

    return 0;
}