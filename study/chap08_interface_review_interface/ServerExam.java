package study.chap08_interface_review_interface;

public class ServerExam {

	public static void main(String[] args) {
		ClassA classA = new ClassA(new OracleDB());
		classA.insert();
		classA.select();
		ClassA classB = new ClassA(new MariaDB());
		classB.insert();
		classB.select();
		ClassA classC= new ClassA(new MSsql());
		classC.insert();
		classC.select();
	}

}
