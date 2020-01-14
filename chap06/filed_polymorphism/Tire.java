package chap06.filed_polymorphism;

public class Tire {
	// 필드
	public int maxRotation;			// 수명
	public int accumulatedRotation;	// 누적 회전수
	public String location;			// 장착 위치
	
	// 생성자
	public Tire(String location, int maxRotation) {
		this.location = location;
		this.maxRotation = maxRotation;
	}
	
	// 메소드
	public boolean roll() {	// Tire 가 굴러가는 기능
		++accumulatedRotation;
		if(accumulatedRotation < maxRotation) {	// 계속 사용
			System.out.println(location + " Tire 수명: " + 
					(maxRotation - accumulatedRotation));
			return true;	// 계속 사용 가능
		} else {	// 수명이 다 됨
			System.out.println("*** " + location + " 타이어 펑크 ***");
			return false;	// 펑크 발생
		}
	}
}
