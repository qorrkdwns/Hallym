/*문제 1: 파일 데이터 통합 관리 프로그램
사용자가 입력한 데이터를 data2.txt 파일에 저장하고, 저장된 데이터를 다시 읽어와 출력하는 프로그램을 작성하세요.
종료 문구("-1")를 입력하면 데이터를 저장하고 파일 내용을 읽어옵니다.
파일이 없는 경우, 파일을 생성한 후 데이터를 저장하도록 구현하세요. */
package java2;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class FileManagement {
    public static void main(String[] args) {
        File file = new File("data2.txt"); // 파일 객체 생성

        try (
            FileWriter writer = new FileWriter(file, true); // append 모드(기존 파일에 이어서 쓰기)
            Scanner scanner = new Scanner(System.in)
        ) {
            while (true) {
                System.out.print("데이터를 입력하세요. (-1 입력 시 종료) : ");
                String input = scanner.nextLine();

                if (input.equals("-1")) {
                    break; // 종료
                }

                if (input.trim().isEmpty()) { //유효성 검사, 공백 입력 방지
                    System.out.println("유효하지 않은 입력입니다. 다시 입력하세요.");
                    continue;
                }

                writer.write(input + "\n"); // 파일에 쓰기
            }

            writer.flush(); // 데이터 저장 완료
        } catch (IOException e) {
            System.out.println("오류가 발생했습니다.");
            e.printStackTrace();
        }

        // 파일 읽기
        try (Scanner reader = new Scanner(file)) {
            System.out.println("파일 내용:");
            while (reader.hasNextLine()) {
                String line = reader.nextLine();
                System.out.println(line);
            }
        } catch (IOException e) {
            System.out.println("파일 읽기 오류가 발생했습니다.");
            e.printStackTrace();
        }
    }
}

