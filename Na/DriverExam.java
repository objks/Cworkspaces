package Na;
/*
 * 2.8 ��Ӱ��迡�� �޼ҵ� ������
�������� ���Ͽ� �����ϰ�, �޼ҵ� �������� ���� VehicleŬ����, DriverŬ����, VehicleŬ������ ����Ͽ� ���� 
BusŬ����, TaxiŬ���� �� ���� Ŭ���� DriverExample Ŭ������ ����Ͽ� ���α׷��� �ϼ��ϰ� �� ���� ����� �����ÿ�.
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
