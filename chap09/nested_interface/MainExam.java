package chap09.nested_interface;

public class MainExam {

	public static void main(String[] args) {
		Button button1 = new Button();	// 네이버에 접속
		Button button2 = new Button();	// 전화거는 앱을 구동
		button1.setOnClickListener(new InternetConnect());
		button1.touch();	// 네이버에 접속
		button2.setOnClickListener(new Call());
		
	}

}
