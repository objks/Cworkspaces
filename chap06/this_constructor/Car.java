package chap06.this_constructor;

public class Car {
	String model;
	String color;
	int maxSpeed;
	
	public Car() {
		// 디폴트 생성자
	}
	
	public Car(String model) {
		this(model, "white");	// 아래 3문장 대신에 다른 생성잘르 호출 -> 생성자 2를 호출
//		this.model = model;
//		this.color = "white";
//		this.maxSpeed = 250;
	}
	
	public Car(String model, String color) {
		this(model, color, 250);
//		this.model = model;
//		this.color = color;
//		this.maxSpeed = 250;
	}
	
	public Car(String model, String color, int speed) {
		this.model = model;
		this.color = color;
		this.maxSpeed = speed;
	}
}
