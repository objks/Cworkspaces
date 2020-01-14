package chap08_interface_usage;

public class SettopBox implements RemoteControl {
	int volume;
	
	@Override
	public void turnOn() {
		System.out.println("셋탑박스 전원을 켭니다.");
	}

	@Override
	public void turnOff() {
		System.out.println("셋탑박스 전원을 끕니다.");
	}

	@Override
	public void setVolume(int volume) {
		this.volume = volume;
		System.out.println("볼륨을 " + volume + "로 설정");
	}
	
	// 추가 메소드
	public void storeFile(String name) {
		System.out.println("파일"  + name + "을 저장합니다.");
	}
	
	public void showMovie(String name) {
		System.out.println("영화 " + name + "을 시청");
	}

}
