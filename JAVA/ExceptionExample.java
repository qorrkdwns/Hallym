//예외(Exception) : 프로그램 실행 중에 발생할 수 있는 오류를 처리하는 매커니즘.
package java2;

public class ExceptionExample {
    public static void main(String[] args) {
        try {
            int num = 10 / 0; //예외 발생
        }catch(ArithmeticException e) { // ArithmeticException 예외 처리: 0으로 나누기 시 발생
            System.out.println("0으로 나눌 수 없습니다!");
        }finally { // finally 블록: 예외 발생 여부와 상관없이 항상 실행, 오류가 발생해도 실행
            System.out.println("프로그램 종료.");
        }
    }
}
