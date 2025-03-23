/*문제 1: 파일에 데이터 저장
사용자로부터 텍스트 데이터를 입력받아 data.txt 파일에 저장하는 프로그램을 작성하세요.
종료 문구("-1")를 입력하면 입력이 종료되고 파일에 저장된 데이터가 출력됩니다. */
package java2;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner; 

public class FileWriteData {
    public static void main(String[] args) {
        try {
            File file = new File("data.txt"); //파일 객체 생성
            FileWriter writer = new FileWriter("data.txt"); //파일 쓰기 객체 data 생성
            Scanner scanner = new Scanner(System.in); //키보드로부터 입력받기 위한 Scanner 객체 생성
            while(true) {
                System.out.print("텍스트 데이터를 입력하세요. 종료하려면 -1을 입력하세요. : ");
                String input = scanner.nextLine(); //텍스트 데이터 입력
                if(input.equals("-1")) {
                    break; //종료 문구를 입력하면 입력 종료
                }
                writer.write(input + "\n"); //파일에 문자열 쓰기
            }
            writer.close(); //파일 쓰기 객체 닫기
            scanner.close(); //키보드 입력 객체 닫기

            Scanner reader = new Scanner(file); //파일 읽기 객체 생성
            while(reader.hasNextLine()) { //파일의 끝까지 한 줄씩 읽기
                String line = reader.nextLine(); //한 줄 읽기
                System.out.println(line); //한 줄 출력
            }
            reader.close(); //파일 읽기 객체 닫기
    
        } catch(IOException e) {
            System.out.println("오류가 발생했습니다.");
            e.printStackTrace();
        }
    }
}
