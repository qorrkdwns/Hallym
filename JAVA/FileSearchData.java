/*문제 2: 파일에서 특정 데이터 검색
data2.txt 파일에서 사용자가 입력한 키워드를 포함하는 줄만 검색하여 출력하는 프로그램을 작성하세요.
파일이 없는 경우, "파일이 존재하지 않습니다."라는 메시지를 출력하도록 하세요. */
package java2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class FileSearchData {
    public static void main(String[] args) {
        File file = new File("data2.txt"); // 파일 객체 생성

        try (Scanner reader = new Scanner(file); //try-with-resources문 사용
             Scanner scanner = new Scanner(System.in)) {
           System.out.print("검색할 키워드를 입력하세요: ");
           String keyword = scanner.nextLine();
           boolean exist = false; //일치하는 데이터가 있는지 여부
           
           if (keyword.trim().isEmpty()) { //유효성 검사, 공백 입력 방지
            System.out.println("유효하지 않은 입력입니다.");
            return;
            }
           
           while(reader.hasNextLine()) { //파일의 끝까지 한 줄씩 읽기
               String line = reader.nextLine(); //한 줄 읽기
               if(line.contains(keyword)) { //키워드가 포함된 줄인지 확인
                   System.out.println(line);
                   exist = true;
               } 
           }

           if(!exist) { //일치하는 데이터가 없는 경우
               System.out.println("일치하는 데이터가 없습니다.");
           }

        } catch (FileNotFoundException e) {
            System.out.println("파일이 존재하지 않습니다.");
            e.printStackTrace();
        }
    }
}
