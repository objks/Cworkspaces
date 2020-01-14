package chap07.method_override;

public class SuperExam {

	public static void main(String[] args) {
		SuperSonicPlane ssp = new SuperSonicPlane();
		ssp.setMode(1);
		ssp.fly();			// 일반 비행 
		ssp.setMode(2);
		ssp.fly();			// 초음속 비행
		Airplane ap = ssp;
		ap.fly();
		// 메소드 재정의 특징 : 자식이 재정의한 메소드가 호출됨
	}

}
