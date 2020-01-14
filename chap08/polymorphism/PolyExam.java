package chap08.polymorphism;

public class PolyExam {

	public static void main(String[] args) {
		Car myCar = new Car();
		for (int i = 0; i < 10; i++) {
			int problemLocation = myCar.run();
			if (problemLocation == 1) { // ¿ÞÂÊ¹ÙÄû ÆãÅ©
				myCar.fl = new NesenTire("¾Õ¿ÞÂÊ", 15);
			} else if (problemLocation == 2) {
				myCar.fr = new HanKookTire("¾Õ¿À¸¥ÂÊ", 13);
			} else if (problemLocation == 3) {
				myCar.bl = new HanKookTire("¾Õ¿À¸¥ÂÊ", 12);
			} else if (problemLocation == 4) {
				myCar.br = new HanKookTire("¾Õ¿À¸¥ÂÊ", 14);
			}

		}
	}

}
