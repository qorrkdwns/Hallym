import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();

       if(num1 > num2) {
        System.out.println("먼저 입력된 숫자가 큽니다.");
       } else if(num1 < num2) {
        System.out.println("나중에 입력된 숫자가 큽니다.");
       }else {
        System.out.println("두 숫자가 동일합니다.");
       }
    }
}
