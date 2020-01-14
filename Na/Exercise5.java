package Na;

import javax.tools.DiagnosticCollector;

/*
while문과 Math.random() 매소드를 이용하여 두 개의 주사위를 던졌을 때 나오는 눈을 (눈1,눈2) 형태로 출력하고, 
눈의 합이 6이 아니면 계속 주사위를 던지고, 눈의 합이 6이면 실행을 멈추는 코드를 작성하시오. 
눈의 합이 6이 되는 조합은 (1, 5), (2, 4), (3, 3), (4, 2), (5, 1)입니다.
 */
public class Exercise5 {

	public static void main(String[] args) {
		// Math.random() : 정적 메소드(반환형 : double 0<= d < 1)
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
	
	// 주사위를 던지는 메소드
	public static int dice() {
		return (int)(Math.random() * 6 ) + 1;	// 1~6
	}
}
