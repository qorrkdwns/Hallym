public class IsoscelesTriangle {
    public static void main(String[] args) {
        int n = 5; // 삼각형의 높이

        for (int i = 1; i <= n; i++) { // i는 줄 번호
            // 1. 공백 출력
            for (int j = 1; j <= n - i; j++) { // 공백 개수: n - i(공백은 좌측에만 있으면 됨)
                System.out.print(" ");
            }
            // 2. 별 출력
            for (int k = 1; k <= 2 * i - 1; k++) { // 별 개수: 2 * i - 1
                System.out.print("*");
            }
            // 3. 줄바꿈
            System.out.println();
        }
    }
}
