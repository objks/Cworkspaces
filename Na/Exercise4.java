package Na;

public class Exercise4 {
	// ��ø for���� �̿��Ͽ� ������ 4x + 5y = 60�� ��� �ظ� ���ؼ� (x, y) ���·� ����ϴ�
	// ���α׷��� �ۼ��Ͻÿ�. ��, x�� y�� 0���� ũ�ų� ���� �ڿ��� �Դϴ�. (10��)
	// x : 0 ~ 60/4 = 15
	// y : 0 ~ 60/5 = 12
	public static void main(String[] args) {
		for(int x=0; x<= 15; x++) {
			for(int y=0; y <=12; y++) {
				if(4 * x + 5 * y == 60) {
					System.out.println("(" + x + " ," + y + ")");
				}
			}
		}
	}

}
