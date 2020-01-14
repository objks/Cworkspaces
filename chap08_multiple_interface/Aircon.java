package chap08_multiple_interface;

public class Aircon implements RemoteControl {

	@Override
	public void turnOn() {
		System.out.println("에어콘을 켭니다.");
	}

	@Override
	public void turnOff() {
		System.out.println("에어콘을 끕니다.");
	}

	@Override
	public void setVolume(int volume) {
		System.out.println("사용하지 않는 기능 입니다.");
	}

}
