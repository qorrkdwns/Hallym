//HashSet은  중복 데이터를 허용하지 않고, 빠른 데이터 검색 속도를 제공.
package java2;

import java.util.HashSet;

public class HashSetExample2 {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<String>();

        set.add("사과");
        set.add("바나나");
        set.add("체리");
        set.add("사과"); //중복 데이터, 추가 되지 않음.
        
        System.out.println("HashSet: " + set);
    }
}
