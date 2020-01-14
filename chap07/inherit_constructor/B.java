package chap07.inherit_constructor;

public class B extends A {
	int f3;
	
	// 1. 디폴트 생성자
//	public B() {
//		super();
//		System.out.println("B() 생성자가 호출됨");
//	}
	
	public B(int f1, String s1) {	// super : 부모 클래스
		super(f1, s1);	// 먼저 부모가 존재해야 함 -> 부모 생성자가 호출됨
	}
	
	public B(int f1, String s1, int f3) {
		super(f1, s1);	// 먼저 부모가 존재해야 함 -> 부모 생성자가 호출됨
		this.f3 = f3;	// this : 자기 자신 클래스
	}
}
