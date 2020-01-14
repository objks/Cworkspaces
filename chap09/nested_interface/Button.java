package chap09.nested_interface;

import javax.xml.bind.Marshaller.Listener;

// 안드로이드 앱 버튼
public class Button {
	// 필드 : 버튼이 눌렸을 때 처리해주는 기능을 하는 인터페이스를 선언
	OnClickListener listener;
	
	// Setter
	public void setOnClickListener(OnClickListener listener) {
		this.listener = listener;
	}
	
	// 버튼이 눌리면 처리하는 함수
	public void touch() {	// 메인으로 처리
		listener.onClick();	// 응답
	}
	
	// 중첩 인터페이스
	interface OnClickListener {
		// 추상 메소드
		void onClick();
	}
}
