/*문제 2: HashMap을 사용해 학생 점수 관리
학생 이름과 점수를 입력받아 HashMap에 저장하고,
특정 학생의 점수를 조회한 뒤, 해당 학생 데이터를 삭제하는 프로그램을 작성하세요. */
package java2;

import java.util.HashMap;
import java.util.Scanner;

public class HashMapScore {
    public static void main(String[] args) {
        HashMap<String, Integer> studentScores = new HashMap<>();
        Scanner scanner = new Scanner(System.in);

        while (true) { //학생 데이터 입력
            System.out.print("학생 이름을 입력하세요. (-1을 입력하면 종료) : ");
            String name = scanner.nextLine();
            if(name.equals("-1")) {
                System.out.println("입력을 종료합니다.");
                break;
            }

            System.out.print("학생 점수를 입력하세요 (0 이상 숫자만 입력 가능): ");
            int score;

            // 유효성 검사
            while (true) {
                if (scanner.hasNextInt()) { //입력값이 정수인지 확인
                    score = scanner.nextInt();
                    scanner.nextLine(); // 버퍼 비우기
                    if (score >= 0) {
                        studentScores.put(name, score); //put() 메소드로 키와 값을 저장 (키는 학생 이름, 값은 점수)
                        break;
                    }
                } else {
                    System.out.print("유효하지 않은 점수입니다. 다시 입력해주세요: ");
                    scanner.nextLine(); // 잘못된 입력 처리
                }
                
            }
        }

        System.out.print("점수를 조회할 학생의 이름을 입력해주세요. : ");
        String searchName = scanner.nextLine();
        if(studentScores.containsKey(searchName)) { //containsKey() 메소드로 키가 존재하는지 확인
            System.out.println(searchName + " 학생의 점수는 " + studentScores.get(searchName) + "점 입니다."); //get() 메소드로 특정 키의 값을 가져옴
            studentScores.remove(searchName); //특정 학생의 점수를 조회한 뒤, 해당 학생 데이터를 삭제
        }else {
            System.out.println(searchName + " 학생의 데이터가 없습니다.");
        }

        System.out.println("최종 학생 데이터 : " + studentScores);

        scanner.close();
    }
}
