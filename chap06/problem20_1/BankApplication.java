package chap06.problem20_1;

import java.util.Scanner;

public class BankApplication {
	private static final int MAX_ACCOUNT = 100; // 최대 계좌수

	// 계좌정보를 저장하는 필드 : 배열
	// 1. 정적 필드로 선언하는 방법 : 하나만 필요할 때
	static Account accountArray[];
	static int count = 0;
	static BankApplication ba;
	// 키보드로부터 데이터를 입력받기 위하여
	static Scanner scanner = new Scanner(System.in);

	// 2. 인스턴스 필드를 사용하는 방법 : 여러 개를 사용해야 할 경우
	Account accountArray2[];
	int count2 = 0;
	String jigum; // 권선, 터미널

	
	public static void main(String[] args) {
		accountArray = new Account[MAX_ACCOUNT];
		// ba = new BankApplication();
		// ba.accountArray2 = new Account[MAX_ACCOUNT];
		boolean run = true;
		while (run) { // 메뉴를 입력받아서 처리하는 부분
			System.out.println("------------------ㅡㅡㅡㅡㅡㅡㅡㅡㅡ---------------------");
			System.out.println("1.계좌생성 | 2.계좌목록 | 3.예금 | 4.출금 | 5.종료 | 6. 잔액조회");
			System.out.println("------------------------------ㅡㅡㅡㅡㅡㅡㅡㅡㅡ---------");
			System.out.print("선택> ");

			int selectNo = scanner.nextInt();
			if (selectNo == 1)
				createAccount();
			else if (selectNo == 2)
				accountList();
			else if (selectNo == 3)
				deposit();
			else if (selectNo == 4) // 다시 처음부터 설명을 해달라
				withdraw();
			else if (selectNo == 5)
				run = false; // 반복문을 탈출하는 방법
			else if (selectNo == 6) // 계좌 잔액 조회
				retrieveAccount();
		}
		System.out.println("프로그램 종료");
	}

	private static void retrieveAccount() {	// 잔액조회
		System.out.println("------------");
		System.out.println("잔액조회");
		System.out.println("------------");
		System.out.print("계좌번호: "); // 줄을 바꾸지 않으므로 print
		String ano = scanner.next(); // 문자열을 입력받을 때 : next()
		Account account	= findAccount(ano);	// Account
		if(account == null) {	// 없는 계좌
			System.out.println("계좌를 먼저 개설하시오.");
		} else {	// 계좌검색 성공
			System.out.println(account.getAno() + "\t" + account.getOwner() + "\t" + account.getBalance());
		}
	}

	private static void withdraw() {
		System.out.println("------------");
		System.out.println("출 금");
		System.out.println("------------");
		// 입력 데이터 : 계좌번호, 예금액 -> 결과 출력
		System.out.print("계좌번호: "); // 줄을 바꾸지 않으므로 print
		String ano = scanner.next(); // 문자열을 입력받을 때 : next()
		System.out.print("출금액: "); // 줄을 바꾸지 않으므로 print
		int withdraw = scanner.nextInt();// 정수를 입력받을 때 : nextInt()
		Account account	= findAccount(ano);	// Account
		if(account == null) {	// 없는 계좌
			System.out.println("계좌를 먼저 개설하시오.");
		} else {	// 계좌검색 성공
			int balance = account.getBalance();
			if(balance < withdraw) {	// 잔고부족
				System.out.println("잔고가 부족합니다");
			} else {
				account.setBalance(balance - withdraw);
				System.out.println("결과 : 출금이 성공하였습니다.");
			}
		}
	}

	private static void deposit() {
		System.out.println("------------");
		System.out.println("예 금");
		System.out.println("------------");
		// 입력 데이터 : 계좌번호, 예금액 -> 결과 출력
		System.out.print("계좌번호: "); // 줄을 바꾸지 않으므로 print
		String ano = scanner.next(); // 문자열을 입력받을 때 : next()
		System.out.print("예금액: "); // 줄을 바꾸지 않으므로 print
		int deposit = scanner.nextInt();// 정수를 입력받을 때 : nextInt()
		Account account	= findAccount(ano);	// Account
		// 성공과 실패
		if(account == null) {	// 없는 계좌일 경우
			System.out.println("계좌를 먼저 개설하세요.");
		} else {	// 계좌검색 성공
			// 방법 1
//			account.addBalance(deposit);	// 잔고가 갱신
			// 방법 2
			int balance = account.getBalance();
			account.setBalance(balance + deposit);	// 잔고를 설정
			System.out.println("예금이 성공하였습니다.");
		}
	}

	// 매개변수 : ano (계좌번호)
	// 반환형 : 계좌정보를 저장한 Account 객체(ano, owner, balance)
	// 동작 : 매개변수로 전달된 계좌번호를 가진 계좌를 검색해서 반환
	public static Account findAccount(String ano) {
		for (int i = 0; i < count; i++) {
			// ano랑 accountArray[i].getAno()를 비교(내용 비교 -> equals())
			if(ano.equals(accountArray[i].getAno())) {
				return accountArray[i];
			}
		}
		return null;		// 못 찾음(실패)
	}

	private static void accountList() {
		System.out.println("------------");
		System.out.println("계좌목록");
		System.out.println("------------");
		for (int i = 0; i < count; i++) {
			Account account = accountArray[i];
			System.out.println(account.getAno() + "\t" + account.getOwner() + "\t" + account.getBalance());

			/*
			 * 위에껄 길게 늘린것. 동일함
			 *  System.out.println(accountArray[i].getAno() +
			 * "\t" + accountArray[i].getOwner() + "\t" +
			 * accountArray[i].getBalance());
			 */
		}
	}

	public static void createAccount() { // 정적 메소드 main()에서 호출되었으므로 정적 메소드
		System.out.println("------------");
		System.out.println("계좌생성");
		System.out.println("------------");
		// 계좌번호, 계좌주, 초기입금액 입력 받는다.
		System.out.print("계좌번호: "); // 줄을 바꾸지 않으므로 print
		String ano = scanner.next(); // 문자열을 입력받을 때 : next()
		System.out.print("계좌주: "); // 줄을 바꾸지 않으므로 print
		String owner = scanner.next(); // 문자열을 입력받을 때 : next()
		System.out.print("초기입금액: "); // 줄을 바꾸지 않으므로 print
		int balance = scanner.nextInt();// 정수를 입력받을 때 : nextInt()
		Account account = new Account(ano, owner, balance);
		accountArray[count] = account;
		count++;
		// accountArray[count++] = new Account(ano, owner, balance);
		System.out.println("결과: 계좌가 생성되었습니다.");
	}
}
