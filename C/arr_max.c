#include <stdio.h>

int main() {
    int n; //�迭�� ũ��
    int max; //�Էµ� �迭���� ���� ū ��
    
    printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("�迭�� ũ��� 1 �̻��̿��� �մϴ�. \n");
        return 1;
    }

    int arr[n]; //�Էµ� ũ���� �迭

    printf("%d���� ������ �Է��ϼ��� :\n", n);
    for(int i = 0; i < n; i++) {
        printf("%d��° ���� : ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0]; //�ִ밪 �ʱ�ȭ
    for(int i = 1; i < n; i++) { //i = 1���� ����
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("�Էµ� �迭���� ���� ū ���� %d�Դϴ�. \n", max);

    return 0;
}