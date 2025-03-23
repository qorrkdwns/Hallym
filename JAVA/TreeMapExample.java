//Map은 키-값 쌍으로 데이터를 저장하고, TreeMap은 키를 기준으로 정렬된 Map.
package java2;

import java.util.TreeMap;

public class TreeMapExample {
    public static void main(String[] args) {
        TreeMap<Integer, String> map = new TreeMap<>();
        
        map.put(3, "세 번째");
        map.put(1, "첫 번째");
        map.put(2, "두 번째");

        System.out.println("TreeMap: " + map); //키를 기준으로 정렬된 결과 출력
    }
}
