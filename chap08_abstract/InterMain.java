package chap08_abstract;

import org.omg.CORBA.PUBLIC_MEMBER;

public class InterMain {

	public static void main(String[] args) {
	InterfaceA ia = new InterfaceAImpl(10);	//자동타입변환
	// 인터페이스에서 정의한 부분만 보인다(사용 가능)
	ia.method1();
	ia.method2();
	ia.method3();		// 인터페이스타입이므로 안보임
	InterfaceAImpl ii = (InterfaceAImpl)ia;		// 강제타입변환
	ii.field1 = 20;
	ii.method3();
	
	// 익명구현객체 : 사용되는 곳에서 정의를해서 사용
	InterfaceA c = new InterfaceA() {
		int field2;
		
		@Override
		public void method1() {
			System.out.println("셋탑박스 method1() 호출됨");
			int sum = add(10,20);
			method4();
		}
		int add(int a, int b) {
			return a+b;
		}
		void method4() {
			
		}
	};
	c.method1();
//	c.field2 = 10;	구현객체에서 선언한 필드, 메소드는 사용불가
	}

}
