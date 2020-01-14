package chap08_annoymous;

import chap08_interface_definition.Television;

public class Main {

	public static void main(String[] args) {
		// 텔레비전 구현 객체를 사용 -> 객체의 이름이 없음
//		RemoteControl r = new Television();
		// 익명객체는 클래스 이름이 없음
		// 클래스 이름이 없으므로 생성자를 인터페이스 이름으로 사용
		RemoteControl rc = new RemoteControl() {
			// 구현 객체 : RemoteControl을 implements(구현)
			// 추상 메소드를 재정의 해야함
			// 클래스 블럭이다 : 필드, 생성자, 메소드
			int field1 = 20;
			
			// 메소드
			void method1() {
				
			}
			
			@Override
			public void turnOn() {
				System.out.println("TV를 켭니다");
			}
			
			@Override
			public void turnOff() {
				System.out.println("TV를 끕니다");
			}
			
			@Override
			public void setVolume(int volume) {
				System.out.println("볼륨을 " + volume + "으로 설정");
			}
			
			// default 메소드 존재
		};
		rc.turnOn();
		rc.turnOff();
		rc.setVolume(20);
//		rc.field1 = 20;		사용불가(구현객체 내에서만 사용)
//		rc.method1();		사용불가(구현객체 내에서만 사용)
		//클래스 이름이 없어서 강제타입변환을 할 수 없음
		
		RemoteControl audio = new RemoteControl() {
			
			@Override
			public void turnOn() {
				System.out.println("오디오를 켭니다");
			}
			
			@Override
			public void turnOff() {
				System.out.println("오디오를 끕니다");
			}
			
			@Override
			public void setVolume(int volume) {
				System.out.println("볼륨을 " + volume + "으로 설정");
			}
		};
		audio.turnOn();
		audio.turnOff();
		audio.setVolume(40);
	}

}
