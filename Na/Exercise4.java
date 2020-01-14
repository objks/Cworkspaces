package Na;

public class Exercise4 {
	// 중첩 for문을 이용하여 방정식 4x + 5y = 60의 모든 해를 구해서 (x, y) 형태로 출력하는
	// 프로그램을 작성하시오. 단, x와 y는 0보다 크거나 같은 자연수 입니다. (10점)
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
