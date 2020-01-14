package chap05;
import java.util.Scanner;

public class Exer4_7 {

	public static void main(String[] args) {
		boolean run = true;

		int balance = 0;
		int menu;
		int num1=0;
		
		Scanner scanner = new Scanner(System.in);

		while (run) {
			System.out.println("ㅡㅡㅡㅡㅡㅡ----------------ㅡㅡㅡㅡㅡㅡ");
			System.out.println("1. 예금 | 2. 출금 | 3. 잔고 | 4. 종료");
			System.out.println("ㅡㅡㅡㅡㅡㅡ----------------ㅡㅡㅡㅡㅡㅡ");
			System.out.print("선택 > ");
			menu=scanner.nextInt();
			
			// 작성
			if (menu==1){
				System.out.printf("예금액 > ");
				num1=scanner.nextInt();
				balance+=num1;
			} 
			else if(menu==2){
				System.out.printf("출금액 > ");
				num1=scanner.nextInt();
				if(balance > num1)
					balance-=num1;
				else
					System.out.println("잔고 부족 : " +balance);
			}			
			else if(menu==3){
				System.out.printf("잔고 > ");
				System.out.println(balance);
			} 
			else if(menu==4){
				run = false;
			}
			else{
				System.out.println("올바른 메뉴를 입력하세요 : "+menu);
		}
	}
		System.out.println("프로그램 종료");
	}
}
