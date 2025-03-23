public class Loop2 {
    public static void main(String[] args) {
        int number = 1;

        // While문 (반복 실행 전에 조건 검사/조건이 거짓이면 한 번도 실행 X/조건이 참일 때만 실행하도록 설계)
        while (number <= 10) {
            System.out.println("Number: " + number);
            number++;
        }

        // Do-while문(반복 실행 후에 조건 검사/	조건이 거짓이어도 최소 1회 실행/	적어도 한 번 실행이 필요한 경우)
        int count = 10;
        do {
            System.out.println("Count: " + count);
            count--;
        } while (count > 0);
    }
}
