package chap09.nested_interface;

import chap09.nested_interface.Button.OnClickListener;

public class InternetConnect implements OnClickListener {

	@Override
	public void onClick() {
		System.out.println("네이버에 접속합니다");
	}

}
