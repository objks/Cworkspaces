package chap06.method;

public class Car {
	//필드
	int speed;
	int seatNum;
	String color;
	int gas;
	
	// 생성자
	public Car() { }
	public Car(String color) {
		this.color = color;
	}
	
	// 메소드
	public void speedUP(int amount) {
		speed += amount;
	}
	
	public void setSpeed(int speed) {
		this.speed = speed;
	}
	
	public int getSpeed() {
		return speed;
	}
	
	public void turnLeft() {
		System.out.println("좌회전 합니다");
		// 자동차를 좌회전하는 기능을 구현
	}
	
	public void stop() {
		System.out.println("정지");
	}
	
	public void gas(int gas) {
		this.gas = gas;
	}
	
	public void drive() {
		gas--;		
	}
	
	public int getGas() {
		return gas;
	}
}
