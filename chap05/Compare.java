package chap05;

public class Compare {

	public static void main(String[] args) {
		// 기본 데이터 타입 변수
		// 정수, 실수, 논리
		int num=10;	// 저장 위치 : stack, 시점 : 변수가 초기화 될 때
		int var1;	// stack에 저장 되지않고
		var1 =20;	// stack에 저장된다.(값이 대입되는 시점)
		if(num==10){	// 변수에 저장된 값을 비교 : '=='
			System.out.println(num);
		}
		
		// 참조 타입 변수 : 배열(array), 열거형(enum), 클래스(class), Interface(인터페이스)
		String str="홍길동";		// str : 참조변수 -> stack에 저장 
				//"홍길동" : 힙 영역에 저장된다 -> 주소
				// str에는 "홍길동"이라는 string 개체의 주소를 저장
//				str=null;		// "홍길동" 객체에 접근할 수 있는 방법이 없어짐.
				
		String str2="홍길동";		// Heap영역에 저장된 동일한 객체
		if(str == str2)			//주소를 비교
			System.out.println("동일한 객체를 참조한다.");
		else
			System.out.println("다른 객체를 참조");
		if(str.equals(str2))	// 내용비교
			System.out.println("같은 데이터 값을 가진다");
		else
			System.out.println("다른 데이터 값을 가진다.");
		System.out.println("str2");
		String str3=null;	// 아무것도 참조하지 않음
		str3=method1();		// 메소드의 실행결과로 null이 반환
		if(str3 !=null)
			System.out.println("str3의 문자열의 길이 = "+str3);
		else	// null
			// 에러 처리를 한다.
			System.out.println("에러 발생");
		
		if(str.equals(str2)){
			System.out.println("같은 내용(값)");
		}
		else{
			System.out.println("다른 내용(값)");
		}
				
	}

}
