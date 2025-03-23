//HashSet (Set의 구현체): 해시 알고리즘을 사용하여 중복을 제거합니다.
package java2;

import java.util.HashSet;

public class HashSetExample {
    public static void main(String[] args) {
        // HashSet 생성
        HashSet<String> set = new HashSet<>();

        // 요소 추가
        set.add("사과");
        set.add("바나나");
        set.add("딸기");
        set.add("사과"); // 중복 요소 추가 시 무시

        // 출력
        System.out.println("Set 요소: " + set);

        // 요소 확인
        System.out.println("바나나가 있나요? " + set.contains("바나나"));

        // 요소 삭제
        set.remove("딸기");
        System.out.println("딸기 제거 후: " + set);
    }
}
