package Na;

import java.util.Scanner;

public class Na {
	int num;
	int user;
	
	public void Dice() {
		num = (int)Math.random() * 6 + 1;
	}
	
	public int getInput(String input) {
		System.out.print(input);
		Scanner s = new Scanner(System.in);
		return s.nextInt();
	}
	
	public void check() {
		if(num == user)
			System.out.println("맞았습니다");
		else 
			System.out.println("틀렸습니다");
	}
	
	public void start() {
		user = getInput("예상값을 입력 : ");
		Dice();
		check();
	}
	
	public static void main(String[] args) {
		Na na = new Na();
		na.start();	
		
	}

}
