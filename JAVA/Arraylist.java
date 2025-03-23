//ArrayList : 내부적으로 배열을 사용하여 데이터를 저장. 삽입/삭제가 느리지만, 검색이 빠름. 
package java2;

import java.util.ArrayList;

public class Arraylist {
    public static void main(String[] args) { 
        // ArrayList 생성
        ArrayList<String> list = new ArrayList<>();

        // 데이터 추가
        list.add("Apple");
        list.add("Banana");
        list.add("Cherry");

        // 데이터 출력
        System.out.println("리스트: " + list);

        // 특정 데이터 삭제
        list.remove("Banana");
        System.out.println("Banana 삭제 후: " + list);
    }
}
