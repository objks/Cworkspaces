package chap06.class_review;

	// 관심있는 대상 :Car
public class Car {
	// 구성멤버 : 필드, 생성자, 메소드
	// 필드 : 상태(speed, seatNum), 기본정보(company, owner), 부품(Engine, Tire, Handle)
	int speed;
	int seatNum;
	String owner;
	String company;
	String model;
	
	// 생성자
	// 생성자를 정의하지 않으면 기본 생성자가 존재하는 것으로 컴파일러가 간주
	public Car() { 
		System.out.println("Car()");
	} 	// 실행문이 없음 : 메소드의 일종, 반환형이 없음, 주소값이 반환됨
	
	// 생성자의 역할 : 1. 객체 생성(메모리 확보)	2. 필드값을 초기화
	public Car(String company, String m) {
		System.out.println("Car(String company, String m)");
		this.company = company;	// 매개변수와 필드를 구분하기 위해 this를 사용
		model = m;	// this 생략 가능
	}
	
	// 생성자 오버로딩 : 생성자를 여러개 허용
	// 매개변수의 타입, 순서, 위치 -> 구별할 수 있으면 허용
//	public Car(String company, String owner) {	// 허용 안됨 : 위에서 정의한 생성자	
//	}
	
	public Car(int speed, String model) {	// 허용
		System.out.println("Car(int speed, String model)");
		this.speed = speed;	// 필드값을 주어진 매개변수 값으로 대입
		this.model = model;	// this : Car
	}
	
	public Car(String company) {	// company
		this(company, "소나타");	// 기존에 정의한 생성자를 이용 this : Car
		System.out.println("String company");	// 다른 생성자를 호출할 때 생성자를 맨 처음 와야 함		
	}
	
	// 메소드
	public void speedUp(int speed) {
		this.speed = speed;
	}
}
