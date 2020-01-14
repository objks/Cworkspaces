package chap06.polymorphism;
//자바 : 자식이 부모를 선택해서 상속을 한다.
//부모는 하나만 선택 가능, C++ : 여러 개 가능
//부모의 필드, 메소드를 사용 가능
public class Dog extends Animal {
	int count;		// 1년에 털갈이 횟수
	
	public void method() {
		sound();	// 부모가 정의한 메소드를 사용
		age = 10;	// 개월 : 부모가 정의한 필드를 사용
	}
	
	@Override
	public void sound() {
		System.out.println("멍멍!");
	}
}
