//ArrayList (List의 구현체): 배열 기반으로 데이터를 저장합니다.
package java2;

import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        // ArrayList 생성
        ArrayList<String> fruits = new ArrayList<>();

        // 요소 추가
        fruits.add("사과");
        fruits.add("바나나");
        fruits.add("딸기");

        // 요소 출력
        System.out.println("과일 목록: " + fruits);

        // 요소 삭제
        fruits.remove("바나나");
        System.out.println("바나나 제거 후: " + fruits);

        // 특정 요소 확인
        System.out.println("딸기가 있나요? " + fruits.contains("딸기"));

        // 크기 확인
        System.out.println("리스트 크기: " + fruits.size());
    }
}
