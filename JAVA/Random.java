import java.util.*;

public class Random {
    public static void main(String[] args) {
        int target = (int) (Math.random() * 100) + 1; //랜덤 정수 생성.
        int guess = 0; //입력받을 숫자 guess 초기화

        Scanner scanner = new Scanner(System.in);
        System.out.println("숫자를 맞춰보세요. (1-100):");

        while (guess != target) { //입력한 숫자와 랜덤 정수가 같지 않을 때 반복
            System.out.print("당신이 생각한 숫자 : ");
            guess = scanner.nextInt();

            if (guess <= target - 15) {
                System.out.println("생각한 숫자가 너무 낮아요!");
            } else if (guess >= target + 15) {
                System.out.println("생각한 숫자가 너무 높아요!");
            } else if(guess < target) {
                System.out.println("생각한 숫자가 낮아요!");
            } else if(guess > target) {
                System.out.println("생각한 숫자가 높아요!");
            }else {
                System.out.println("정답이에요! 정답 숫자는 " + target);
            }
        }
    }    
}
