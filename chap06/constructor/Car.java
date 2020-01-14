package chap06.constructor;

public class Car {
	int speed;
	int seat;
	String model;
	String color;
	
	// 생성자를 정의하지 않았음 -> defualt 생성자가 존재한다
	public Car() {	// 디폴트 생성자	(매개변수 없음)
		// 실행내용은 있어도 되고 없어도 된다. (일반적으로 없음)
		// 디폴트 생성자는 정의하지 않아도 존재하므로 정의하지 않아도 된다
	}
	// 생성자 : 디폴트 생성자가 아닌 다른 생성자가 존재하면 , default 생성자는 없다.
	public Car(int speed) {	// 초기값으로 설정하고 싶은 값을 매개변수로 받는다.
		this.speed = speed;
	}
	public Car(int speed, int seat) {
		this.speed = speed;
		this.seat = seat;		
	}
	
	public Car(String model, String color, int speed) {
		this.color = color;
		this.model = model;
		this.speed = speed;
	}
	
	public Car(int seat, String model, String color, ) {
		this.color = color;
		this.model = model;
		this.seat = seat;
	}
}
	