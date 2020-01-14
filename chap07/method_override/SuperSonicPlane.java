package chap07.method_override;

public class SuperSonicPlane extends Airplane {
	int mode;	// 비행 모드 1 : 일반 비행기로 비행, 2 : 초음속으로 비행
	
	public void setMode(int mode) {
		this.mode = mode;
	}
	
	@Override
	public void fly() {
		if(mode == 1)
			super.fly();
		else 
			System.out.println("초음속으로 비행 합니다.");
	}
	
	public void method() {
		super.fly();
	}
}
