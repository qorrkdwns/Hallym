/*문제 1: ArrayList를 사용해 사용자가 입력한 과일 이름을 저장하고, 특정 과일을 삭제한 후 나머지 과일들을 출력하는 프로그램을 작성하세요. */
package java2;

import java.util.ArrayList;

public class ArrayFruit {
    public static void main(String[] args) {
        ArrayList<String> fruit = new ArrayList<>();

        fruit.add("사과");
        fruit.add("청포도");
        fruit.add("딸기");

        System.out.println("리스트 : " + fruit);

        fruit.remove("딸기");
        System.out.println("딸기 제거 후 리스트 : " + fruit);
    }
}
