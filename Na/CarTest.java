package Na;

public class CarTest {

	public static void main(String[] args) {
		Car firstCar = new Car("morning");
		Car seconCar = new Car("morning");
		if(firstCar.equals(seconCar)) {
			System.out.println("동일한 차");
		} else {
			System.out.println("다른 차");
		}
		System.out.println(firstCar.toString());
	}
}
