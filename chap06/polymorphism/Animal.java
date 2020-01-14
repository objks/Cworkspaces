package chap06.polymorphism;

public class Animal {
	String kind;	// 고양이, 개
	int age;
	String name;
	
	public void sound() {
		System.out.println("소리를 냅니다.");
	}
	
	public void method1() {
		System.out.println("Animal method()");
	}
}
