package chap08_interface_review;

public class MariaDBExam {

	public static void main(String[] args) {
		ClassAm maria = new ClassAm(new MariaDB());
		maria.insert();
	}

}
