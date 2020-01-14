package chap08_multiple_interface;

public class Main {

	public static void main(String[] args) {
		Television tv = new Television();
//		tv.MAX_VOLUME = 20;		상수라 변경 불가능
		tv.turnOn();
		tv.setVolume(10);
		tv.setMute(true);	// 무음처리
		tv.setMute(false);	// 무음처리 해제
		tv.turnOff();
		RemoteControl.chageBattery();// 정적 메소드
		// 클래스 : 자동타입변환 (부모클래스 타입 = 자식클래스 객체)
		// 인터페이스 : 자동타입변환 (인터페이스 = 구현클래스 객체)
		RemoteControl rc = new Television();
		rc.setMute(true);
		rc.setVolume(20);
				
//		rc.changeChannel(07);	불가능(Television 클래스에서 정의했기 때문에)
//		rc.channel =8;			불가능 (클래스에서 정의)		
		
		// 강제 타입변환 : 원래 생성된 객체가  Television이므로 가능
		Television t =(Television)rc;
		t.channel = 9;
		t.changeChannel(14);	// 클래스에서 만든 것
		t.setVolume(5);			// 인터페이스 추상메소드 재정의
		if(rc instanceof Television) {
			Television t2 = (Television)rc;
		} else if(rc instanceof Aircon) {
			Aircon a = (Aircon) rc;			// 가능한것처럼 보이지만
			// ClassCastException 예외가 발생함(원래 Television이기 때문에)
		}
		
	}	

}
