package Na;
/*
 * 2.8 상속관계에서 메소드 다형성
다형성에 대하여 설명하고, 메소드 다형성의 예를 Vehicle클래스, Driver클래스, Vehicle클래스를 상속하여 만든 
Bus클래스, Taxi클래스 및 실행 클래스 DriverExample 클래스를 사용하여 프로그램을 완성하고 그 실행 결과를 적으시오.
 */
public class DriverExam {
	public static void main(String[] args) {
		Driver driver = new Driver();
		Vehicle bus = new Bus();
		Vehicle taxi = new Taxi();
		driver.drive(bus);
		driver.drive(taxi);
		}

}
