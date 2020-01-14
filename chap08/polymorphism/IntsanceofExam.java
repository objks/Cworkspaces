package chap08.polymorphism;

import chap08_interface_usage.RemoteControl;
import chap08_interface_usage.SettopBox;
import chap08_interface_usage.Television;

public class IntsanceofExam {

	public static void main(String[] args) {
		// 자동타입변환
		RemoteControl rc = new SettopBox();	// 인터페이스 타입 변수이름 = new
//		rc.setVolume= 10;	 구현 객체에서 정의한 필드
		// 강제타입변환
		SettopBox sb = (SettopBox)rc;
		if(rc instanceof Television) {
			Television tv = (Television)rc;		// 성공 -> Error(ClassCastExcption 발생)
		} else if(rc instanceof SettopBox) {
			SettopBox s2 = (SettopBox)rc;
		}
	
	}

}
