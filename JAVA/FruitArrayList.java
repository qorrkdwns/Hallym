/*문제 1: ArrayList를 사용해 과일 이름 추가 및 삭제
사용자로부터 과일 이름을 입력받아 ArrayList에 추가하고, 특정 과일 이름을 삭제한 뒤 남은 과일 이름을 출력하는 프로그램을 작성하세요. */
package java2;

import java.util.ArrayList;
import java.util.Scanner;

public class FruitArrayList {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> fruits = new ArrayList<>(); //ArrayList 생성
        String input; //입력받을 과일 이름
        
        while(true) {
            System.out.print("과일 이름을 입력해주세요. (-1을 입력받으면 종료): ");
            input = scanner.nextLine();

            if(input.equals("-1")) { //-1 입력 시 입력 종료
                System.out.println("입력을 종료합니다.");
                break;
            }
            fruits.add(input);
        }

        System.out.println("현재 입력 받은 과일 리스트 : " + fruits);

        System.out.print("삭제할 과일 이름을 입력하세요. : ");
        String deleteFruit = scanner.nextLine();
        
        if(fruits.contains(deleteFruit)) {
            fruits.remove(deleteFruit);
            System.out.println(deleteFruit + "를 삭제했습니다.");
        }else {
            System.out.println(deleteFruit + "가 리스트에 없습니다.");
        }

        System.out.println("최종 과일 리스트 : " + fruits);

        scanner.close();
        
    }
}
