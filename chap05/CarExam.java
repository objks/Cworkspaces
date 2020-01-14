package chap05;

import chap06.Car;

public class CarExam {

	public static void main(String[] args) {
		Car yourcar = new Car();	// study.chap06.Car : 접근제한자가 public이므로 접근가능(사용 가능)
		Tire myTire = new Tire();	// 접근제한자가 default이므로 보이지 않음(같은 패키지에 없기때문에)
	}

}
