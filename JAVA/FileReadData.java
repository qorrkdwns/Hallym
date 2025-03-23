/*문제 2: 파일에서 데이터 읽기
data.txt 파일의 내용을 읽어와 콘솔에 출력하세요.
파일이 존재하지 않으면 "파일이 존재하지 않습니다."라는 메시지를 출력하도록 하세요. */
package java2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FileReadData {
    public static void main(String[] args) {
        try {
            File file = new File("data.txt"); //파일 객체 생성
            Scanner reader = new Scanner(file); //파일 읽기 객체 생성
            
            while(reader.hasNextLine()) { //파일의 끝까지 한 줄씩 읽기
                String line = reader.nextLine(); //한 줄 읽기
                System.out.println(line); //한 줄 출력
            }
            reader.close(); //파일 읽기 객체 닫기
        } catch(FileNotFoundException e) {
            System.out.println("파일이 존재하지 않습니다.");
            e.printStackTrace();
        }
    }
}

/* 밑의 코드가 더 안전하며 간단한 코드, try-with-resources 사용 코드. 사용한 적이 없어서 밑에 따로 작성.
public class FileReadData {
    public static void main(String[] args) {
        File file = new File("data.txt");

        try (Scanner reader = new Scanner(file)) { // try-with-resources 사용
            while (reader.hasNextLine()) {
                String line = reader.nextLine();
                System.out.println(line);
            }
        } catch (FileNotFoundException e) {
            System.out.println("파일이 존재하지 않습니다.");
        }
    }
} */
