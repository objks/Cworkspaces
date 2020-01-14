package chap06.class_review;

public class AirPlane {
	// ���� ��� : �ʵ�, ������, �޼ҵ�
	
	// �ʵ� : �Ӽ�, ����, ��ǰ, ������, ....
	String company ="����";	// ������ : ����
	String owner = "�����װ�";	// ����ȸ�� : ���� �װ�
		// Ŭ���� ���� �� ������ ���� ������.
	
	
	int speed;	// �ӵ�
		// �ʱⰪ�� �������� ����
	int height;	//����
	int seatNum;	//�°� ��
	
	Engine engine;	// ��ǰ
	Wheel front;	// �� ����
	Wheel back;		// �� ����
	
	
	// ������
	AirPlane() {	// public(x) -> default
		// default ���� ������ : ���� ��Ű�� ���� Ŭ�������� ������ �����ϴ�
	}
	// �ٸ� ������ -> ������ �����ε�(Overloading) -> �Ű������� Ÿ��, ����, ��ġ
	public AirPlane(String company) {
		this.company = company;
	}
//	public AirPlane(String owner) {	// ���� �����ڿ� ������ ���Ѵ� : ���ȵ�
//		this.company = company;
//	}
	public AirPlane(String company, int speed) {	// ��������
		this.company = company;
		this.speed = speed;
	}
	
	public AirPlane(int speed, String company) {	// ��������
		this(company, speed, 250);
	}
	
	public AirPlane(String company, int speed, int seat) {	// ��������
		this.company = company;
		this.speed = speed;
		seatNum = seat;		// �Ű������� �ʵ���� �ٸ��Ƿ� this�� ������ �ʾƵ��ȴ�
	}
}