package chap07.protected_2;

import chap07.protected_1.Car;

public class ClassD extends Car {
	public void method() {		
	f1 = 10;		// 퍼블릭만 가능하다 
	f2 = 10;		// protected
	f3 = 10;		// default
	f4 = 10;		// private
	}
}
