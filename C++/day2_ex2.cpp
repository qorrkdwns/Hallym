#include <iostream>
using namespace std;

int main() {
    int num;

    while(true) {
        cout << "������ �Է����ּ���. (0�� �Է��ϸ� ����) : ";
        cin >> num;
        
        // �Է� ��Ʈ�� ���� Ȯ��
        if (cin.fail()) { //cin.fail() : �Է°��� ��Ʈ������ ó���� �� ���� ������ Ÿ���� �� true.
            cin.clear(); // �Է� ��Ʈ�� �ʱ�ȭ�Ͽ� ���� �÷��� ����
            cin.ignore(1000, '\n'); // ���� �ִ� �Է� ����, ���⼭�� �ִ� 1000���� ���ڸ� ���ۿ��� �����ϰų� \n(���� Ű)�� ���� ������ �Է� ����. numeric_limits<streamsize>::max()�� ����� ���������� ���� ����
            cout << "��ȿ���� ���� �Է��Դϴ�. ������ �Է����ּ���." << endl;
            continue; // �ٽ� �Է� ��û
        }

        if(num == 0) {
            cout << "0�� �Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�." << endl;
            break;
        }
        
        if(num % 2 == 0) {
            cout << num << "��(��) ¦���Դϴ�." <<endl;
        }else {
            cout << num << "��(��) Ȧ���Դϴ�." <<endl;
        }
    }

    return 0;
}