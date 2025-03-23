import java.util.Scanner;

public class SumNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("자연수 N을 입력해주세요 : ");
        int n = scanner.nextInt(); //N

        int sum = 0; //총합
        for (int i = 1; i <= n; i++) {
            sum += i; //1부터 N까지의 총합
        }

        System.out.println("1부터 " + n + "까지의 총합 :  " + sum);
    }
}
