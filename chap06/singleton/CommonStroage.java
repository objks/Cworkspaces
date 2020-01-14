package chap06.singleton;

public class CommonStroage {
	private static CommonStroage in = new CommonStroage();
	private CommonStroage() {  }
	public static CommonStroage getIn() {
		return in;
	}
	
	int data = 10;
}
