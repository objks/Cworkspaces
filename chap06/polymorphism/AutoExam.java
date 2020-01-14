package chap06.polymorphism;

public class AutoExam {

	public static void main(String[] args) {
		B b = new B();
		C c = new C();
		D d = new D ();
		B b2 =d;		// 자동타입변환
		b2 = c; 		// 형제(자동타입변환이 불가능)
		b2 = e;			// 삼촌(자동타입변환이 불가능)
	}

}
