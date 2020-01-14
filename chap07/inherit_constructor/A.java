package chap07.inherit_constructor;

public class A {
	int f1;
	String s1;
	
	// 디폴트 생성자가 존재
//	public A() {
//		System.out.println("A() 생성자가 호출됨");
//	}
	
	public A(int f1, String s1) {
		this.f1 = f1;
		this.s1 = s1;
	}
}
