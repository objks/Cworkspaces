package study.hint.prob05;

public class Exercise5 {

	public static void main(String[] args) {
		// Math.random() : 정적 메소드 (반환형 : double 0<= d <1)
		boolean run = true;
		while(run) {
			int first = jusawi();
			int second = jusawi();
			System.out.println("(" + first + ", " + second + ")");
			if(first + second == 6) {	// 종료
				run = false;
			}
		}
	}

	// 주사위를 던지는 메소드
	public static int jusawi() {
		return (int)(Math.random() * 6) + 1;	// 1~6
	}
}
