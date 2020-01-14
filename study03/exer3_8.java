package study03;

public class exer3_8 {
	public static void main(String[] args) {
		double x = 5.0;
		double y = 0.0;

//		double z = x % y;	// NaN
		double z = x / y;	// Infinite
		
		if(Double.isNaN(z)){	// z의 값이 NaN인지 검사하는 루틴
		System.out.println("0.0으로 나눌 수 없습니다");
		} else if(Double.isInfinite(z)){	// Infinite 검사
			System.out.println("0.0으로 나눌 수 없습니다");
		} else{
			double result = z+10;
			System.out.println("결과 : " + result);
		}
	}
}
