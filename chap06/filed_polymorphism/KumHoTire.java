package chap06.filed_polymorphism;

public class KumHoTire extends Tire {
	// 생성자 : default 생성자 -> 부모의 생성자를 호출
	public KumHoTire(String location, int maxRotation) {
		super(location, maxRotation);
	}
	
	// 자식 객체에서 부모의 메소드를 재정의
	@Override
	public boolean roll() {
		++accumulatedRotation;
		if(accumulatedRotation < maxRotation) {	// 계속 사용 가능
			System.out.println(location + " KumHoTire 수명 : " +
					(maxRotation - accumulatedRotation));
			return true;
		} else {	// 수명이 다함 (펑크)
			System.out.println("***" + location + " KumHoTire 펑크 ***");
			return false;
		}
	}
}
