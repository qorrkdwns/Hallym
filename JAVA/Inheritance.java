package java2;

class Animal {
    String name;

    public void eat() {
        System.out.println(name + "가 먹고 있습니다.");
    }
}

class Dog extends Animal { // Animal 클래스를 상속받음
    public void bark() {
        System.out.println(name + "가 짖고 있습니다.");
    }
}

public class Inheritance {
    public static void main(String[] args) {
        Dog dog = new Dog(); // Dog 객체 생성
        dog.name = "멍멍이";  // 부모 클래스의 필드 사용
        dog.eat();           // 부모 클래스의 메서드 사용
        dog.bark();          // 자식 클래스의 메서드 사용
    }
}
