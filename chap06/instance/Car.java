package chap06.instance;

public class Car {
	//필드 : 인스턴스 필드
	int speed;
	String model;
	String color;
	
	// 정적필드 : 공용 데이터 -> 클래스 Car에 공통으로 사용되는 데이터 - 하나만 존재
	public static int MaxSeatNum;	// 정적필드는 static을 붙여준다
	
	// 생성자
	public Car() { }
	
	// 메소드
	public void setSpeed(int s) {
		speed = s;
	}
	
	public int getSpeed() {
		return speed;
	}
	
	// 정적 메소드 : 객체의 생성없이 존재한다. 
	// 접근방법 : 클래스이름, 메소드이름(Car.changeBattery())
	public static void chageBattery() {
		System.out.println("배터리를 교환한다");
	}
}
