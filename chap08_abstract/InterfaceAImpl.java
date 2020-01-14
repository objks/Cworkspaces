package chap08_abstract;

//구현 클래스
public class InterfaceAImpl implements InterfaceA {

	// 상수, default 메소드, 정적메소드도 존재
	// 구현한 인터페이스의 추상메소드를 재정의
	@Override
	public void method1() {
		System.out.println("InterfaceAImpl:method1() 호출됨");
	}

	// 클래스 : 필드, 생성자, 다른 메소드
	int field1;
	
	// 생성자
	public InterfaceAImpl(int field1) {
		this.field1 = field1;
	}
	
	// 메소드
	public void method3() {
		System.out.println("InterfaceAImpl : method2() 호출됨");
	}
}
