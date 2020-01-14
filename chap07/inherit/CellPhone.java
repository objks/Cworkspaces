package chap07.inherit;

public class CellPhone {
	// 필드
	String model;
	String color;
	
	//생성자
//	public CellPhone() {
//		System.out.println("CellPhone() 생성자가 호출됨");
//	}
	
	public CellPhone(String model, String color) {
		System.out.println("CellPhone(String model, String color) ");
		this.model = model;
		this.color = color;
	}
	
	// 메소드
	public void powerOn() {
		System.out.println("전원 ON");
	}
	
	public void powerOff() {
		System.out.println("전원 OFF");
	}
	
	public void sendMessage(String message) {
		System.out.println(message + "를 전송합니다");
	}
	
	public String receiveMessage() {
		System.out.println("메시지를 수신합니다.");
		return "수신된 데이터";
	}
}
