package study.hint.prob05;

public class Exercise5 {

	public static void main(String[] args) {
		// Math.random() : ���� �޼ҵ� (��ȯ�� : double 0<= d <1)
		boolean run = true;
		while(run) {
			int first = jusawi();
			int second = jusawi();
			System.out.println("(" + first + ", " + second + ")");
			if(first + second == 6) {	// ����
				run = false;
			}
		}
	}

	// �ֻ����� ������ �޼ҵ�
	public static int jusawi() {
		return (int)(Math.random() * 6) + 1;	// 1~6
	}
}
