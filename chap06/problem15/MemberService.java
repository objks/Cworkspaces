package chap06.problem15;

public class MemberService {
	// 메소드
	boolean login(String id, String psword) {
		// 조건문 == 주소 비교, equals 내용 비교
		if (id.equals("hong") && psword.equals("12345")) 
			return true;
		else 
			return false;			
	}
	
	void logout(String id) {
		// "로그아웃 되었습니다" 출력
		System.out.println("로그아웃 되었습니다.");
	}
}
