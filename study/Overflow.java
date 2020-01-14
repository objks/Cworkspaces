package study;

public class Overflow {

	public static void main(String[] args) {
		int a = Integer.MAX_VALUE;	// int 로 표현할 수 있는 최댓값
		int b = Integer.MAX_VALUE;	// int 로 표현할 수 있는 최댓값
		int sum = a + b;	// 음수
		
		sum = add(a,b);
	}
	
	// 엉뚱한 결과가 나오는 것을 피할 수 있다
	// 직접 더하지말고 함수를 사용해서 가능한 에러(오류)를 줄여라
	private static int add(int a, int b) {
		if(a == Integer.MAX_VALUE && b == Integer.MAX_VALUE) {
			System.out.println("결과값이 넘칩니다.");
			return -1;	// 에러발생시 다른 처리 가능
		}
		else
			return a + b;
	}
}
