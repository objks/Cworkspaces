package chap06.method;

public class CarExam {

	public static void main(String[] args) {
		Car car1=new Car();
		car1.gas(40);
		for(int i=0; i <20; i++){
			car1.drive();
		}
		car1.speedUP(20);
		car1.speedUP(-10);
		car1.stop();
		System.out.println("남은 가솔린의 양 : " +car1.getGas());
	}

}
