package chap06.class_review2;

/*
 * 핸드폰 : 알람- 기상
 * 		 뉴스 : 세상사 (인터넷)
 * 		통화 : 음성
 * 		SNS : 카톡(문자메시지 전달)
 * 			페이스북
 * 		게임
 * 		앱 - 서비스 제공(안드로이드)
 */

public class HandPhone {
	// 구성 멤버 : 필드, 생성자, 메소드
	// 필드 : 일반정보, 상태정보, 부품(구성품), 상수(static final)
	public static final int BUSY = 1;	// 상수 : static(정적) final(불변,고정)
	public static final int IDLE = 2;	// 정적 : 메소드영역의 클래스에 상주
	public static final int RING = 3;	// 클래스이름으로 접근 : HandPhone.BUSY
	int state = IDLE;	// 통화상태를 저장하는 필드 -> 생성자가 객체를 생성하기 전에 초기화
	int power;			// 전원의 양
	String model;		// 갤9
	int dataUsage;		// 1GB : 데이터 사용량
	int monthlyFee;		// 통신요금
	//부품 : WiFi, BT, GPS, NFC, 센서, DIsplay, 카메라 (객체)
	
	// 생성자 : 1. 객체를 생성(heap 영역의 메모리를 할당 받음) -> 2. 초기화(어떤 값을 설정)
	// 생성자의 형식 : ClassName() { }
//	HandPhone() {	// 기본 생성자 : 다른 생성자가 없으면 컴파일러가 기본 생성자를
					// 정의하지 않아도 있다고 가정
//	}
	// 객체를 생성하면서 어떤 초기값을 넣어줄 필요성이 있을 경우 새로운 생성자를 정의한다.
	HandPhone(String model, int fee) {
		this.model = model;	// this : 매개변수와 필드이름을 구분하기 위해서 사용하는 것 (HandPhone)
		monthlyFee = fee;	// this가 불필요
	}
	
	HandPhone(int power, String model) {	// 컴파일러가 위에 있는 생성자와 구별할 수 있음
		this.power = power;
		this.model = model;
	}

	public HandPhone(int state, int power, String model, int dataUsage, int monthlyFee) {
		this.state = state;
		this.power = power;
		this.model = model;
		this.dataUsage = dataUsage;
		this.monthlyFee = monthlyFee;
	}

	// 생성자 오버로딩 : 매개변수 타입, 순서, 갯수가 다르면 다른 생성자로 간주
	public HandPhone(String model, int dataUsage, int monthlyFee) {
		this(IDLE, 0, model, dataUsage, monthlyFee);
//		this.model = model;
//		this.dataUsage = dataUsage;
//		this.monthlyFee = monthlyFee;
//		power = 0;
//		state = IDLE;
	}
	
	// 메소드 : 기능, 동작
	public void powerOn() {
		System.out.println("전원 ON");		
	}
	
	void poweroff() {
		System.out.println("전원 OFF");
	}
	
	void sendMessage(String message) {
		dataUsage += message.length();
		System.out.println(message + "를 전송");
	}
	String receiveMessage() {
		String buffer = "문자 메시지 수신 내용";
		dataUsage += buffer.length();
		power -= 1;
		return "문자 메시지 수신내용";
	}
	
	void chargeBattery(int hour) {
		System.out.println("충전합니다.(" + hour + ")");
		power += (hour * 2);
	}
	
	void hookoff() {
		System.out.println("전화기 발신 기능 시작");
	}
	
	void hookon() {
		System.out.println("통화를 끊는다");		
	}
	
}
