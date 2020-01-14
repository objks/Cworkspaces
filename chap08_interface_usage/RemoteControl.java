package chap08_interface_usage;

public interface RemoteControl {
	// 상수, 메소드
	public static final int MAX_VOLUME = 10;
	int MIN_VOLUME = 0;	// 변수가 아니고 상수임
	
	// 추상 메소드
	public void turnOn();	// 선언만 되어있고 구현부분이 없는 메소드
	public void turnOff();
	public void setVolume(int volume);
	
	// default 메소드 : 자바 8부터 추가됨
	default void setMute(boolean mute) {	// 정의부분이 있음
		if(mute) {
			System.out.println("무음 처리를 합니다.");
		} else {
			System.out.println("무음해제를 합니다.");
		}
	}
	
	// 자바 8부터 추가된 기능
	// 정적 메소드 : 인터페이스 이름으로 접근(사용) 가능 -> 공통 기능을 구현할 때
	static void changeBattery() {
		System.out.println("배터리를 교환합니다.");
	}
}
