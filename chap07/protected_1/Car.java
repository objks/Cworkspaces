package chap07.protected_1;

public class Car {
	// 필드
	public int f1;
	protected int f2;
	String f3;
	private int f4;
	
	public Car() {
		System.out.println("car()");		
	}
	protected Car(int f1) {
		System.out.println("Car(f1)");	
	}
	Car(String f3) {
		System.out.println("car(f3)");	
	}
	private Car(int f1, String f3) {
		System.out.println("car(f1, f3)");	
	}
	
	// 메소드
	public void method1() { }
	protected public void method2() { }
	void method3() { }
	private void method4() { }
	
}
