package chap08_abstract;

public abstract class Aclass {	// abstract : 추상 클래스 -> 공통사항
	// 미완성된 클래스 -> 객체와 불가능
	// 추상클래스를 상속을 받아 새롱누 클래스 정의해서 사용
	// 멤버 : 필드, 생성자, 메소드
	// 추상메소드
	
	// 인스턴스 메소드
	public void method() {
		System.out.println("method1()이 호출됨");
	}
	
	// 추상 메소드 :
	public abstract void method2();	// 선언부만 존재 : 반환형, 메소드이름,
	
}
