package chap08_abstract;

public class Bclass extends Aclass {

	// method1()은 재정의 해도 되고 안해도 됨 
	
	// 상속받은 Aclass의 추상 메소드를 재정의해 줘야함
	@Override
	public void method2() {
		System.out.println("Bclass : method2() 호출됨");
	}
}
