//LinkedList는 ArrayList와 비교하였을 때 데이터의 삽입, 삭제 속도가 빠름.
package java2;

import java.util.LinkedList;

public class LinkedListExample {
    public static void main(String[] args) {
        LinkedList<String> linkedList = new LinkedList<String>();

        // 데이터 추가
        linkedList.add("사과");
        linkedList.add("바나나");
        linkedList.add("체리");

        // 데이터 출력
        System.out.println("LinkedList: " + linkedList);

        // 데이터 삽입
        linkedList.add(1, "오렌지");
        System.out.println("오렌지 추가 후: " + linkedList);

        // 데이터 삭제
        linkedList.remove("바나나");
        System.out.println("바나나 삭제 후: " + linkedList);
    }
}
