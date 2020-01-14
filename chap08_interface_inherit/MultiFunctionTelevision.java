package chap08_interface_inherit;

public class MultiFunctionTelevision implements MultipleRemotecontrol {

	@Override
	public void turnOn() {
		System.out.println("다기능TV 전원 ON");
	}

	@Override
	public void turnOff() {
		System.out.println("다기능TV 전원 OFF");
	}

	@Override
	public void setVolume(int volume) {
		System.out.println("볼륨 설정");
	}
	
	// searchable 인터페이스에 있는 추상메소드를 재정의
	@Override
	public void search(String url) {
		// TODO Auto-generated method stub

	}

	// MultipleRemoteControl에서 정의한 추상메소드를 재정의
	@Override
	public void changeChannel(int channel) {
		// TODO Auto-generated method stub

	}

}
