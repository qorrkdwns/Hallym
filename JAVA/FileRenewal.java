/*문제 3: 파일 데이터 갱신
data2.txt 파일의 내용을 수정하는 프로그램을 작성하세요.

사용자가 수정할 키워드와 새로운 텍스트를 입력합니다.
파일에서 해당 키워드를 포함하는 줄을 찾아, 입력한 텍스트로 교체합니다.
파일의 다른 내용은 유지되고, 수정된 내용만 반영되도록 구현하세요.
파일이 없는 경우, "파일이 존재하지 않습니다."라는 메시지를 출력하세요. */
package java2;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class FileRenewal {
    public static void main(String[] args) {
        File file = new File("data2.txt"); // 파일 객체 생성

        try (Scanner reader = new Scanner(file);
             Scanner scanner = new Scanner(System.in)) {
                System.out.print("수정할 키워드를 입력하세요: ");
                String keyword = scanner.nextLine().trim(); //키워드 입력(공백 제거)
                System.out.print("새로운 텍스트를 입력하세요: ");
                String renew = scanner.nextLine().trim(); //새로운 텍스트 입력(공백 제거)

                if (keyword.trim().isEmpty() || renew.trim().isEmpty()) { //유효성 검사, 공백 입력 방지
                    System.out.println("유효하지 않은 입력입니다.");
                    return;
                }

               System.out.println("수정 결과:");
               ArrayList<String> lines = new ArrayList<>();
               boolean exist = false; //일치하는 데이터가 있는지 여부
               while(reader.hasNextLine()) { //파일의 끝까지 한 줄씩 읽기
                    String line = reader.nextLine(); //한 줄 읽기
                    if(line.contains(keyword)) { //키워드가 포함된 줄인지 확인
                        line = line.replace(keyword, renew); //키워드를 새로운 텍스트로 교체
                        exist = true;
                    }
                    lines.add(line);  //데이터를 리스트에 추가(키워드가 포함된 경우 수정된 데이터 추가)
                }

                try (FileWriter writer = new FileWriter(file)) {
                    for (String line : lines) { //for (int i = 0; i < lines.size(); i++)
                        writer.write(line + "\n"); // 파일에 쓰기
                        System.out.println(line);
                    }
                    writer.flush(); // 데이터 저장 완료, 명시적 효과를 위해 작성(자동으로 flush)
                } 

                if(!exist) { //일치하는 데이터가 없는 경우
                    System.out.println("키워드와 일치하는 데이터가 없습니다.");
                }

        } catch (FileNotFoundException e) { //try문 하나에 catch문 여러 개 사용 가능.
            System.out.println("파일이 존재하지 않습니다.");
            e.printStackTrace();
        } catch (IOException e) {
            System.out.println("파일 쓰기 오류가 발생했습니다.");
            e.printStackTrace();
        }
    }
}
