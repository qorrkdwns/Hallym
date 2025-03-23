/*문제 1: LinkedList를 사용한 데이터 처리
사용자로부터 과일 이름을 입력받아 LinkedList에 저장하고, 특정 과일을 삭제한 후 리스트를 출력하는 프로그램을 작성하세요.
(-1을 입력하면 데이터 입력 종료) */
package java2;

import java.util.LinkedList;
import java.util.Scanner;

public class LinkedListFruit {
    public static void main(String[] args) {
        LinkedList <String> fruits = new LinkedList<>();
        Scanner scanner = new Scanner(System.in);

        //과일 데이터 추가
        while(true) {
            System.out.print("과일 이름을 입력하세요.(-1을 입력하면 과일 입력 종료) : ");
            String fruit = scanner.nextLine().trim(); //trim() : 문자열 앞뒤 공백 제거

            if(fruit.equals("-1")) {
                break;
            }

            if(fruit.isEmpty()) { //유효성 검사(빈 문자열 또는 공백만 입력한 경우)
                System.out.println("유효하지 않은 과일 이름입니다. 다시 입력하세요.");
                continue;
            }

            fruits.add(fruit);
        }

        //과일 데이터 출력(삭제 전)
        System.out.println("과일 리스트 : " + fruits);

        //특정 과일 데이터 삭제
        System.out.print("삭제할 과일 이름을 입력하세요 : ");
        String deleteFruit = scanner.nextLine();
        fruits.remove(deleteFruit);

        //과일 데이터 출력(삭제 후)
        System.out.println("최종 과일 리스트 : " + fruits);
    }
}
