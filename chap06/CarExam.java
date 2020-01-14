package chap06;

public class CarExam {

	// 실행용 클래스 : main() 메소드가 있는 클래스
	public static void main(String[] args) {
		Car mycar=new Car();	// 객체 한 개를 생성
		Tire myTire = new Tire();
		Car hongCar = new Car();
		// 클래스 변수 : myCar, myTire, hongTire(참조 변수 : 힙 영역에 있는 객체의 주소를 가지고 있다)
		Car car1=null;
		car1 = new Car();
	}

}
