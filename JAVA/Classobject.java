package java2;
class Student {
    // 필드 (멤버 변수)
    String name;
    int age;

    // 생성자
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // 메서드
    public void introduce() {
        System.out.println("안녕하세요, 제 이름은 " + name + "이고, 나이는 " + age + "살입니다.");
    }
}

public class Classobject {
    public static void main(String[] args) {
        // 객체 생성
        Student student1 = new Student("철수", 20);
        Student student2 = new Student("영희", 22);

        // 메서드 호출
        student1.introduce();
        student2.introduce();
    }
}
