package Na;

import javax.tools.DiagnosticCollector;

/*
while���� Math.random() �żҵ带 �̿��Ͽ� �� ���� �ֻ����� ������ �� ������ ���� (��1,��2) ���·� ����ϰ�, 
���� ���� 6�� �ƴϸ� ��� �ֻ����� ������, ���� ���� 6�̸� ������ ���ߴ� �ڵ带 �ۼ��Ͻÿ�. 
���� ���� 6�� �Ǵ� ������ (1, 5), (2, 4), (3, 3), (4, 2), (5, 1)�Դϴ�.
 */
public class Exercise5 {

	public static void main(String[] args) {
		// Math.random() : ���� �޼ҵ�(��ȯ�� : double 0<= d < 1)
		boolean run = true;
		while(run) {
			int first = dice();
			int second = dice();
			System.out.println("(" + first + "," + second +")");
			if(first + second == 6) {
				run = false;
			}
		}
		
	}
	
	// �ֻ����� ������ �޼ҵ�
	public static int dice() {
		return (int)(Math.random() * 6 ) + 1;	// 1~6
	}
}
