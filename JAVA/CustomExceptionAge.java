/*문제 2: 사용자 정의 예외를 활용한 프로그램 작성
사용자로부터 나이를 입력받고, 나이가 18세 미만이면 사용자 정의 예외를 발생시키는 프로그램을 작성하세요. */
package java2;

import java.util.Scanner;

class CustomException extends Exception { // 사용자 정의 예외
    public CustomException(String message) {
        super(message); // 부모 클래스(Exception)의 생성자 호출
    }
} 

public class CustomExceptionAge {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("나이를 입력하세요. : ");
        if(scanner.hasNextInt()) { //유효성 검사
            int age = scanner.nextInt();
            try {
                checkAge(age); //age가 18세 미만이면 예외 발생
            }catch(CustomException e) {
                System.out.println("예외 발생: " + e.getMessage());
            } finally {
                scanner.close(); //메모리 누수 방지용 자원 정리
            }
        } else { 
            System.out.println("유효하지 않은 나이입니다. 숫자를 입력하세요.");
        }    
    }

    public static void checkAge(int age) throws CustomException {
        if (age < 18) {
            throw new CustomException("18세 미만은 접근할 수 없습니다."); // 사용자 정의 예외 던지기
        }
    }
}
