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
			System.out.println("�¾ҽ��ϴ�");
		else 
			System.out.println("Ʋ�Ƚ��ϴ�");
	}
	
	public void start() {
		user = getInput("������ �Է� : ");
		Dice();
		check();
	}
	
	public static void main(String[] args) {
		Na na = new Na();
		na.start();	
		
	}

}
