package chap06.method;

public class CalculatorExam {

	public static void main(String[] args) {
		Calculator cal = new Calculator();
		int a=10;
		int b=20;
		int sum=cal.add(10, 25);
		System.out.println("гу : " + sum);
		
		double d1=20.0;
		double d2 = 30.0;
		System.out.println("гу : " + cal.add(d1, d2));
		System.out.println();
		
		printer myPrinter = new printer();
		myPrinter.println(3.14);
		myPrinter.println(40);
		myPrinter.println("Hello World!");
		
	}

}
