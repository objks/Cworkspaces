package chap09.nested_interface;

import chap09.nested_interface.Button.OnClickListener;

public class Call implements OnClickListener {

	@Override
	public void onClick() {
		System.out.println("��ȭ�� �̴ϴ�");
	}

}
