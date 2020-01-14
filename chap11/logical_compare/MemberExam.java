package chap11.logical_compare;

public class MemberExam {

	public static void main(String[] args) {
   		Member m1 = new Member("홍길동", "1234");
		Member m2 = new Member("홍길동", "1234");
		
		if(m1.hashCode() == m2.hashCode()) {
			System.out.println("해쉬코드값이 동일함");
		} else {
			System.out.println("해쉬코드값 다름");
		}
		
		if(m1.equals(m2)) {
			System.out.println("동일합니다");
		} else {
			System.out.println("다릅니다");
		}
		
		System.out.println(m1.toString());	// 객체의 정보를 출력
	}
}
