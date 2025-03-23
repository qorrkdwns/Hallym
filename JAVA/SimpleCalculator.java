import java.util.Scanner;

public class SimpleCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("첫 번째 숫자를 입력하세요 : ");
        double num1 = scanner.nextDouble();

        System.out.print("두 번째 숫자를 입력하세요 : ");
        double num2 = scanner.nextDouble();

        System.out.print("연산 기호를 입력하세요 (+, -, *, /): ");
        char operation = scanner.next().charAt(0); //nextChar();라는 인덱스가 없어 next()로 문자열을 받아온 뒤 charAt(0)으로 문자열의 첫 번째 문자 가져오기

        double result;
        switch (operation) {
            case '+':
                result = num1 + num2;
                break; //switch(반복문)을 종료할 때 사용
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) { //0으로 나누지 않았을 때
                    result = num1 / num2;
                } else {
                    System.out.println("Error: Division by zero!");
                    return; //break가 아닌 return을 사용해 메서드 자체를 종료하여 오류를 방지
                }
                break;
            default:
                System.out.println("Invalid operation!");
                return;
        }

        System.out.println("Result: " + result);
    }
}
