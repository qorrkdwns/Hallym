package java2;
class Book {
    // 필드 (멤버 변수)
    String title; //책 제목
    String author; //저자

    // 생성자
    public Book(String title, String author) {
        this.title = title;
        this.author = author;
    }

    // 메서드
    public void printInfo() {
        System.out.println("책 제목 : " + title + ", 저자 : " + author);
    }
}

class EBook extends Book {
    
    double fileSize;

    public EBook(String title, String author, double fileSize) {
        super(title, author);
        this.fileSize = fileSize;
    }

    public void printInfo() {
        super.printInfo();
        System.out.println("파일 크기 : " + fileSize + "MB");
    }
}

public class Library {
    public static void main(String[] args) {
        // Book 객체 생성
        Book book1 = new Book("해리포터", "J.K. 롤링");
        Book book2 = new Book("어두운 숲", "류츠신");

        //EBook 객체 생성
        EBook ebook1 = new EBook("오리지널스", "애덤 그랜트", 2.5);
        EBook ebook2 = new EBook("클린 코드", "로버트 C. 마틴", 3.1);

        // 메서드 호출
        book1.printInfo();
        book2.printInfo();
        ebook1.printInfo();
        ebook2.printInfo();
    }
}
