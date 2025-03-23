#include <stdio.h>
#include <stdlib.h>

// 노드 정의
typedef struct Node {
    int data;           // 데이터
    struct Node *next;  // 다음 노드의 주소, 다음 노드의 주소이기 때문에 같은 구조체를 가리키는 포인터여야함.
} Node;

// 연결 리스트에 새로운 노드 추가 (맨 앞에 삽입), 맨 앞에 추가하는 이유는 구현이 간단하고 효율적임.
void addNode(Node **head, int value) { //만약 addNode 에서 새로운 노드를 추가하면, head가 새 노드를 가리키도록 변경해야함. 
                                       //1중 포인터를 사용하면 head가 가리키는 값을 바꾸더라도, 원래 main 함수의 head에는 영향을 주지 않음. 그래서 2중
    Node *newNode = (Node *)malloc(sizeof(Node));  // 새로운 노드 생성
    newNode->data = value;  // 데이터 저장
    newNode->next = *head;  // 기존 리스트의 첫 노드를 가리킴 / head는 이중 포인터이기 때문에 *head는 Node * 타입
    *head = newNode;        // 헤드를 새 노드로 업데이트, 새로운 노드를 추가할려면 head가 가리키는 *head를 변경해야함.
} //이 방식의 시간 복잡도는 O(1), 노드를 리스트의 끝에 추가하게되면 시간 복잡도는 O(n) (마지막 노드까지 탐색)

// 연결 리스트 출력
void printList(Node *head) { //printList는 head값을 변경하지 않기 때문에 단일 포인터
    Node *current = head; // 현재 노드를 가리키는 포인터
    while (current != NULL) {
        printf("%d -> ", current->data); // 데이터 출력
        current = current->next;        // 다음 노드로 이동
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;  // 연결 리스트의 헤드 포인터 (초기화)

    // 노드 추가
    addNode(&head, 10);
    addNode(&head, 20);
    addNode(&head, 30);

    // 연결 리스트 출력
    printf("현재 리스트: ");
    printList(head);

    return 0;
}
