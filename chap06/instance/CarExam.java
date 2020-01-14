package chap06.instance;

public class CarExam {

	// 인스턴스 멤버
	public static void main(String[] args) {
		Car.MaxSeatNum = 6;	// 공통데이터, 객체 생성없이 접근 : static
		Car.chageBattery(); // 객체의 생성없이 접근
		
		Car car1 = new Car();
		car1.setSpeed(50);
		car1.speed=60;
		System.out.println("현재 속도 : " + car1.getSpeed());
	}

}
