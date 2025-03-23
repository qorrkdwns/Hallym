import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
       int i = 0;
       int sum = 0;
        System.out.println("Count : ");
        for(i = 1; i <=10; i++) {
            if(i<10) {
                System.out.print(i + ", "); 
                sum = sum + i;
            }
            else {
                System.out.println(i);
                sum = sum + i;
            }  
       }
       System.out.println("총합 : " + sum);
    }
}
