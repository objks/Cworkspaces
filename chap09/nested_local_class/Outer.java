package chap09.nested_local_class;

public class Outer {
	public int field1;
	
	void method2() { }
	
	void method4() { }

	// 필드, 생성자, 메소드
	
	public void method(int arg, int arg2) {
		int localVar = 10;		// 로컬 변수
		int localVar2 = 20;
		
//		arg = 20;				final 에러남
//		localVar = 30;			final -> 수정 불가
		arg2 = 50;				// 수정 가능
		localVar2 = 100;		// 일반적인 변수라 수정가능
				
		// 로컬 클래스 : 메소드안에 있는 클래스
		class InnerClass {
			int field1;
			
			void method2() {
				
			}
			int localMethod() {
				// Outer 클래스의 메소드 method의 매개변수, 로컬변수가 사용될 때
				int result = arg + localVar;
				return result;
			}
			void method3() {
				this.field1 = 30;			// IneerClass에 있는 field1
				Outer.this.field1 = 50;		// OuterClass에있는 field1
				method2();					// InnerClass에 있는 method			
				Outer.this.method2();
				method4();
			}
		}
	}
	
}
