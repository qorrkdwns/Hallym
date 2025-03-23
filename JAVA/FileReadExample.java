//파일 읽기
package java2;

import java.io.File; //FileWriter import는 포함되어 있지 않음
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FileReadExample {
    public static void main(String[] args) {
        try {
            File file = new File("example.txt"); //파일 객체 생성
            Scanner reader = new Scanner(file); //파일 읽기 객체 생성
            while(reader.hasNextLine()) { //파일의 끝까지 한 줄씩 읽기
                String line = reader.nextLine(); //한 줄 읽기
                System.out.println(line); //한 줄 출력
            }
            reader.close(); //파일 읽기 객체 닫기
        } catch(FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다.");
            e.printStackTrace(); //예외의 호출 스택을 출력하여 디버깅에 도움을 줌
        }
    }
}
