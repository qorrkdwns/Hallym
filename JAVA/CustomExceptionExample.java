//사용자 정의 예외 클래스 생성 및 사용 예제
package java2;

class CustomException extends Exception { // 사용자 정의 예외
    public CustomException(String message) {
        super(message); // 부모 클래스(Exception)의 생성자 호출
    }
}

public class CustomExceptionExample {
    public static void main(String[] args) {
        try {
            checkAge(15); // 예외 발생
        } catch (CustomException e) { // CustomException 예외 처리: 사용자 정의 예외가 발생했을 때 실행
            System.out.println("예외 발생: " + e.getMessage());
        }
    }

    public static void checkAge(int age) throws CustomException {
        if (age < 18) {
            throw new CustomException("18세 미만은 접근할 수 없습니다."); // 사용자 정의 예외 던지기
        }
    }
}

