public class MultiplicationTable {
    public static void main(String[] args) {
        for(int i = 2; i <= 9; i++) {
            for(int j = 1; j <= 9; j++) {
                System.out.println(i + " x " + j + " = " + (i*j));
            }
            System.out.println(); //각 단이 끝날 때 마다 공백 추가
        }
    }
}
