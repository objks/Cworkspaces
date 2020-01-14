package study.chap08_interface_review_interface;

public class ServerExample {

	public static void main(String[] args) {
		ClassA classA = new ClassA(new OracleDB());
		classA.insert();
		classA.select();
	}

}
