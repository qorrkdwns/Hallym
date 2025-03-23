//파일 쓰기
package java2;

import java.io.FileWriter; //파일 쓰기를 위한 FileWriter 클래스 import
import java.io.IOException; //예외 처리를 위한 IOException 클래스 import

public class FileWriteExample {
    public static void main(String[] args) {
        try {
            FileWriter writer = new FileWriter("example.txt"); //파일 쓰기 객체 생성, 파일이 존재해도 파일을 열고 내용을 덮어씀.
            writer.write("이것은 파일에 작성된 텍스트입니다.\n"); //파일에 문자열 쓰기
            writer.write("자바 프로그래밍 재미있어요!");
            writer.close(); //파일 쓰기 객체 닫기
            System.out.println("파일에 데이터를 성공적으로 저장했습니다.");
        } catch(IOException e) {
            System.out.println("오류가 발생했습니다.");
            e.printStackTrace(); // 예외의 호출 스택을 출력하여 디버깅에 도움을 줌

        }
    }
}
