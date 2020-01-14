package study.hint.prob04;

// 4x + 5y = 60
// x : 0 ~ 60/4=15
// y : 0 ~ 60/5=12
public class Exercise4 {

	public static void main(String[] args) {
		for(int x = 0;x <= 15;x++) {
			for(int y = 0;y <= 12;y++) {
				if(4 * x + 5 * y == 60) {
					System.out.println("(" + x + ", " + y + ")");
				}
			}
		}
	}

}
