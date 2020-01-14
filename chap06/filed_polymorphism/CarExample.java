package chap06.filed_polymorphism;

public class CarExample {

	public static void main(String[] args) {
		// �ڵ����� ����->������ Ƚ���� ����->Ÿ�̾� ������ ���ؼ� ��ũ
		// �ڵ����� stop->Ÿ�̾ ��ü-> ��� ����
		Car car = new Car();
		for(int i =0;i < 5;i++) {
			int problemLocation = car.run();
			switch(problemLocation) {
			case 1:	// �տ��ʹٲ� ��ũ
				System.out.println("�տ��� HanKookTire�� ��ü");
				car.frontLeftTire = new HanKookTire("�տ���", 15);
				break;
			case 2:	// �� ������ �ٲ� ��ũ -> ��ü
				System.out.println("�տ����� KumHoTire�� ��ü");
				car.frontRightTire = new KumHoTire("�տ�����", 10);
				break;
			case 3:	// �ڿ��ʹٲ� ��ũ -> ��ü
				System.out.println("�ڿ��� HanKookTire�� ��ü");
				car.backLeftTire = new HanKookTire("�ڿ���", 12);
				break;
			case 4:	// �ڿ����ʹٲ� ��ũ -> ��ü
				System.out.println("�ڿ����� KumHoTire�� ��ü");
				car.backRightTire = new KumHoTire("�ڿ�����", 13);
				break;
			}
			System.out.println("-------------------------");
		}
	}

}