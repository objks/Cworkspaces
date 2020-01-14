package chap07.method_override;

public class MainExam {

	public static void main(String[] args) {
		LazerPrinter printer = new LazerPrinter();
		printer.print("문서 1");	// 부모로부터 상속 받은 것, 자식(재정의) -> 자식이 재정의한 메소드를 실행(규칙)
		
	}

}
