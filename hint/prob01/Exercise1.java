package study.hint.prob01;

public class Exercise1 {
	public static void main(String[] args) {
		int x = 2;
		int y = 5;
		char c = 'A'; // 'A'�� �����ڵ�� 65

		System.out.println(1 + x << 33);	// int(32 bit) : 33��Ʈ �̵��� �ƴ϶� 1��Ʈ
			// (1 + x) << 1 = 3 << 1 = 3 * 2 = 6
		System.out.println(y >= 5 || x < 0 && x > 2);	// true || x = x�� true/false ���ο� ������� true
		System.out.println(y += 10 - x++);	// 5 + 8 = 13
		System.out.println(x += 2);	// x=3 -> 3+2=5
		System.out.println(!('A' <= c && c <= 'Z'));	// !(true && true) = !(true) = false
		System.out.println('C' - c);	// 'C' - 'A' = 2
		System.out.println('5' - '0');	// 5
		System.out.println(c + 1);		// char + int = int + int = 66
		System.out.println(++c);		// 'B'
		System.out.println(c++);		// 'B'
		System.out.println(c);			// 'C'
	}
}
