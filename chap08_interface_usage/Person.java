package chap08_interface_usage;

public class Person {
	// 필드, 생성자, 메소드
	RemoteControl sb;	// 필드로 인터페이스를 사용 (변수처럼 사용 가능)
	String name;
	
	public Person(String name) {
		this.name = name;
	}
	
	// 생성자 : 매개변수로 인터페이스를 사용
	public Person(RemoteControl rc) {
		this.sb = rc;
	}
	
	// 메소드
	public void watchMovie() {	// 메소드
		// 로컬변수로 인터페이스를 사용
		RemoteControl rc = new SettopBox();
		rc.turnOn();
		SettopBox s = (SettopBox)rc;
		s.showMovie("스타워즈");
	}
	
	// 메소드의 매개변수로 인터페이스를 사용
	public void method3(RemoteControl rc) {
		rc.turnOn();
		rc.setMute(true);
		rc.turnOff();
	}
}
