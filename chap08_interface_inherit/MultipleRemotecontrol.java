package chap08_interface_inherit;

import chap08_multiple_interface.RemoteControl;
import chap08_multiple_interface.Searchable;

public interface MultipleRemotecontrol extends RemoteControl, Searchable {
	// RemoteControl : 추상메소드 존재
	// RemoteControl Interface에서는 default 메소드 -> 추상메소드를 변경 가능
	void setMute(boolean mute);
	
	// Searchable : 추상메소드 존재
	
	// 자식 인터페이스의 추상메소드를 새로 추가
	
	void changeChannel(int cahnnel);
}
