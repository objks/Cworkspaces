package chap06.problem20;

import java.util.Scanner;

public class BankApplication {
	private static Account[] accountArray = new Account[100];
	private static Scanner scanner = new Scanner(System.in);
	private static int count;
	
	public static void main(String[] args) {
		boolean run =true;
		while(run) {
			System.out.println("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");
			System.out.println("1. 계좌 생성 | 2. 계좌목록 | 3. 예금 | 4. 출금 | 5. 종료 | 6. 잔액조회");
			System.out.println("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");
			System.out.print("선택 > ");
			
			int selectNo = scanner.nextInt();
			
			if(selectNo == 1) {
				createAccount();
			} else if ( selectNo ==2) {
				accountList();
			} else if ( selectNo ==3) {
				deposit();
			} else if ( selectNo ==4) {
				withdraw();
			} else if ( selectNo ==5) {
				run = false;
			} else if (selectNo ==6) {
				retrieveAccount();
			}
		}
		System.out.println("프로그램 종료");
	}
	
	private static void retrieveAccount() {
		// TODO Auto-generated method stub
		
	}

	private static void accountList() {
		System.out.println("******************");
		System.out.println("계좌목록");
		System.out.println("******************");
		for(int i = 0; i < count;i++) {
			Account account = accountArray[i];
			System.out.println(account.getAno() + "\t" + account.getOwner() + "\t" + account.getBalance());
		}
	}

	// 계좌 생성하기
	private static void createAccount() {	// 계좌수가 100보다 큰지?
		if (count == 100) {
			System.out.println("계좌를 개설할 수 있는 최대수를 초과하였습니다.");
			return;
		}
		System.out.println("******************");
		System.out.println("계좌생성");
		System.out.println("******************");
		System.out.print("계좌번호 : ");
		String ano = scanner.next();
		System.out.print("계좌주 : ");
		String owner = scanner.next();
		System.out.print("초기입금액: ");
		int balance = scanner.nextInt();	// int -> nextInt
		accountArray[count++] = new Account(ano, owner, balance);
		System.out.println("결과 : 계좌가 생성되었습니다.");
	}
	
	// 예금하기
	private static void deposit() {
		System.out.println("******************");
		System.out.println("예     금");
		System.out.println("******************");
		System.out.print("계좌번호 : ");
		String ano = scanner.next();
		System.out.print("예금액 : ");
		int value = scanner.nextInt();
		
		// findAccount() : 저장되어 계좌를 찾는 메소드를 이용
		Account account = findAccount(ano)
		if(account != null) { 	// 계좌 검색 성공
			account.setBalance(value);
		} else { 	// 없는 계좌
			System.out.println("없는 계좌이다");
		}
		System.out.println("결과 : 예금 되었습니다.");
	}
	
	// 출금하기
	private static void withdraw () {
		System.out.print("계좌번호 : ");
		Scanner sc = new Scanner(System.in);
		System.out.print("출금액 : ");
		Scanner sc = new Scanner(System.in);
		System.out.print("결과 : ");
		Scanner sc = new Scanner(System.in);
	}
	
	// Account 배열에서 ano와 동일한 Account 객체 찾기
	private static Account findAccount(String ano) {
		// accountArray[]
		for(int i=0;i<count;i++) {
			Account account = accountArray[i];
			if(account.getAno().equals(ano)) {
				return account;
			}
		}
		return null;	// 계좌를 못 찾을 경우
	}
}
