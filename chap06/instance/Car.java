package chap06.instance;

public class Car {
	//�ʵ� : �ν��Ͻ� �ʵ�
	int speed;
	String model;
	String color;
	
	// �����ʵ� : ���� ������ -> Ŭ���� Car�� �������� ���Ǵ� ������ - �ϳ��� ����
	public static int MaxSeatNum;	// �����ʵ�� static�� �ٿ��ش�
	
	// ������
	public Car() { }
	
	// �޼ҵ�
	public void setSpeed(int s) {
		speed = s;
	}
	
	public int getSpeed() {
		return speed;
	}
	
	// ���� �޼ҵ� : ��ü�� �������� �����Ѵ�. 
	// ���ٹ�� : Ŭ�����̸�, �޼ҵ��̸�(Car.changeBattery())
	public static void chageBattery() {
		System.out.println("���͸��� ��ȯ�Ѵ�");
	}
}