//파일 생성
package java2;

import java.io.File; //파일 생성을 위한 File 클래스 import
import java.io.IOException; //예외 처리를 위한 IOException 클래스 import

public class FileCreationExample {
    public static void main(String[] args) {
        try {
            File file = new File("example.txt"); //파일 객체 생성
            if(file.createNewFile()) {
                System.out.println("파일이 생성 되었습니다. : " + file.getName());
            } else {
                System.out.println("파일이 이미 존재합니다.");
            }
        } catch(IOException e) {
            System.out.println("오류가 발생했습니다.");
            e.printStackTrace(); // 예외의 호출 스택을 출력하여 디버깅에 도움을 줌
        }
    }
}
