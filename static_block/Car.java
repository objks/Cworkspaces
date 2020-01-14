package static_block;

public class Car {
	// 정적 필드
	static int field1 = 20;	// 변수 선언과 함께 초기화
	static int field2;		// 초기화하지 않음
	
	
	// 인스턴스 필드 : 객체 생성 후 메모리에 저장공간이 할당이 된 다음에 사용 필드
	int seatNum;
	int TireNum;
	int speed;
	
	// 잘 안쓰는 기능
	static {	// 정벅 블럭('{'로 시작해서 '}'로 끝나는 부분
				// static { } : 정적 블럭
		field2 = 30;	// 초기화 수행 : 정적 필드만
//		seatNum =4;		// 사용 불가 -> 객체
	}
	
	// 블럭 -> 객체가 생성될 때 수행
	{
		TireNum =4;
	}
	
	// 정적 메소드
	static void method() {
		field1 = 30;
//		seatNum = 4;	// 인스턴스 필드
//		setSpeed(5);	// 인스턴스 메소드 호출 불가
		method2();		// 정적 메소드는 호출 가능
	}
	
	// 인스턴스 메소드
	public void setSpeed(int speed){
		this.speed = speed;
	}
	
	static void method2() {
		System.out.println("정적 메소드2는 실행가능");
	}
}
