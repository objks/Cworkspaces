package chap09.nested_interface;

public class MainExam {

	public static void main(String[] args) {
		Button button1 = new Button();	// ���̹��� ����
		Button button2 = new Button();	// ��ȭ�Ŵ� ���� ����
		button1.setOnClickListener(new InternetConnect());
		button1.touch();	// ���̹��� ����
		button2.setOnClickListener(new Call());
		
	}

}
