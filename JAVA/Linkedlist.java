//LinkedList : 노드 기반의 자료구조. 삽입/삭제가 빠르지만, 검색이 느림.
package java2;

import java.util.LinkedList;

public class Linkedlist {
    public static void main(String[] args) {
        // LinkedList 생성
        LinkedList<String> list = new LinkedList<>();

        // 데이터 추가
        list.add("Dog");
        list.add("Cat");
        list.add("Bird");

        // 데이터 출력
        System.out.println("리스트: " + list);

        // 첫 번째 데이터 제거
        list.removeFirst();
        System.out.println("첫 번째 요소 제거 후: " + list);
    }
}

