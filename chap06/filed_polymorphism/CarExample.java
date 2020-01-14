package chap06.filed_polymorphism;

public class CarExample {

	public static void main(String[] args) {
		// 자동차를 생성->일정한 횟수를 운행->타이어 수명이 다해서 펑크
		// 자동차를 stop->타이어를 교체-> 계속 운행
		Car car = new Car();
		for(int i =0;i < 5;i++) {
			int problemLocation = car.run();
			switch(problemLocation) {
			case 1:	// 앞왼쪽바뀌 펑크
				System.out.println("앞왼쪽 HanKookTire로 교체");
				car.frontLeftTire = new HanKookTire("앞왼쪽", 15);
				break;
			case 2:	// 앞 오른쪽 바뀌 펑크 -> 교체
				System.out.println("앞오른쪽 KumHoTire로 교체");
				car.frontRightTire = new KumHoTire("앞오른쪽", 10);
				break;
			case 3:	// 뒤왼쪽바뀌 펑크 -> 교체
				System.out.println("뒤왼쪽 HanKookTire로 교체");
				car.backLeftTire = new HanKookTire("뒤왼쪽", 12);
				break;
			case 4:	// 뒤오른쪽바뀌 펑크 -> 교체
				System.out.println("뒤오른쪽 KumHoTire로 교체");
				car.backRightTire = new KumHoTire("뒤오른쪽", 13);
				break;
			}
			System.out.println("-------------------------");
		}
	}

}
