/*문제 2: LinkedList를 사용하여 동물 이름을 저장한 뒤, 리스트의 첫 번째와 마지막 데이터를 출력하고 삭제하는 프로그램을 작성하세요. */
package java2;

import java.util.LinkedList;

public class LinkedAnimal {
    public static void main(String[] args) {
        LinkedList<String> animal = new LinkedList<>();

        animal.add("사자");
        animal.add("고양이");
        animal.add("기린");

        System.out.println("리스트 : " + animal);

        System.out.println("첫 번째 데이터 : " + animal.getFirst());
        System.out.println("마지막 데이터 : " + animal.getLast());

        animal.removeFirst();
        animal.removeLast();

        System.out.println("첫 번째와 마지막 데이터 삭제 후 리스트 : " + animal);
    }
}
