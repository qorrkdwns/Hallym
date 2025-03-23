import java.util.Scanner;

public class SquarePattern {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("정사각형의 크기를 입력해주세요 : ");
        int size = scanner.nextInt();

        for (int i = 0; i < size; i++) { // 줄 반복
            for (int j = 0; j < size; j++) { // 한 줄에서 별 반복
                System.out.print("* ");
            }
            System.out.println(); // 줄 바꿈
        }
    }
}
