package chap08_interface_usage;

public class Television implements RemoteControl {
	int volume;
	
	@Override
	public void turnOn() {
		System.out.println("TV¸¦ ÄÕ´Ï´Ù.");
	}

	@Override
	public void turnOff() {
		System.out.println("TV¸¦ ²ü´Ï´Ù.");
	}

	@Override
	public void setVolume(int volume) {
		this.volume = volume;
		System.out.println("º¼·ýÀ» " + volume + "·Î ¼³Á¤");
	}

}
