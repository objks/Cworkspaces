package chap06;

public class Person {
	// 필드
	String name;
	String ssn;
	String birthday;
	
	double height = 10.0;
	double weight = 2.5;
	
	public Person() {
		System.out.println("키 : " + height);
		height = 20.0;
		System.out.println("키2 : " + height);
	}
	
	// 부품
	int head;
	int arm;
	int foot;
	
	// 소유
	Car myCar;
}
