//HashMap (Map의 구현체): 키-값 쌍으로 데이터를 저장합니다.
package java2;

import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        // HashMap 생성
        HashMap<String, Integer> map = new HashMap<>();

        // 키-값 추가
        map.put("사과", 3);
        map.put("바나나", 5);
        map.put("딸기", 2);

        // 특정 키의 값 출력
        System.out.println("사과의 개수: " + map.get("사과"));

        // 모든 키-값 출력
        System.out.println("전체 데이터: " + map);

        // 키 삭제
        map.remove("바나나");
        System.out.println("바나나 제거 후: " + map);

        // 크기 확인
        System.out.println("맵 크기: " + map.size());
    }
}
