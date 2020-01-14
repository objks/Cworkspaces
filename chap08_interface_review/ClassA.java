package chap08_interface_review;

public class ClassA {
	// ÇÊµå
	OracleDB db = new OracleDB();
		
	public void insert() {
		db.insert();
	}
	
	public void select() {
		db.select();
	}
}
