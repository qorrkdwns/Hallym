#include <stdio.h>

//역순으로 입력받고, 정순으로 출력
int main() {
    int arr[5];

    for(int i = 0; i < 5; i++) {
        printf("%d번째 숫자를 입력하세요 : ", i+1);
        scanf("%d", &arr[4-i]);
    }

    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d, " , arr[i]); 
        } else {
            printf("%d\n" , arr[i]);
        }
    }

    return 0;
}

/* //정순으로 입력받고, 역순으로 출력
#include <stdio.h>

int main() {
    int arr[5];

    // 배열 입력
    for (int i = 0; i < 5; i++) {
        printf("%d번째 숫자를 입력하세요 : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 배열 역순 출력
    printf("입력한 숫자를 역순으로 출력합니다: ");
    for (int i = 4; i >= 0; i--) {
        if (i > 0) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}

*/