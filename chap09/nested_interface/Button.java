package chap09.nested_interface;

import javax.xml.bind.Marshaller.Listener;

// �ȵ���̵� �� ��ư
public class Button {
	// �ʵ� : ��ư�� ������ �� ó�����ִ� ����� �ϴ� �������̽��� ����
	OnClickListener listener;
	
	// Setter
	public void setOnClickListener(OnClickListener listener) {
		this.listener = listener;
	}
	
	// ��ư�� ������ ó���ϴ� �Լ�
	public void touch() {	// �������� ó��
		listener.onClick();	// ����
	}
	
	// ��ø �������̽�
	interface OnClickListener {
		// �߻� �޼ҵ�
		void onClick();
	}
}
