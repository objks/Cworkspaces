package chap06.class_review;

// 프로그램을 실행하려면 main() 메소드가 있는 클래스가 있어야 함.

public class AirPlaneExam {

	// 프로그램이 실행되면 main()이 수행됨
	public static void main(String[] args) {
		AirPlane a1 = new AirPlane();
		AirPlane a2 = new AirPlane("보잉");
		AirPlane a3 = new AirPlane(900, "록키드");
		a3.height = 10000;
		a2.speed = 500;
		System.out.println("제조사 : " + a1.company);
//		height = 10000;
	}

}
